#include "ffc/types.h"

extern int32_t func_0202b6b0(void *self, int32_t d, int32_t a, int32_t b, int32_t c);
extern int64_t func_0209a978(int32_t a, uint32_t b);
extern int32_t func_0202c0e0(void *self);
extern int32_t func_02023e8c(void *p, int32_t x);
extern void func_02023e70(void *p, uint8_t v, int32_t z);
extern void func_02024fcc(void *p, int32_t v);
extern void func_0202c42c(void *self, int32_t i);
extern void func_02023f7c(void *p, int32_t v);

void func_0202c004(uint8_t *self)
{
    int32_t t;
    uint32_t i;
    int32_t a;
    int32_t b;

    if (self[0x40] == 0) {
        return;
    }
    b = *(int32_t *)(self + 0x18);
    a = *(int32_t *)(self + 0x14);
    if (a < b) {
        return;
    }
    func_0202b6b0(self, a - b, a, b, -1);
    {
        void **o = *(void ***)(self + 0x34);
        int32_t r2 = ((int32_t (*)(void *))(*(void ***)o)[6])(o);
        int64_t x = func_0209a978(*(int32_t *)(self + 0x14) - *(int32_t *)(self + 0x18), (uint32_t)r2 << 4);
        *(uint32_t *)(self + 0x6c) = (uint32_t)(x >> 32);
    }
    if (*(int32_t *)(self + 0x28) <= *(int32_t *)(self + 0x14)) {
        t = func_0202c0e0(self);
    }
    for (i = 0; i < *(uint32_t *)(self + 0xb20); i++) {
        int32_t *pp = (int32_t *)self + i;
        if (func_02023e8c((void *)pp[0x67], 1)) {
            func_02023e70((void *)pp[0x67], self[0x41], 0);
            if (t != (int32_t)i) {
                func_02024fcc((void *)pp[0x67], pp[0xa7]);
                if (*(int32_t *)(self + 0x12c) != 0) {
                    func_0202c42c(self, i);
                }
                func_02023f7c((void *)pp[0x67], 0x10);
            }
            if (((int32_t (*)(void *))(*(void ***)pp[0x67])[7])((void *)pp[0x67])) {
                func_02023e70((void *)pp[0x67], self[0x46], 0);
            }
        }
    }
}
