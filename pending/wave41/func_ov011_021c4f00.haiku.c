#include "ffc/types.h"

extern void func_020694ac(void *p, int a, int b);
extern uint32_t data_ov011_021cb4e8[];

void *func_ov011_021c4f00(uint8_t *self, uint32_t *b, int c, int d, int e, uint8_t *f)
{
    uint8_t *src;
    uint8_t *dst;
    int n;
    int zero = 0;
    func_020694ac(self, 0, 2);
    *(uint32_t **)self = data_ov011_021cb4e8;
    *(int *)(self + 0xd4) = zero;
    *(int *)(self + 0xd8) = zero;
    *(int *)(self + 0xdc) = zero;
    *(int *)(self + 0xe0) = zero;
    *(int *)(self + 0xe4) = zero;
    *(int *)(self + 0xf0) = zero;
    *(int *)(self + 0xf4) = e;
    *(uint32_t **)(self + 0xf8) = b;
    *(uint8_t *)(self + 0x116) = (uint8_t)*b;
    *(uint8_t *)(self + 0x118) = 2;
    *(int *)(self + 0x11c) = c;
    *(int *)(self + 0x120) = d;
    *(uint8_t *)(self + 0x128) = 1;
    *(uint8_t *)(self + 0x117) = *(uint8_t *)(self + 0x116);
    src = f;
    dst = self + 0x100;
    n = 20;
    do {
        *dst++ = *src++;
    } while (--n != 0);
    *(uint32_t *)(self + 0x124) = *b;
    return self;
}
