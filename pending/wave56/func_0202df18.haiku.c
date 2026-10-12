#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x40];
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Obj;

extern uint32_t func_0209a2e0(float x, float y);
extern float func_0209af28(uint32_t x, float y);
extern float func_0209b108(float x, float y);
extern float func_0209b338(float x, float y);
extern uint32_t func_0209ab5c(float x);

static uint32_t proc_unused;

uint32_t func_0202df18(Obj *p, float x, float y, float z)
{
    uint32_t t;
    float f;

    t = func_0209a2e0(x, 0.0f);
    if (t > 0x45800000u) {
        f = func_0209b108(0.5f, func_0209af28(t, x));
    } else {
        f = func_0209b338(func_0209af28(t, x), 0.5f);
    }
    p->a = func_0209ab5c(f);

    t = func_0209a2e0(y, 0.0f);
    if (t > 0x45800000u) {
        f = func_0209b108(0.5f, func_0209af28(t, y));
    } else {
        f = func_0209b338(func_0209af28(t, y), 0.5f);
    }
    p->b = func_0209ab5c(f);

    t = func_0209a2e0(z, 0.0f);
    if (t > 0x45800000u) {
        f = func_0209b108(0.5f, func_0209af28(t, z));
    } else {
        f = func_0209b338(func_0209af28(t, z), 0.5f);
    }
    p->c = func_0209ab5c(f);
    return 0;
}
