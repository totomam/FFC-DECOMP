#include "ffc/types.h"

extern uint8_t *func_02056dd4(void);
extern void func_0206047c(uint32_t v);
extern void func_ov005_02198d0c(void *p);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);
extern void func_02056844(void *p);
extern char data_ov005_021995ec[];

void *func_ov005_02197c50(void *a0)
{
    uint8_t *p = (uint8_t *)a0;

    *(char **)p = data_ov005_021995ec;
    if (*(uint32_t *)(p + 0x150) == 1) {
        uint8_t *r = func_02056dd4();
        func_0206047c(*(uint32_t *)(r + 0x20));
    }
    func_ov005_02198d0c(p + 0x13c);
    func_0200d5ec(p + 0x114);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
