#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern char data_020b228c[];

void func_0207240c(void *arg) {
    uint32_t *p = (uint32_t *)func_0205681c(0x1c);
    if (p != 0) {
        p[3] = p[3] & ~0xffu;
        p[0] = (uint32_t)data_020b228c;
        p[5] = (uint32_t)arg;
        p[6] = 0;
    }
}
