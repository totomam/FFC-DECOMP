#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void *func_02057df8(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint32_t func_020581cc(const void *first, const void *second);
extern int32_t func_0209a978(int32_t x, int32_t y);
extern void func_02087678(void *p);
extern uint32_t data_0209fd38[];
extern int32_t data_0209fd30[];

#define FIELD(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))

typedef struct {
    void *p;
    volatile uint8_t active;
} Guard;

void *func_0205fbc8(uint8_t *a, uint32_t idx, uint32_t c, uint32_t d)
{
    Guard g;
    uint8_t *obj;
    uint32_t m;
    uint32_t r;

    g.p = a + 0x20;
    g.active = 1;
    if (g.active) {
        func_0208763c(g.p);
    }
    m = data_0209fd38[idx];
    obj = func_02057df8(a, c * m, d, FIELD(a, 0x4c) * m, 0, 0, 0);
    FIELD(obj, 0x14) = m;
    FIELD(obj, 0x10) = 0;
    FIELD(obj, 0x20) = 1;
    if (func_020581cc(a, obj) == 0) {
        r = FIELD(obj, 0x4);
    } else {
        r = FIELD(a, 0x4);
    }
    FIELD(obj, 0x18) = (int32_t)(r - FIELD(a, 0x48)) >> data_0209fd30[idx];
    FIELD(obj, 0x1c) = func_0209a978(FIELD(obj, 0x18), FIELD(a, 0x4c));
    if (g.active) {
        func_02087678(g.p);
    }
    return obj;
}
