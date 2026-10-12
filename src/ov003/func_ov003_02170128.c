#include "ffc/types.h"

struct Loc {
    uint32_t w0;
    uint32_t a;
    uint32_t b;
    uint8_t f;
};

extern uint32_t data_020b8e44;
extern void func_02017754(struct Loc *out, uint32_t v);
extern uint8_t *func_02052d90(uint32_t a, uint32_t b);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02053290(void *object);

uint16_t func_ov003_02170128(uint32_t idx)
{
    uint16_t r;
    struct Loc loc;
    struct Loc *l;
    uint8_t *p;

    l = &loc;
    func_02017754(l, data_020b8e44);
    p = func_02052d90(l->a, l->b);
    r = *(uint16_t *)(p + *(uint32_t *)(p + 8) + idx * 12 + 2);
    if (l->a != 0) {
        if (l->f != 0) {
            func_02052d3c(l->a, l->b);
        }
        func_02052c04(l->a);
    }
    func_02053290(l);
    return r;
}
