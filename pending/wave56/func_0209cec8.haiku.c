#include "ffc/types.h"

extern uint8_t *func_02056830(uint32_t size, uint32_t n);
extern void func_0209ce90(uint8_t *dst, uint8_t *src, uint32_t n, uint32_t flag);
extern void func_02056858(uint8_t *p);
extern void func_0209d27d_unk(void);
extern void func_0209cc64(void *p);

struct Loc {
    uint32_t size;
    void (*cb)(uint8_t *);
    uint8_t *base;
    uint32_t s[5];
    void *self;
};

uint8_t *func_0209cec8(uint32_t a, uint32_t b, uint32_t c, void (*cb)(uint8_t *), uint32_t flag) {
    struct Loc L;
    uint8_t *p;
    uint8_t *q;
    uint32_t i;

    p = func_02056830(c + a * b, a * b);
    L.base = p;
    if (p == 0) {
        return 0;
    }
    L.size = c;
    if (c != 0) {
        *(uint32_t *)(p + c - 4) = a;
        if (c >= 8) {
            *(uint32_t *)(p + c - 8) = b;
        }
    }
    L.cb = cb;
    if (cb != 0) {
        q = p + c;
        L.self = &L;
        for (i = a; i != 0; i--) {
            cb(q);
            q += b;
        }
    }
    return p + c;
}
