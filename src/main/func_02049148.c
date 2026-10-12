#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0216602c(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b720(void);
extern void func_020424e0(void *p);
extern void *func_ov003_0214d454(void);
extern uint32_t data_020afeb0[2];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_02049148(void *self)
{
    uint8_t *s = (uint8_t *)self;
    void *p;
    void *q;

    p = func_0205681c(0x9c);
    q = p;
    if (p) {
        q = func_ov003_0216602c(p, *(void **)(s + 0x94), 1, 0, 0x1e, 1, 0);
    }
    func_02056bc0(s + 0x14, q);
    q = func_0203b720();
    func_02056bc0(s + 0x14, q);
    func_020424e0(*(void **)(s + 0x94));
    q = func_ov003_0214d454();
    func_02056bc0(s + 0x14, q);
    q = func_0203b720();
    func_02056bc0(s + 0x14, q);
    *(Pair *)(s + 0x80) = *(Pair *)data_020afeb0;
}
