/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { uint32_t v; Num(uint32_t x) : v(x) {} ~Num() {} };
inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }

extern "C" {
extern void func_0201e954(uint32_t a, uint32_t b, void *out);
extern uint32_t func_02036cd8(const void *object);
extern void func_ov005_02197684(void *dst, const void *src, uint32_t n);
extern void func_ov007_021bef54(void *container, const void *val, uint8_t flag);
extern uint32_t data_020b93b8;

void func_ov007_021be6f0(uint8_t *a)
{
    uint32_t obj;
    uint32_t val;
    uint32_t i;
    uint32_t n;
    uint8_t flag;
    uint32_t oc = 0x104;
    uint32_t oa = oc - 4;
    uint32_t ol = oc + 4;

    {
        Num c = *(uint32_t *)(a + oc);
        *(uint32_t *)(a + oc) = diff(c, c.v);
    }
    for (i = 0; i < 0x40; i++) {
        func_0201e954(data_020b93b8, 0, &obj);
        if (func_02036cd8(&obj) != 0) {
            func_ov005_02197684(&val, &obj, 1);
            if (*(uint32_t *)(a + oc) < *(uint32_t *)(a + ol)) {
                uint32_t idx = *(uint32_t *)(a + oc);
                uint32_t *base = *(uint32_t **)(a + oa);
                base[idx] = val;
                *(uint32_t *)(a + oc) = idx + 1;
            } else {
                flag = 0;
                func_ov007_021bef54(a + oa, &val, flag);
            }
        }
    }

    func_ov005_02197684(&n, *(void **)(a + 0xe4), 1);
    if (*(uint32_t *)(a + oc) < *(uint32_t *)(a + ol)) {
        uint32_t idx = *(uint32_t *)(a + oc);
        uint32_t *base = *(uint32_t **)(a + oa);
        base[idx] = n;
        *(uint32_t *)(a + oc) = idx + 1;
    } else {
        flag = 0;
        func_ov007_021bef54(a + oa, &n, flag);
    }

    if (*(uint32_t *)(a + oc) == 0) {
        *(uint32_t *)(a + 0x114) = 0;
    } else {
        *(uint32_t *)(a + 0x114) = (*(uint32_t *)(a + oc) - 1) >> 3;
    }
}
}
