#include "ffc/types.h"

extern uint8_t data_0209dea8;
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov003_021785a0(void *obj);
typedef struct { int32_t a, b; } S;
typedef struct { int32_t a, b, c, d; } Q;

void func_ov003_021786dc(uint8_t *p, uint32_t idx, S v, uint8_t flag)
{
    int32_t skip = 0;
    void *obj;

    if (p[0xc6] != 0) {
        uint32_t hi = (uint32_t)(func_0209a76c(data_0209dea8 - 1, 3) >> 32);
        if (((hi + 2) & 2) == idx) {
            if (v.b <= skip) {
                skip = 1;
            }
        }
        if (skip != 0) {
            v.b = 0;
        }
    }

    *(S *)(p + idx * 8 + 0x9c) = v;

    obj = *(void **)(p + 0x8c + idx * 4);
    if (obj != 0 && flag != 0) {
        void **vt = *(void ***)obj;
        S s; Q q;
        if (((int32_t (*)(void *))vt[12])(obj) != 0) {
            vt = *(void ***)obj;
            ((void (*)(void *))vt[10])(obj);
        }
        vt = *(void ***)obj;
        q.c = v.a; q.d = v.b; s.a = v.a >> 12; s.b = v.b >> 12;
        ((void (*)(void *, S, Q))vt[3])(obj, s, q);
        func_ov003_021785a0(obj);
    }
}
