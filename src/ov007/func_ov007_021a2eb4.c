#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a2d64(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_0206c270(void *x);
extern uint32_t data_ov007_021c4164[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov007_021a2eb4(void *self)
{
    uint8_t *s = (uint8_t *)self;
    void *r1 = func_0205681c(0xbc);
    if (r1) {
        r1 = func_ov007_021a2d64(r1);
    }
    func_02056bc0(*(void **)(s + 0xf4), r1);
    r1 = func_0206c270(*(void **)(s + 0xcc));
    func_02056bc0(*(void **)(s + 0xf8), r1);
    *(Pair *)(s + 0xb8) = *(Pair *)data_ov007_021c4164;
}
