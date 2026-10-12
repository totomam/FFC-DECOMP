#include "ffc/types.h"

extern void *data_020b8e44;
extern void *data_020b93b8;
extern uint64_t func_02071e64(void *p);
extern int func_02071e70(void *p, uint64_t k);
extern int func_020722e8(void *a, void *b, uint64_t k, int d);
extern int func_0201f7fc(void *a, int idx, uint32_t *out);
extern int func_ov007_021ae604(void);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern int func_020721f0(void *a, uint64_t k, int32_t *out);
extern int func_0201f850(void *a, uint32_t *buf);

typedef struct {
    int32_t res;
    uint32_t w[16];
} Ent;

#define FLD(p, o) (*(void **)((uint8_t *)(p) + (o)))
#define BP() (*(uint8_t **)data_020b8e44)

int func_ov007_021ae4f0(uint64_t k) {
    Ent e;
    int i;
    int ret;
    int n;
    void **g;

    if (func_02071e70(FLD(BP(), 0x80), k) == 0) {
        return 1;
    }
    if (func_02071e64(FLD(BP(), 0x80)) == k) {
        return 2;
    }
    if (func_020722e8(FLD(BP(), 0x84), FLD(BP(), 0x80), k, 0) != 0) {
        return 3;
    }
    g = &data_020b93b8;
    for (i = 0; i < 0x3c; i++) {
        func_0201f7fc(*g, i, e.w);
        if (*(uint64_t *)&e.w[2] == k) {
            return 3;
        }
    }
    if (func_ov007_021ae604() == 0x3c) {
        return 4;
    }
    ret = 0;
    func_02084b2c(e.w, 0, 0x40);
    e.w[0] = (e.w[0] & ~7u) | 1;
    {
        Ent *p = &e;
        *(uint16_t *)((uint8_t *)p + 0x14) = ret;
        ((uint8_t *)p)[8] &= ~0x1f;
    }
    n = 0xb;
    e.w[14] = 1;
    e.res = n - 0xc;
    e.w[9] &= ~0xffu;
    e.w[12] = 9;
    e.w[10] = ret;
    e.w[11] = ret;
    e.w[13] = n;
    e.w[15] = ret;
    *(uint64_t *)&e.w[2] = k;
    func_020721f0(FLD(BP(), 0x84), k, &e.res);
    if (e.res == n - 0xc) {
        return 4;
    }
    func_0201f850(*g, e.w);
    return ret;
}
