#include "ffc/types.h"

extern void func_02069434(void *p, int x);
extern void func_020095b8(void *p, int x);
extern void func_020695e4(void *p, int x);
extern uint8_t data_020ae200[];

void *func_02033940(uint8_t *self, int a1, uint32_t a2, uint32_t a3) {
    func_02069434(self, 0);
    *(uint8_t **)self = data_020ae200;
    func_020095b8(self + 0xc4, a1);
    *(uint32_t *)(self + 0xd0) = a2;
    *(uint32_t *)(self + 0xd4) = a3;
    func_020695e4(self, 1);
    return self;
}
