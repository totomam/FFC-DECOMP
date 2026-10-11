#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201b8c4(uint32_t a, uint8_t b);
extern void func_ov007_021a0638(void *p, uint32_t b);

void func_ov007_021a0600(void *p, uint32_t idx)
{
    uint8_t *s = (uint8_t *)p;
    if (idx < 0xb) {
        void *o = *(void **)(s + 0x164);
        void **vt = *(void ***)o;
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(o, idx + 1, 0);
        s[0x16b] = (uint8_t)idx;
        func_0201b8c4(*(uint32_t *)&data_020b93b8, s[0x16b]);
        func_ov007_021a0638(p, 0);
    }
}
