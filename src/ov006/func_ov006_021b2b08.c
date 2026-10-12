#include "ffc/types.h"

typedef struct {
    void (*fn)(uint32_t, void *);
    uint8_t *base;
} Ctx;

extern Ctx data_ov006_021bc800;
extern uint8_t data_ov006_021b9f78[];
extern uint8_t data_ov006_021b9fa8[];
extern int32_t func_0208e2f0(uint8_t *a, uint32_t b, uint8_t *c);
extern void func_ov006_021b2140(int32_t x);

int func_ov006_021b2b08(uint32_t a)
{
    Ctx *ctx = &data_ov006_021bc800;
    uint8_t *base = ctx->base;
    int32_t r = func_0208e2f0(base + 0x13e0, a, base + 0x1c00);

    if (r == 7) {
        if (ctx->fn) {
            ctx->fn(0x8000000, data_ov006_021b9f78);
        }
        return 0;
    }
    if (r == 5) {
        if (ctx->fn) {
            ctx->fn(0x8000000, data_ov006_021b9fa8);
        }
        func_ov006_021b2140(r);
        return 0;
    }
    if (r != 0) {
        func_ov006_021b2140(r);
        return 0;
    }
    return 1;
}
