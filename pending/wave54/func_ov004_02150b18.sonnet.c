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
typedef struct { uint32_t x, y; } Pt;
typedef struct { uint32_t x0, y0, x1, y1; } Ent;
typedef struct { uint32_t cnt, off; } Hdr;
extern void func_ov004_0214fb60(void *self, Pt p);
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
    uint8_t *base, *sub; Hdr *r6;
    uint32_t i, bestIdx, best, ret;

    func_02019814(&loc, data_020b8e44);
    base = (uint8_t *)func_02052d90(loc.mar, loc.idx);
    sub = base + *(uint32_t *)(base + *(uint32_t *)(base + 0xc) + idx * 4 - 4);

    ret = func_0206c184(SELF_E4, *(uint32_t *)sub);
    r6 = (Hdr *)(sub + *(uint32_t *)(sub + *(uint32_t *)(sub + 4) + ret * 4));

    bestIdx = 0;
    best = bestIdx - 1;
    for (i = 0; i < r6->cnt; i++) {
        Ent *e = (Ent *)((uint8_t *)r6 + r6->off) + i;
        uint32_t e0 = e->x0;
        uint32_t e1 = e->y0;
        uint32_t e2 = e->x1;
        uint32_t e3 = e->y1;
        Pt p;
        uint32_t d2, dx, dy;
        uint32_t yy = e1 + func_0206c184(SELF_E4, e3 - e1);
        p.x = e0 + func_0206c184(SELF_E4, e2 - e0);
        p.y = yy;
        func_ov004_0214fb60(self, p);
        dx = p.x - 0x80;
        dy = p.y - 0x6c;
        d2 = dx * dx + dy * dy;
        if (d2 < best) {
            best = d2;
            bestIdx = i;
        }
    }

    if (r6->cnt <= 2) {
        for (i = 0; i < r6->cnt; i++) {
            func_ov004_0214fed4(self, i);
            func_ov004_0214fd10(self, i);
        }
        if (r6->cnt == 2) {
            func_ov004_0214fd24(self, 0, 1);
        }
    } else {
        for (i = 0; i < r6->cnt; i++) {
            if (i != bestIdx) {
                func_ov004_0214fed4(self, i);
                func_ov004_0214fd10(self, i);
                func_ov004_0214fd24(self, bestIdx, i);
            }
        }
    }

    {
        FfcLoc *q = &loc;
        if (q->mar != 0) {
            if (q->flag) {
                func_02052d3c(q->mar, q->idx);
            }
            func_02052c04(q->mar);
        }
        func_02053290(q);
    }
}
