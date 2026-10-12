#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0216e710(void *a, void *b, uint32_t c, void *d, void *e);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov003_0217b514[2];

void func_ov003_0216f244(uint8_t *p)
{
    uint32_t r4;
    void *r1;
    void *res;

    if (p[0xac] != 0) {
        r4 = *(uint32_t *)(p + 0x90);
        p[0xac] = 0;
    } else {
        uint8_t *q = *(uint8_t **)(p + 0xa8);
        int32_t off = *(int32_t *)(q + 8);
        uint8_t *s;
        if (off == 0) {
            s = 0;
        } else {
            s = q + off;
        }
        r4 = *(uint16_t *)(s + *(int32_t *)(s + 4) + 0x66);
    }

    res = func_0205681c(0x9c);
    r1 = res;
    if (res != 0) {
        r1 = func_ov003_0216e710(res, *(void **)(p + 0x88), r4, *(void **)(p + 0xa8), p + 0x94);
    }
    func_02056bc0(p + 0x14, r1);
    {
        typedef struct { uint32_t a, b; } Pair;
        *(Pair *)(p + 0x80) = *(Pair *)data_ov003_0217b514;
    }
}
