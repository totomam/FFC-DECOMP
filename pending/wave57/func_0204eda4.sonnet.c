#include "ffc/types.h"

typedef struct B32 {
    uint32_t w[8];
} B32;

typedef struct Blk {
    uint32_t key;
    uint8_t body[32];
} Blk;

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_0204f770(void *a, void *b);
extern void func_0204f6b0(void *a, void *b, void *c);
extern void *func_0205681c(uint32_t n);
extern void *func_0205908c(void *obj, void *self, uint32_t x, uint32_t y, uint32_t z, Blk blk, uint32_t w, uint32_t v);
extern uint8_t data_0213df10[];
extern uint8_t data_0209ed3c[];
extern uint8_t data_0209ed40[];
extern uint8_t data_0209e658[];
extern uint8_t data_0209e678[];

void func_0204eda4(uint8_t *self, uint32_t a, uint32_t b)
{
    struct { void *p; volatile uint8_t flag; } g;
    Blk blk;
    void *obj;
    void *o2;
    uint8_t saved_b;
    uint32_t saved_14;
    uint32_t f;
    int i;
    uint8_t *s8;
    uint8_t *src;

    g.p = (void *)(*(uint8_t **)(data_0213df10 + 8) + 0x7c);
    g.flag = 1;
    if (g.flag != 0) {
        func_0208763c(g.p);
    }

    obj = *(void **)(self + 0x14);
    saved_b = ((uint8_t *)obj)[0x54];
    saved_14 = *(uint32_t *)((uint8_t *)obj + 0x14);
    *(uint32_t *)((uint8_t *)obj + 0x14) = 0;
    {
        uint32_t w = *(uint32_t *)(self + 0xc);
        *(uint32_t *)(self + 0xc) = w & 0xbfffffff;
    }
    if (*(void **)(self + 0x14) != 0) {
        void **vt = *(void ***)(*(void **)(self + 0x14));
        ((void (*)(void *))vt[1])(*(void **)(self + 0x14));
    }
    *(void **)(self + 0x14) = 0;
    func_0204f770(*(void **)(self + 4), self + 0x28);
    func_0204f770(*(void **)(self + 4), self + 0x3c);
    func_0204f6b0(*(void **)(self + 4), *(uint8_t **)(*(uint8_t **)(self + 8) + 0x4c) + a * 0x1c, self + 0x28);
    func_0204f6b0(*(void **)(self + 4), *(uint8_t **)(*(uint8_t **)(self + 8) + 0x50) + b * 0x1c, self + 0x3c);

    f = 0;
    if (b != 0) {
        f = 1;
    }
    *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & 0xbfffffff) | ((f << 31) >> 1);

    if (b != 0) {
        i = 0;
        while (i < 5) {
            Blk *e = (Blk *)(data_0209ed3c + i * 0x24);
            if (b == e->key && *(uint32_t *)(self + 0x40) == *(uint32_t *)e->body) {
                break;
            }
            i++;
        }
        blk.key = *(uint32_t *)(data_0209ed3c + i * 0x24);
        src = data_0209ed40 + i * 0x24;
    } else {
        blk.key = *(uint32_t *)(data_0209e658 + 0x1c);
        src = data_0209e678;
    }
    *(B32 *)blk.body = *(B32 *)src;

    if (a != 0) {
        o2 = func_0205681c(0x58);
        if (o2 != 0) {
            s8 = *(uint8_t **)(self + 8);
            o2 = func_0205908c(o2, self, *(uint32_t *)(s8 + 0x40), *(uint32_t *)(self + 0x28),
                                *(uint32_t *)(s8 + 0x38), blk, *(uint32_t *)(self + 0x78),
                                *(uint32_t *)(self + 0x8c));
        }
        *(void **)(self + 0x14) = o2;
    }

    ((uint8_t *)*(void **)(self + 0x14))[0x54] = saved_b;
    *(uint32_t *)((uint8_t *)*(void **)(self + 0x14) + 0x14) = saved_14;
    if (g.flag != 0) {
        func_02087678(g.p);
    }
}
