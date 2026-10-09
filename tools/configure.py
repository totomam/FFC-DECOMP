#!/usr/bin/env python3
# Generates build.ninja. Adapted from AetiasHax/ph tools/configure.py (CC0).
# Differences: tools come from tools/setup.sh (no downloads), C99 + Thumb by default,
# per-file flag overrides, and the final gate is `dsd check modules` (dsd can't build DSi ROMs yet).
#
# Usage: python3 tools/configure.py [usa]   then   ninja
import argparse
import json
import os
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
import ninja_syntax  # noqa: E402

parser = argparse.ArgumentParser(description="Generates build.ninja")
parser.add_argument("version", nargs="?", default="usa", help="Game version")
parser.add_argument("--mwcc", default="1.2p2", help="CodeWarrior version dir under tools/mwccarm")
parser.add_argument("--wibo", type=Path, default=Path("tools/bin/wibo"))
parser.add_argument("--dsd", type=Path, default=Path("tools/bin/dsd"))
args = parser.parse_args()

CC_FLAGS = " ".join([
    "-O4,p",              # V54: empirically supported profile
    "-enum int",
    "-lang c99",
    "-Cpp_exceptions off",
    "-gccext,on",
    "-proc arm946e",
    "-gccinc",
    "-ipa file",
    "-interworking",
    "-inline on,noauto",
    "-char signed",
    "-thumb",             # most game code is Thumb; use `#pragma thumb off` for ARM functions
    "-w off",
    "-sym on",
    "-nolink",
    "-msgstyle gcc",
])
LD_FLAGS = "-proc arm946e -dead -nostdlib -interworking -map closure,unused -msgstyle gcc"
ARM9_LD_FLAGS = "-m Entry"

root = Path(".")
config_path = root / "config"
build_path = root / "build"
src_path = root / "src"
libs_path = root / "libs"
extract_path = root / "extract"
tools_path = root / "tools"
mwcc_path = tools_path / "mwccarm" / args.mwcc
license_path = tools_path / "mwccarm" / "license.dat"

includes = [root / "include"]
for r, dirs, _ in os.walk(libs_path):
    includes += [Path(r) / d for d in dirs if d == "include"]
CC_INCLUDES = " ".join(f"-i {i}" for i in includes)

WIBO = str(args.wibo)
DSD = str(args.dsd)
CC = str(mwcc_path / "mwccarm.exe")
LD = str(mwcc_path / "mwldarm.exe")
PYTHON = sys.executable
ENV = f"LM_LICENSE_FILE={license_path.resolve()}"


def config_files(game_config: Path, name: str) -> list[str]:
    return sorted(f"{r}/{f}" for r, _, fs in os.walk(game_config) for f in fs if f == name)


def source_files():
    for d in (src_path, libs_path):
        for r, _, fs in os.walk(d):
            for f in sorted(fs):
                if Path(f).suffix in (".c", ".cpp"):
                    yield Path(r) / f


def file_cc_flags(path: Path) -> str:
    """Per-file overrides: a first-line comment `/* cflags: -nointerworking */`.
    A flag `-nofoo` replaces `-foo` from CC_FLAGS."""
    flags = ["-lang=c++" if path.suffix == ".cpp" else ""]
    with path.open(encoding="utf-8", errors="replace") as f:
        first = f.readline()
    if "cflags:" in first:
        flags.append(first.split("cflags:", 1)[1].split("*/", 1)[0].strip())
    return " ".join(x for x in flags if x)


def base_cc_flags(extra: str) -> str:
    flags = CC_FLAGS
    for tok in extra.split():
        if tok.startswith("-no"):
            flags = flags.replace(f"-{tok[3:]} ", "").replace(f"-{tok[3:]}", "")
    return flags


