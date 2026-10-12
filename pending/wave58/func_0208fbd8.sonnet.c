#include "ffc/types.h"

extern int32_t func_02093b30(void *obj, int32_t v);
extern void func_0208f6a4(void *object);
extern uint8_t *func_020903f4(uint8_t *p, int32_t c);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern int32_t func_0208f70c(void *obj, void *p);
extern int32_t func_0209a978(int32_t a, int32_t b);

typedef struct {
    uint32_t b0 : 2;
    uint32_t fA : 3;
    uint32_t fB : 2;
    uint32_t fC : 3;
    uint32_t fE : 2;
    uint32_t fD : 1;
    uint32_t rest : 19;
} FlagBits;

typedef struct {
    uint32_t s : 3;
    uint32_t rest : 29;
} StateBits;

typedef struct {
    uint32_t w00;
    FlagBits flags;
    StateBits state;
    uint8_t b0c;
    uint8_t dirty;
    uint8_t pad0e[2];
    uint32_t pad10[3];
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
} Obj;

int32_t func_0208fbd8(uint8_t *dst, int32_t a, int32_t b, Obj *o) {
    uint32_t *pf28;
    uint32_t *pf24;
    uint32_t total;
    uint32_t saved1c;
    int ex;
    uint32_t m;
    uint32_t n;
    uint8_t *r7;
    uint32_t saved20;

    if (func_02093b30(o, 0) == 0) {
        func_02093b30(o, -1);
    }
    n = (uint32_t)(a * b);
    if (n == 0 || o->dirty != 0 || o->flags.fC == 0) {
        return 0;
    }
    ex = 1;
    if (o->flags.fD != 0) {
        if (o->flags.fB != 2 && o->flags.fB != 1) ex = 0;
    }
    if (o->state.s == 0) {
        if (o->flags.fA & 2) {
            o->state.s = 1;
            func_0208f6a4(o);
        }
    }
    if (o->state.s != 1) {
        o->dirty = 1;
        o->f28 = 0;
        return 0;
    }

    total = 0;
    if (n == 0) goto after;
    if (o->f24 == o->f1c && ex == 0) goto after;
    o->f28 = o->f20 - (o->f24 - o->f1c);
    pf24 = &o->f24;
    pf28 = &o->f28;
    {
loop:
        r7 = 0;
        m = o->f28;
        if (m > n) m = n;
        if (o->flags.fB == 1 && m != 0) {
            r7 = func_020903f4(dst, 10);
            if (r7 != 0) m = (uint32_t)(r7 + 1 - dst);
        }
        if (m != 0) {
            func_02090380((void *)o->f24, dst, m);
            dst += m;
            n -= m;
            *pf24 += m;
            *pf28 -= m;
        }
        if (o->f28 == 0 || r7 != 0 || o->flags.fB == 0) {
            if (func_0208f70c(o, 0) != 0) {
                o->dirty = 1;
                o->f28 = 0;
                n = 0;
                goto after;
            }
        }
        total += m;
        if (n != 0 && ex != 0) goto loop;
    }
after:
    if (n != 0 && ex == 0) {
        saved1c = o->f1c;
        saved20 = o->f20;
        o->f24 = (uint32_t)dst + n;
        o->f1c = (uint32_t)dst;
        o->f20 = n;
        if (func_0208f70c(o, &m) != 0) {
            o->dirty = 1;
            o->f28 = 0;
        } else {
            total += m;
        }
        o->f20 = saved20;
        o->f1c = saved1c;
        func_0208f6a4(o);
        o->f28 = 0;
    }
    if (o->flags.fB != 2) o->f28 = 0;
    return func_0209a978((int32_t)total, a);
}
