/* Host runtime for the FFC port (P2 skeleton): trap stand-ins and the entry point. */
#include <stdio.h>
#include <stdlib.h>

void ffc_trap(const char *name)
{
    fprintf(stderr, "ffc: stand-in hit: %s (function not decompiled yet)\n", name);
    abort();
}

/* Game entry (crt0 -> main in the ROM). P3 replaces this with the SDK bring-up + main loop. */
extern void ffc_main(void);

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    if (getenv("FFC_RUN"))
        ffc_main();
    puts("ffc port skeleton: linked");
    return 0;
}
