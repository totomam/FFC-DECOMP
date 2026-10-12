#include "ffc/types.h"

typedef void (*ArgFn)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t,
                      uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

typedef struct {
    uint32_t fn;
    int32_t adj;
} Pmf;

typedef struct {
    uint8_t pad0[0x84];
    uint8_t *base;
    Pmf pmf;
    uint32_t w90;
    uint32_t w94;
    uint32_t w98;
    uint32_t w9c;
    uint32_t wa0;
    uint32_t wa4;
    uint32_t wa8;
    uint32_t wac;
    uint32_t wb0;
} Obj;

void func_ov003_0216a1fc(Obj *p) {
    ArgFn fn;
    int32_t off = p->pmf.adj >> 1;
    uint8_t *base = p->base;

    if (p->pmf.adj & 1) {
        fn = *(ArgFn *)(*(uint8_t **)(base + off) + p->pmf.fn);
    } else {
        fn = (ArgFn)p->pmf.fn;
    }

    fn(base + off,
       p->w90,
       p->w94,
       p->w98,
       p->w9c,
       p->wa0,
       p->wa4,
       p->wa8,
       p->wac,
       p->wb0);

    *(uint32_t *)((uint8_t *)p + 0xc) = (*(uint32_t *)((uint8_t *)p + 0xc) & ~0xffu) | 2;
}
