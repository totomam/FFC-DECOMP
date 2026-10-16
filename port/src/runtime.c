/* Host runtime for the FFC port: trap stand-ins, static initializers and the entry point. */
#include <stdio.h>
#include <stdlib.h>

#include "hal.h"

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

/* Game entry (crt0 -> main in the ROM). */
extern void ffc_main(void);

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    ffc_hal_init();
    if (!getenv("FFC_RUN")) {
        puts("ffc port: linked, DS address space mapped (set FFC_RUN=1 to boot)");
        return 0;
    }
    ffc_run_ctors(0);
    ffc_main();
    puts("ffc: main returned");
    return 0;
}
