/* Host runtime for the FFC port: trap stand-ins, static initializers and the entry point. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "hal.h"

/* r1 return of functions lifted by tools/port_lift.py (64-bit returns, Div-style pairs). */
uint32_t ffc_r1;
/* CPSR of lifted ARM code (mrs/msr): system mode, IRQs enabled. */
uint32_t ffc_cpsr = 0x1f;

void ffc_trap(const char *name)
{
    fprintf(stderr, "ffc: stand-in hit: %s (function not decompiled yet), frame %llu\n", name,
            (unsigned long long)ffc_hal_frame());
    abort();
}

/* tools/port_gendata.py: [0] = main, [1 + n] = overlay n. */
struct ffc_ctor_list {
    void (**fn)(void);
    int n;
};
extern const struct ffc_ctor_list ffc_ctors[];

void ffc_run_ctors(int index)
{
    int i;
    for (i = 0; i < ffc_ctors[index].n; i++)
        if (ffc_ctors[index].fn[i])
            ffc_ctors[index].fn[i]();
}

/* crt0 (ROM `Entry`, ARM): its hardware setup (TCM/stack registers, ITCM-copied probe stubs, memory clears,
 * autoload, IRQ vector) is the HAL's job on the host; the rest runs as in the ROM. */
extern void func_02056898(void); /* NitroStartUp: OS_Init, ... */
extern void func_02004da0(void); /* crt0: run and clear the DTCM callback list */
extern void ffc_main(void);      /* NitroMain = the game's main */

static void ffc_crt0(void)
{
    func_02056898();
    ffc_run_ctors(0); /* __call_static_initializers */
    func_02004da0();
    ffc_main();
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    ffc_hal_init();
#ifdef __EMSCRIPTEN__
    /* The browser has no process environment: boot unless FFC_RUN=0 (emscripten ENV, e.g. from node). */
    if (getenv("FFC_RUN") && getenv("FFC_RUN")[0] == '0') {
#else
    if (!getenv("FFC_RUN")) {
#endif
        puts("ffc port: linked, DS address space mapped (set FFC_RUN=1 to boot)");
        return 0;
    }
    ffc_crt0();
    puts("ffc: main returned");
    return 0;
}
