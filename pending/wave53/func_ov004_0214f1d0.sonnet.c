#include "ffc/types.h"

extern uint32_t func_ov004_0214f740(uint8_t *self, uint32_t a);
extern uint32_t func_ov004_0214f74c(uint8_t *self, uint32_t a);
extern void func_ov004_0214d834(uint32_t *out, uint32_t p, int i, int j, uint32_t b, uint32_t flag);
extern int func_01fff010(uint32_t p, int i, int j);

void func_ov004_0214f1d0(uint8_t *self, uint32_t a, uint32_t b, ...)
{
    int i, j;
    uint32_t o1, o2;
    uint8_t *q;

    for (i = 0; i < *(int *)(self + 0xfc); i++) {
        uint32_t bb = b;
        for (j = 0; j < *(int *)(self + 0x100); j++) {
            q = self + func_ov004_0214f740(self, a) * 4;
            if (*(uint32_t *)(q + 0xa0) == 0) {
                continue;
            }
            func_ov004_0214d834(&o1, *(uint32_t *)(q + 0xa0), i, j, bb, 0);
            if (func_01fff010(*(uint32_t *)(q + 0x98), i, j) == 0) {
                continue;
            }
            q = self + func_ov004_0214f74c(self, a) * 4;
            if (*(uint32_t *)(q + 0x98) == 0) {
                continue;
            }
            if (func_01fff010(*(uint32_t *)(q + 0x98), i, j) == 0) {
                continue;
            }
            func_ov004_0214d834(&o2, *(uint32_t *)(q + 0xa0), i, j, o1, 1);
        }
    }
}
