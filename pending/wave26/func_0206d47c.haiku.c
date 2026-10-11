#include "ffc/types.h"

extern int32_t func_0208da6c(void *fn, void *p);
extern void func_0206cb44(void *p);
extern void func_0206d4bc(void);

void func_0206d47c(uint8_t *p) {
    if (p[0x321c]) {
        p[0x30b4] = 1;
        *(uint32_t *)(p + 0x30b0) = 2;
        return;
    }
    p[0x30b4] = 0;
    if (func_0208da6c((void *)func_0206d4bc, p + 0x31c0) != 2) {
        func_0206cb44(p);
    }
}
