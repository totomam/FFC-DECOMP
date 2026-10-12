#include "ffc/types.h"

extern uint32_t func_0208d460(void);
extern uint32_t func_0208d418(void);
extern uint32_t func_0208de5c(void *f, uint32_t a, uint32_t y, uint32_t b, uint32_t x, uint32_t e);
extern void func_0206cb44(void *p);
extern void func_0206cfcc(void);

void func_0206cf64(uint8_t *self)
{
    uint32_t x;
    uint32_t y;
    uint32_t flag;

    *(self + 0x30b4) = 0;
    y = func_0208d460();
    x = func_0208d418();
    flag = 0;
    if (*(self + 0xf8c) == 0) {
        flag = 1;
    }
    if (func_0208de5c((void *)func_0206cfcc,
                      (*(uint32_t *)(self + 0xf78) + 0x1f) & ~0x1fu,
                      (uint16_t)y,
                      (*(uint32_t *)(self + 0xf7c) + 0x1f) & ~0x1fu,
                      (uint16_t)x, (uint16_t)flag) != 2) {
        func_0206cb44(self);
    }
}