def main():
    game = args.version
    game_config = config_path / game
    arm9_config = game_config / "arm9" / "config.yaml"
    game_build = build_path / game
    rom_config = extract_path / game / "config.yaml"
    if not game_config.is_dir():
        sys.exit(f"Version '{game}' not recognized")

    out = subprocess.run([DSD, "json", "delinks", "--config-path", str(arm9_config)],
                         capture_output=True, text=True)
    if out.returncode != 0:
        sys.exit(f"Error running dsd:\n{out.stderr.strip()}")
    delinks_json = json.loads(out.stdout)
    files = delinks_json["files"]
    lcf_file = delinks_json["arm9_lcf_file"]
    objects_file = delinks_json["arm9_objects_file"]

    delinks_files = config_files(game_config, "delinks.txt")
    dsd_configs = delinks_files + config_files(game_config, "relocs.txt") + config_files(game_config, "symbols.txt")
    delink_outputs = sorted({f["delink_file"] for f in files})

    with open("build.ninja", "w", encoding="utf-8") as fh:
        n = ninja_syntax.Writer(fh)
        n.variable("python", PYTHON)
        n.newline()

        n.rule("extract", f"{DSD} rom extract --rom $in --output-path $output_path")
        n.rule("delink", f"{DSD} delink --config-path $config_path")
        n.rule("disassemble", f"{DSD} dis --config-path $config_path --asm-path $output_path --ual")
        n.rule("mwcc",
               f"{ENV} {WIBO} {CC} $base_flags {CC_INCLUDES} $cc_flags -d {game} -MD -c $in -o $basedir"
               f" && $python tools/transform_dep.py $basefile.d $basefile.d",
               depfile="$basefile.d", description="mwcc $in")
        n.rule("lcf", f"{DSD} lcf -c $config_path")
        n.rule("mwld", f"{ENV} {WIBO} {LD} {LD_FLAGS} $extra_ld_flags @$objects_file $lcf_file -o $out",
               description="mwld $out")
        n.rule("rom_config", f"{DSD} rom config --elf $in --config $config_path")
        n.rule("check_modules", f"{DSD} check modules --config-path $config_path --fail")
        n.rule("check_symbols",
               f"{DSD} check symbols --config-path $config_path --elf-path $elf_path --fail --max-lines 20")
        n.rule("objdiff", f"{DSD} objdiff --config-path $config_path --custom-make ninja")
        n.rule("configure", f"$python tools/configure.py {subprocess.list2cmdline(sys.argv[1:])}",
               generator=True)
        n.newline()

        n.build("build.ninja", "configure",
                implicit=[str(Path(__file__).resolve()), DSD, *dsd_configs])
        n.newline()

        baserom = root / "rom" / f"baserom_{game}.nds"
        n.build(str(rom_config), "extract", str(baserom), implicit=DSD,
                variables={"output_path": str(extract_path / game)})
        n.newline()

        if delink_outputs:
            n.build(delink_outputs, "delink", dsd_configs + [str(rom_config)], implicit=DSD,
                    variables={"config_path": str(arm9_config)})
            n.build("delink", "phony", delink_outputs)
        n.build([lcf_file, objects_file], "lcf", delinks_files + [str(rom_config)], implicit=DSD,
                variables={"config_path": str(arm9_config)})
        n.build("dis", "disassemble", dsd_configs, implicit=DSD,
                variables={"config_path": str(arm9_config), "output_path": str(game_build / "asm")})
        n.newline()

        mwcc_implicit = [CC, WIBO, "tools/transform_dep.py"]
        for src in source_files():
            obj = game_build / src.with_suffix(".o")
            extra = file_cc_flags(src)
            n.build(str(obj), "mwcc", str(src), implicit=mwcc_implicit, variables={
                "base_flags": base_cc_flags(extra),
                "cc_flags": extra,
                "basedir": str(obj.parent),
                "basefile": str(obj.with_suffix("")),
            })
        n.newline()

        elf = str(game_build / "arm9.o")
        objects = [f["object_to_link"] for f in files]
        n.build(elf, "mwld", [*objects, lcf_file, objects_file], implicit=[LD, WIBO], variables={
            "extra_ld_flags": ARM9_LD_FLAGS, "lcf_file": lcf_file, "objects_file": objects_file})
        n.build("arm9", "phony", elf)
        rom_out = str(game_build / "build" / "rom_config.yaml")
        n.build(rom_out, "rom_config", elf, implicit=DSD, variables={"config_path": str(arm9_config)})
        n.newline()

        n.build("check_modules", "check_modules", rom_out, variables={"config_path": str(arm9_config)})
        n.build("check_symbols", "check_symbols", elf,
                variables={"config_path": str(arm9_config), "elf_path": elf})
        n.build("check", "phony", ["check_modules", "check_symbols"])
        n.build("objdiff.json", "objdiff", dsd_configs, implicit=DSD, variables={"config_path": str(arm9_config)})
        n.build("objdiff", "phony", "objdiff.json")
        n.newline()
        n.default(["check_modules"])


if __name__ == "__main__":
    main()
