#include "ffc/types.h"

extern void *data_020b93b8;
extern uint8_t data_ov003_0217a12c[];
extern uint8_t data_ov003_0217a0cc[];
extern uint8_t data_ov003_0217a0f4[];
extern uint32_t data_ov003_02179f80[];

extern void func_0201d014(void *obj, uint32_t v, void *out);
extern uint32_t func_02036bec(void *obj);
extern uint32_t func_02036be4(void *obj);
extern void func_02092878(void *dst, void *src);
extern void *func_02092b00(void *a, void *b);
extern uint32_t func_02086ad4(void *object, void *first, ...);
extern void func_02092924(void *obj, uint32_t v);
extern uint32_t func_02005f1c(void *object, void *third);

uint32_t func_ov003_02156c34(void *a, uint32_t b)
{
    uint8_t *self = (uint8_t *)a;
    uint8_t s2[0x44];
    uint8_t s1[0x10];
    uint8_t s0[0x40];
    uint32_t idx;
    uint32_t off;
    uint32_t sub;
    uint32_t n;
    uint8_t *q;
    uint8_t *d;

    func_0201d014(data_020b93b8, *(uint16_t *)(self + 0xac), s1);
    n = *(uint32_t *)(*(uint8_t **)(self + 0xa8) + 0x5c);
    if (func_02036bec(s1) >= n) {
        return 0;
    }

    if (*(uint32_t *)(*(uint8_t **)(self + 0xa8) + 0x64) != 0) {
        idx = func_02036be4(s1);
        q = *(uint8_t **)(self + 0xa8);
        off = *(uint32_t *)(q + 0x68);
        sub = *(uint32_t *)(q + off + idx * 4);
        func_02092878(s0, q + sub);
        d = (uint8_t *)func_02092b00(s0, data_ov003_0217a12c);
        if (d == 0) {
            return 0;
        }
        d[0] = data_ov003_0217a0cc[0];
        d[1] = data_ov003_0217a0cc[1];
        d[2] = data_ov003_0217a0cc[2];
        func_02086ad4(s2, data_ov003_0217a0f4, s0, 0);
    } else {
        idx = func_02036bec(s1);
        q = *(uint8_t **)(self + 0xa8);
        off = *(uint32_t *)(q + 0x60);
        sub = *(uint32_t *)(q + off + idx * 4);
        func_02086ad4(s2, data_ov003_0217a0f4, q + sub, 0);
    }

    func_02092924(s2, data_ov003_02179f80[2]);
    func_02005f1c((void *)b, s2);
    return 1;
}
