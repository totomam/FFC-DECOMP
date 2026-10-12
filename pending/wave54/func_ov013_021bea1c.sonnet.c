/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline const uint32_t &mn(const uint32_t &a, const uint32_t &b) { return (b < a) ? b : a; }
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" {
extern int func_0206cb98(void *h);
extern int func_0206cb74(void *h);
extern "C" void func_ov013_021bedc0(void *self, uint32_t *key, uint8_t flag);
extern int func_0208d350(int id, void *fn, void *self);
extern uint32_t func_02056aec(void *h);
extern uint32_t func_0206c270(void *h);
extern void func_02056bc0(void *object, void *node);
}
extern uint32_t data_ov013_021c4330[2];
extern uint32_t data_ov013_021c37e8[];
extern "C" void func_ov013_021bed2c(void);
extern uint32_t data_ov013_021c4338[2];
extern uint32_t data_ov013_021c4340[2];

#define FLD(p, o, T) (*(T *)((uint8_t *)(p) + (o)))

extern "C" void func_ov013_021bea1c(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t i, rem, k, val, key, t, c;
    uint32_t *pv;
    uint8_t flag;
    uint32_t r6;

    if (func_0206cb98(FLD(s, 0xf4, void *))) {
        const uint32_t *d = data_ov013_021c4330;
        uint32_t a0 = d[0], a1 = d[1];
        FLD(s, 0xb8, uint32_t) = a0;
        FLD(s, 0xbc, uint32_t) = a1;
        return;
    }

    {
        int n = FLD(s, 0x130, uint32_t);
        FLD(s, 0x130, uint32_t) = diff(n, n);
    }

    if (FLD(s, 0x124, uint32_t) != 0) {
        i = 0;
        do {
            uint8_t *e = FLD(s, 0x120, uint8_t *) + i * 0x1c;
            key = FLD(e, 0x18, uint32_t);
            rem = FLD(e, 0x10, uint32_t);
            if (rem != 0) {
                do {
                    k = (rem + 1) & ~1u;
                    val = mn(k, 0x1f2u);
                    c = FLD(s, 0x130, uint32_t);
                    if (c < FLD(s, 0x134, uint32_t)) {
                        FLD(s, 0x130, uint32_t) = c + 1;
                        uint32_t *arr = FLD(s, 0x12c, uint32_t *);
                        arr[c * 2] = key;
                        arr[c * 2 + 1] = val;
                    } else {
                        flag = 0;
                        func_ov013_021bedc0(s + 0x12c, &key, flag);
                    }
                    key += 0x1f2;
                    t = mn(val, rem);
                    rem = rem - t;
                } while (rem != 0);
            }
            i++;
        } while (i < FLD(s, 0x124, uint32_t));
    }

    FLD(s, 0x138, uint32_t) = 0;
    FLD(s, 0x13c, uint8_t) = 0;

    if (func_0206cb74(FLD(s, 0xf4, void *)) != 0) {
        if (func_0208d350(0xe, (void *)func_ov013_021bed2c, s) != 0) {
            const uint32_t *d = data_ov013_021c4338;
            uint32_t a0 = d[0], a1 = d[1];
            FLD(s, 0xb8, uint32_t) = a0;
            FLD(s, 0xbc, uint32_t) = a1;
            return;
        }
    }

    r6 = func_02056aec(FLD(s, 0xfc, void *));
    func_02056bc0(s + 0x14, (void *)func_0206c270(FLD(s, 0xf4, void *)));
    func_02056bc0(s + 0x14, (void *)r6);
    FLD(s, 0xfc, uint32_t) = 0;
    {
        const uint32_t *d = data_ov013_021c4340;
        uint32_t a0 = d[0], a1 = d[1];
        FLD(s, 0xb8, uint32_t) = a0;
        FLD(s, 0xbc, uint32_t) = a1;
    }
}
