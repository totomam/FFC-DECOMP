/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern uint32_t func_ov008_021a27b8(uint8_t *p);
extern uint8_t *func_02052d90(uint8_t *mar, uint32_t index);
extern void func_0201f05c(void *h, void *dst, void *src);
extern uint32_t func_0201bcc0(void *h, uint32_t id, uint32_t idx);
extern void func_ov008_021a5704(uint8_t *a, void *b, uint32_t c);
extern void func_ov005_021961ac(uint32_t a, uint32_t b);
extern void *data_020b93b8;
void func_ov008_021a1f58(uint8_t *p);
}

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

void func_ov008_021a1f58(uint8_t *p) {
    uint8_t i;
    uint32_t loc[6];
    volatile uint32_t oa, ob, oc, od;
    uint32_t n;
    uint32_t cnt;
    uint32_t k;
    uint8_t fl;
    uint8_t *d;
    uint8_t *ent;

    i = 0;
    n = *(uint32_t *)(p + 0x108);
    *(uint32_t *)(p + 0x108) = (uint32_t)diff(Num(n), n);

    if (func_ov008_021a27b8(p) != 0) {
        oa = 0x104;
        ob = 0x104;
        oc = 0x10c;
        od = 0x144;
        do {
            if (p[od]) {
                d = func_02052d90(*(uint8_t **)(p + 0xc0), *(uint32_t *)(p + 0xc4));
                ent = d + *(uint32_t *)(d + 0x14) + ((uint32_t)i << 3);
            } else {
                d = func_02052d90(*(uint8_t **)(p + 0xc0), *(uint32_t *)(p + 0xc4));
                ent = d + *(uint32_t *)(d + 0xc) + ((uint32_t)i << 3);
            }
            func_0201f05c(data_020b93b8, ent, loc);
            if (!(ent[2] == 0 && func_0201bcc0(data_020b93b8, 0xb, i) != 0)) {
                cnt = *(uint32_t *)(p + 0x108);
                if (cnt < *(uint32_t *)(p + oc)) {
                    uint8_t *e2 = *(uint8_t **)(p + oa) + cnt * 0x18;
                    if (e2 != 0) {
                        for (k = 0; k < 6; k++) {
                            ((uint32_t *)e2)[k] = loc[k];
                        }
                    }
                    *(uint32_t *)(p + 0x108) = cnt + 1;
                } else {
                    func_ov008_021a5704(p + ob, loc, 0);
                }
            }
            i = (uint8_t)(i + 1);
        } while (i < func_ov008_021a27b8(p));
    }

    cnt = *(uint32_t *)(p + 0x108);
    if (cnt == 0) {
        fl = 0;
    } else {
        fl = (uint8_t)((cnt - 1) >> 3);
    }
    p[0x130] = fl;
    func_ov005_021961ac(*(uint32_t *)(p + 0x120), (uint8_t)(p[0x130] + 1));
}
