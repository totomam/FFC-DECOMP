#include "ffc/types.h"

extern uint32_t func_0203b95c(uint32_t v, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov002_021ad50c(void *out, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov002_021d53b4[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

int func_ov002_021adb6c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    Pair t;
    Pair o;
    uint32_t val;

    val = *(uint32_t *)(data_ov002_021d53b4 + *(uint32_t *)(p + 0x1c8) * 12
                        + *(uint32_t *)(p + 0x1c0) * 4);
    if (val != 0) {
        *(uint32_t *)(p + 0x1a0) = func_0203b95c(val, *(uint32_t *)(p + 0x12c), 0, 1);

        func_ov002_021ad50c(&o, *(uint32_t *)(p + 0xc0), *(uint32_t *)(p + 0xc4));
        t.a = o.a;
        t.b = o.b - 6;

        ((void (*)(void *, Pair))(*(void ***)(*(void **)(p + 0x1a0)))[3])(*(void **)(p + 0x1a0), t);

        ((void (*)(void *, uint32_t))(*(void ***)(*(void **)(p + 0x1a0)))[8])(*(void **)(p + 0x1a0), 1);

        ((void (*)(void *, uint32_t))(*(void ***)(*(void **)(p + 0x1a0)))[15])(*(void **)(p + 0x1a0), 2);

        ((void (*)(void *))(*(void ***)(*(void **)(p + 0x1a0)))[11])(*(void **)(p + 0x1a0));

        func_02056bc0(p + 0x48, *(void **)(p + 0x1a0));
        return 1;
    }
    return 0;
}
