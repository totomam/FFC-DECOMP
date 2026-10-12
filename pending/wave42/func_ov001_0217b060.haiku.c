#include "ffc/types.h"

extern void func_ov001_0217b0ec(void *p);
extern uint32_t *func_ov000_021653d4(uint32_t size);
extern uint32_t func_ov000_021658c0(uint32_t v);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

int func_ov001_0217b060(void *self, void *a1, void *a2)
{
    uint32_t *dst;
    Pair *d;
    Pair *s;
    int n;
    uint8_t *o = (uint8_t *)a1;
    uint32_t *src = (uint32_t *)a2;

    if (*(uint32_t *)(*(uint8_t **)self + 0x100) == 0) {
        return 1;
    }
    func_ov001_0217b0ec(a1);
    dst = func_ov000_021653d4(0xf0);
    *(uint32_t **)(o + 0x10) = dst;
    if (dst != 0) {
        s = (Pair *)a2;
        d = (Pair *)dst;
        n = 30;
        do {
            *d++ = *s++;
        } while (--n != 0);

        ((uint32_t *)*(uint32_t **)(o + 0x10))[0] = func_ov000_021658c0(src[0]);
        ((uint32_t *)*(uint32_t **)(o + 0x10))[1] = func_ov000_021658c0(src[1]);
        ((uint32_t *)*(uint32_t **)(o + 0x10))[2] = func_ov000_021658c0(src[2]);
        ((uint32_t *)*(uint32_t **)(o + 0x10))[3] = func_ov000_021658c0(src[3]);
        ((uint32_t *)*(uint32_t **)(o + 0x10))[4] = func_ov000_021658c0(src[4]);
        ((uint32_t *)*(uint32_t **)(o + 0x10))[5] = func_ov000_021658c0(src[5]);
        ((uint32_t *)*(uint32_t **)(o + 0x10))[0x32] = func_ov000_021658c0(src[0x32]);
    }
    return *(uint32_t **)(o + 0x10) != 0 ? 1 : 0;
}
