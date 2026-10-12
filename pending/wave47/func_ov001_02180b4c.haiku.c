#include "ffc/types.h"

extern int func_ov001_021808cc(void *p);
extern int func_ov001_0217fdb4(void *p, void *q);
extern int func_ov001_02181b2c(void *p);
extern void func_ov001_0218054c(void *p);
extern uint32_t func_ov000_0216591c(void);
extern int func_ov001_0217fec8(void *r0, void *r1, void *r2, uint32_t r3, uint32_t s0, void *s1, int32_t s2);

int func_ov001_02180b4c(void *obj, void *param1, int32_t param2)
{
    uint8_t *a = (uint8_t *)obj;
    uint8_t *b = (uint8_t *)param1;
    int32_t c = param2;

    if (*(uint32_t *)(a + 0xc) != 3) {
        if (func_ov001_021808cc(a)) {
            return 1;
        }
        return 0;
    }
    if (c < 0x20) {
        if (func_ov001_021808cc(a)) {
            return 1;
        }
        return 0;
    }
    if (!func_ov001_0217fdb4(b, a + 0x68)) {
        if (func_ov001_021808cc(a)) {
            return 1;
        }
        return 0;
    }
    if (*(uint32_t *)(*(uint8_t **)(a + 8) + 0x20) == 0) {
        if (func_ov001_02181b2c(a) == 0) {
            return 0;
        }
        func_ov001_0218054c(a);
        return 1;
    }
    *(uint32_t *)(a + 0xc) = 4;
    {
        uint32_t t = func_ov000_0216591c();
        int32_t y = (int32_t)(t - *(uint32_t *)(a + 0x8c));
        if (func_ov001_0217fec8(*(void **)(a + 8), a, *(void **)a,
                                *(uint16_t *)(a + 4), y, b + 0x20, c - 0x20)) {
            return 1;
        }
        return 0;
    }
}
