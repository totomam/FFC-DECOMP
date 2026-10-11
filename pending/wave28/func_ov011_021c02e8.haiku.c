#include "ffc/types.h"

extern int32_t func_ov009_021ad700(void *p);
extern void func_ov009_0219a358(void *p);
extern void func_ov011_021c037c(void *p, uint8_t idx, uint8_t v);
extern void func_ov009_0219a014(void *p);

void func_ov011_021c02e8(uint8_t *p, uint32_t n)
{
    if (func_ov009_021ad700(p) != 0) {
        uint8_t *q = *(uint8_t **)(p + 0x174);
        q[0xa4] = 0xf;
        func_ov009_0219a358(*(void **)(p + n * 4 + 0xec));
        func_ov011_021c037c(p, (uint8_t)(n + 10 * p[0x27d]), p[0x279]);
        func_ov009_0219a014(*(void **)(p + 0x170));
    }
}
