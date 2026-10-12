#include "ffc/types.h"

typedef struct Sub {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint8_t f10;
} Sub;

typedef struct Ctx {
    int32_t count;
    uint32_t f4;
    uint32_t f8;
    uint32_t last;
} Ctx;

extern uint32_t func_0202a9ec(uint32_t key, uint32_t v);
extern void func_0202a9ac(void *cursor);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern void func_02056844(uint32_t key);

void func_02044180(uint32_t *out, Ctx *c, uint32_t key, uint32_t unused) {
    uint32_t k = key;
    Sub *sub;

    if (k == c->last) {
        func_0202a9ac(&key);
        c->last = key;
    }
    *out = func_0202a9ec(k, c->f4);

    sub = (Sub *)(k + 0xc);
    if (sub->f8 != 0) {
        if (sub->f10 != 0) {
            func_02052d3c(sub->f8, sub->fc);
        }
        func_02052c04(sub->f8);
    }
    func_02053290(&sub->f4);
    func_02056844(k);
    c->count--;
}
