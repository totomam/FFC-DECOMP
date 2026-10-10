#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int x);
extern char data_020b1d98[];

void *func_0206ccd4(void) {
    void *p = func_0205681c(0x80);
    if (p) {
        func_02056c9c(p, 0);
        *(char **)p = data_020b1d98;
    }
    return p;
}
