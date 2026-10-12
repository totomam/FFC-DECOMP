#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint16_t func_ov003_021481c0(uint16_t x);
extern void func_ov003_02164884(void *self);
extern void *func_020424e0(void *p);
extern void *func_ov003_02149588(void *a, uint16_t b, Pair c,
                                 uint16_t e, uint32_t f, uint16_t g, uint16_t h, uint32_t i);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *self);

void func_ov003_02164abc(void *self)
{
    uint8_t *p = (uint8_t *)self;

    *(uint16_t *)(p + 0x84) = func_ov003_021481c0(*(uint16_t *)(p + 0x84));

    if (*(uint16_t *)(p + 0x84) != 0) {
        func_ov003_02164884(self);
        {
            void *r = func_020424e0(*(void **)(p + 0x80));
            Pair pr = *(Pair *)(p + 0x94);
            void *n = func_ov003_02149588(r, *(uint16_t *)(p + 0x84), pr,
                                          *(uint16_t *)(p + 0x86), *(uint32_t *)(p + 0x8c),
                                          *(uint16_t *)(p + 0x88), *(uint16_t *)(p + 0x8a),
                                          *(uint32_t *)(p + 0x90));
            func_02056bc0(p + 0x14, n);
        }
    }

    func_02056bc0(p + 0x14, func_02056aec(self));
}
