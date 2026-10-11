#include "ffc/types.h"

extern void func_02056c4c(uint32_t x);
extern void func_0203c2bc(void);
extern void func_0206047c(void);

void func_ov004_02147bf4(uint8_t *p) {
    *(uint32_t *)(p + 0xdc) = 0;
    *(uint32_t *)(p + 0xe0) = 0;
    func_02056c4c(*(uint32_t *)(p + 0xc4));
    func_02056c4c(*(uint32_t *)(p + 0xc8));
    func_0203c2bc();
    func_0206047c();
}
