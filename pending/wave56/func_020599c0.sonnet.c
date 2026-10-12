#include "ffc/types.h"

extern uint32_t func_0205fb68(uint32_t index, uint32_t multiplier);
extern void func_0208763c(uint32_t p);
extern uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void *func_0205681c(uint32_t size);
extern void *func_0205fb78(void *obj, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_02087678(uint32_t p);
extern uint32_t data_0209f398[];
extern uint32_t data_0209f390[];

typedef struct {
    uint32_t p;
    volatile uint8_t f;
} Guard;

void *func_020599c0(uint8_t *a, uint32_t p1, uint32_t p2, uint32_t p3) {
    Guard g;
    uint32_t i, t, r, x, d, e;
    void *obj;

    g.p = (uint32_t)(*(uint8_t **)(a + 0x10) + 0x20);
    g.f = 1;
    if (g.f) {
        func_0208763c(g.p);
    }
    for (i = 0; i < 4; i++) {
        if (((uint32_t *)(a + 0x24))[i] == 0) {
            break;
        }
    }
    t = func_0205fb68(p1, p2);
    r = func_0205816c(*(void **)(a + 0x10), t, p3, data_0209f390[p1], 0x4000, data_0209f398[p1], 0x40000);
    x = *(uint32_t *)(*(uint8_t **)(a + 0x10) + 4);
    d = (r - x) >> 14;
    e = d << 14;
    obj = func_0205681c(0x50);
    if (obj != 0) {
        obj = func_0205fb78(obj, *(void **)(a + 0xc), d, x + e, r, p1, p2, 1);
    }
    ((void **)(a + 0x24))[i] = obj;
    if (g.f) {
        func_02087678(g.p);
    }
    return obj;
}
