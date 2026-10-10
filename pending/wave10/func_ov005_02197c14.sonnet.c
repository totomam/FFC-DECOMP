#include "ffc/types.h"

extern int data_ov005_021995ec;
extern void *func_02056dd4(void);
extern void func_0206047c(uint32_t);
extern void func_ov005_02198d0c(void *);
extern void func_0200d5ec(void *);
extern void func_020695d0(void *);

void *func_ov005_02197c14(void *p)
{
    int *vt = &data_ov005_021995ec;
    ((int *)p)[0] = (int)vt;
    if (((int *)p)[0x150 / 4 * 0 + 0x54] == 1) {
        func_0206047c(*(uint32_t *)((uint8_t *)func_02056dd4() + 0x20));
    }
    func_ov005_02198d0c((uint8_t *)p + 0x13c);
    func_0200d5ec((uint8_t *)p + 0x114);
    func_020695d0(p);
    return p;
}
