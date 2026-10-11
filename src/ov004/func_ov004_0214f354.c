#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern uint32_t func_01ffd17c(uint32_t v);
extern int func_ov004_0214f740(uint8_t *self, int x);
extern void func_01ffde7c(uint32_t v, S s);

void func_ov004_0214f354(uint8_t *self, int x, S s)
{
    uint32_t id = func_01ffd17c(*(uint32_t *)(self + 0x90));
    if (id == (uint32_t)func_ov004_0214f740(self, x)) {
        func_01ffde7c(*(uint32_t *)(self + 0x90), s);
    }
}
