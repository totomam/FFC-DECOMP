#include "ffc/types.h"

extern void func_ov008_021a679c(void *self);
extern void *func_02056aec(void *self);
extern void *func_0203bf7c(uint32_t x);
extern void func_02056bc0(void *object, void *node);

void func_ov008_021a6a70(uint8_t *self)
{
    void *r5;
    void *r0;
    uint8_t *p;

    if (*(uint32_t *)(self + 0xf0) == 1) {
        func_ov008_021a679c(self);
        if (self[0x103] != 0) {
            self[0x104] = 0xff;
            r5 = func_02056aec(self);
            r0 = func_0203bf7c(0x1e);
            p = self + 0x14;
            func_02056bc0(p, r0);
            func_02056bc0(p, r5);
        }
    }
}
