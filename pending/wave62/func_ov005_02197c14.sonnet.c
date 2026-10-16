#include "ffc/types.h"
extern uint8_t data_ov005_021995ec[];
extern uint8_t *func_02056dd4(void);
extern void func_0206047c(uint32_t a);
extern void func_ov005_02198d0c(void *a);
extern void func_0200d5ec(void *a);
extern void func_020695d0(void *a);
void *func_ov005_02197c14(uint8_t *self) {
    *(void **)self = data_ov005_021995ec;
    if (*(int *)(self + 0x150) == 1) {
        func_0206047c(*(uint32_t *)(func_02056dd4() + 0x20));
    }
    func_ov005_02198d0c(self + 0x13c);
    func_0200d5ec(self + 0x114);
    func_020695d0(self);
    return self;
}
