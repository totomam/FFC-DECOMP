#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} FfcLoc;

extern uint32_t data_020b8e44;
extern void func_02019814(void *out, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void func_ov004_0214fb60(void *self, uint32_t x, uint32_t y);
extern void func_ov004_0214fed4(void *self, uint32_t i);
extern void func_ov004_0214fd10(void *self, uint32_t i);
extern void func_ov004_0214fd24(void *self, uint32_t a, uint32_t b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

#define SELF_E4 (*(uint32_t *)((uint8_t *)self + 0xe4))

void func_ov004_02150b18(void *self, uint32_t idx)
{
    FfcLoc loc;
    uint8_t *base, *sub, *r6, *arr;
    uint32_t i, cnt, best, bestIdx, ret, n, x, y, d2;

    func_02019814(&loc, data_020b8e44);
    base = (uint8_t *)func_02052d90(loc.mar, loc.idx);
    sub = base + *(uint32_t *)(base + *(uint32_t *)(base + 0xc) + idx * 4 - 4);

    ret = func_0206c184(SELF_E4, *(uint32_t *)sub);
    n = *(uint32_t *)(sub + *(uint32_t *)(sub + 4) + ret * 4);
    r6 = sub + n;

    best = 0xFFFFFFFF;
    bestIdx = 0;
    for (i = 0; i < *(uint32_t *)r6; i++) {
        uint8_t *e;
        uint32_t e0, e1, e2, e3, yy;
        arr = r6 + *(uint32_t *)(r6 + 4);
        e = arr + (i << 4);
        e0 = *(uint32_t *)(e + 0);
        e1 = *(uint32_t *)(e + 4);
        e2 = *(uint32_t *)(e + 8);
        e3 = *(uint32_t *)(e + 0xc);
        yy = e1 + func_0206c184(SELF_E4, e3 - e1);
        x = e0 + func_0206c184(SELF_E4, e2 - e0);
        y = yy;
        func_ov004_0214fb60(self, x, y);
        d2 = (x - 0x80) * (x - 0x80) + (y - 0x6c) * (y - 0x6c);
        if (d2 < best) {
            best = d2;
            bestIdx = i;
        }
    }

    cnt = *(uint32_t *)r6;
    if (cnt <= 2) {
        for (i = 0; i < cnt; i++) {
            func_ov004_0214fed4(self, i);
            func_ov004_0214fd10(self, i);
        }
        if (*(uint32_t *)r6 == 2) {
            func_ov004_0214fd24(self, 0, 1);
        }
    } else {
        for (i = 0; i < cnt; i++) {
            if (i != bestIdx) {
                func_ov004_0214fed4(self, i);
                func_ov004_0214fd10(self, i);
                func_ov004_0214fd24(self, bestIdx, i);
            }
        }
    }

    if (loc.mar != 0) {
        if (loc.flag) {
            func_02052d3c(loc.mar, loc.idx);
        }
        func_02052c04(loc.mar);
    }
    func_02053290(&loc);
}
