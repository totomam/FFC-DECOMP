#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Box;

extern void func_0205ecc8(void *self, Box box);
extern void func_02059538(void *a, void *b);
extern void *func_02053d78(void *object);
extern void func_0200d5ec(void *p);
extern uint8_t data_020b1060[];

void *func_0205eb9c(void *self)
{
    Box box;
    uint8_t *p = (uint8_t *)self;
    uint8_t *q;
    uint32_t hi = 2u << 30;

    *(uint8_t **)self = data_020b1060;
    box.a = hi;
    box.b = hi;
    box.c = hi - 1;
    box.d = hi - 1;

    func_0205ecc8(self, box);
    func_02059538(*(void **)(*(uint8_t **)(p + 0x14) + 0x14), *(void **)(p + 0x18));

    q = p + 0x68;
    func_02053d78(q + 0xc);
    func_02053d78(q);

    q = p + 0x50;
    func_02053d78(q + 0xc);
    func_02053d78(q);

    func_0200d5ec(p + 0x44);
    return self;
}
