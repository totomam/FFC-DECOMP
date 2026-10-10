#include "ffc/types.h"

extern char data_ov005_021995ec[];
extern void *func_02056dd4(void);
extern void func_0206047c(uint32_t);
extern void func_ov005_02198d0c(void *);
extern void func_0200d5ec(void *);
extern void func_020695d0(void *);

void *func_ov005_02197c14(void *p)
{
    uint8_t *s = (uint8_t *)p;
    *(char **)s = data_ov005_021995ec;
    if (*(uint32_t *)(s + 0x150) == 1) {
        func_0206047c(*(uint32_t *)((uint8_t *)func_02056dd4() + 0x20));
    }
    func_ov005_02198d0c(s + 0x13c);
    func_0200d5ec(s + 0x114);
    func_020695d0(p);
    return p;
}
