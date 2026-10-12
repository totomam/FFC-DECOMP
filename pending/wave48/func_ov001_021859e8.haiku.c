#include "ffc/types.h"

typedef struct Obj {
    uint8_t b0[0x14];
    uint8_t flags;
    uint8_t b15[7];
    int32_t f1c;
    int32_t f20;
    uint8_t b24[4];
    uint8_t f28;
} Obj;

typedef struct Ctx {
    uint8_t pad[0x2c];
    uint8_t idx[0x28];
    int32_t count;
    void (*cb)(void *, int32_t, void *, void *);
    void *data;
} Ctx;

extern int32_t func_02093b18(const int8_t *s);
extern void func_ov001_0218570c(void *a, void *b);
extern void func_ov001_02185754(void *a, void *b);
extern int32_t func_ov001_02186e30(const int8_t *s, int32_t n);
extern int32_t func_ov001_02185448(void *a);
extern void func_ov001_02185df4(void *a, void *b, const int8_t *s);
extern int32_t func_02092a04(void *a, const int8_t *s, int32_t n);
extern void func_ov001_0218616c(void *a, const int8_t *s, int32_t n);
extern void func_ov001_0218603c(void *a, const int8_t *s, int32_t n);
extern int32_t func_ov000_0216591c(void);
extern void *data_ov001_02193d6c[];
extern int8_t data_ov001_021941e0[];

void func_ov001_021859e8(Ctx *p, Obj *o, const int8_t *s, int32_t n_in)
{
    volatile int32_t n = n_in;
    int32_t t;
    int32_t i;

    if (s[0] != 0 && s[0] != 9) {
        return;
    }
    n -= 5;
    s += 5;
    if (o->flags & 0x80) {
        o->flags &= 0x7f;
        if (n > 0) {
            o->f20 = func_02093b18(s);
            func_ov001_0218570c((uint8_t *)p + 8, o);
            func_ov001_02185754(p, o);
            p->cb(p, 3, o, p->data);
            return;
        }
        goto tail;
    }
    if (o->flags & 4) {
        i = 0;
        while (i < p->count) {
            t = func_ov001_02186e30(s, n);
            if (t < 0) {
                break;
            }
            if (func_ov001_02185448(data_ov001_02193d6c[p->idx[i]]) == 0) {
                func_ov001_02185df4(o, data_ov001_02193d6c[p->idx[i]], s);
            }
            s += t;
            n -= t;
            i++;
        }
        o->flags |= 0x41;
        goto tail;
    }
    if (s[0] != 0 && func_02092a04(data_ov001_021941e0, s, 8) == 0) {
        func_ov001_0218616c(o, s, n);
        if (o->f28 != 0xff) {
            return;
        }
    } else {
        func_ov001_0218603c(o, s, n);
    }
    o->flags |= 0x43;
tail:
    o->flags &= 0xf3;
    o->f1c = func_ov000_0216591c() - o->f1c;
    func_ov001_0218570c((uint8_t *)p + 8, o);
    p->cb(p, 0, o, p->data);
}
