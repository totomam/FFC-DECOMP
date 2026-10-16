#include "ffc/types.h"
extern uint8_t data_ov005_021995ec[];
extern uint8_t *func_02056dd4(void);
extern void func_0206047c(uint32_t);
extern void func_ov005_02198d0c(void *);
extern void func_0200d5ec(void *);
extern void func_020695d0(void *);
extern void func_02056844(void *);
void *func_ov005_02197c50(uint8_t *p) {
    *(void **)p = data_ov005_021995ec;
    if (*(int *)(p + 0x150) == 1) {
        func_0206047c(*(uint32_t *)(func_02056dd4() + 0x20));
    }
    func_ov005_02198d0c(p + 0x13c);
    func_0200d5ec(p + 0x114);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
