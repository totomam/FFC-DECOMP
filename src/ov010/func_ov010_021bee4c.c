#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;

extern void *func_0205681c(uint32_t size);
extern void *func_02047b64(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, void *g, uint32_t h);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov010_021bee0c(void *self, P p);
extern void *func_02062a30(void *owner);
extern P data_ov010_021d18b0;

void func_ov010_021bee4c(void *self)
{
    uint8_t *s = (uint8_t *)self;
    void *r1;
    uint32_t r4;

    if (*(uint32_t *)(s + 0x130) == 2) {
        *(uint32_t *)(s + 0x138) = 1;
        r1 = func_0205681c(0xac);
        if (r1 != 0) {
            r1 = func_02047b64(r1, 0, 0, 0x98, 1, 1, s + 0x138, 0);
        }
        func_02056bc0(s + 0x14, r1);
    }

    r4 = func_ov010_021bee0c(self, data_ov010_021d18b0);
    s = s + 0xf4;
    r1 = func_02062a30(*(void **)s);
    s = (uint8_t *)self + 0x14;
    func_02056bc0(s, r1);
    func_02056bc0(s, (void *)r4);
}
