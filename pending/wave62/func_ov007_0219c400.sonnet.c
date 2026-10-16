#include "ffc/types.h"
extern void func_02056c4c(uint32_t a);
extern void func_ov007_0219bedc(void *p, uint32_t a);
void func_ov007_0219c400(uint8_t *p) {
    uint32_t *o = *(uint32_t **)(p + 0xe4);
    if (o == 0) return;
    o[3] = (o[3] & ~0xff) | 2;
    *(uint32_t *)(p + 0xe4) = 0;
    func_02056c4c(*(uint32_t *)(p + 0xc4));
    func_02056c4c(*(uint32_t *)(p + 0xc0));
    *(uint32_t *)(p + 0x94) = 0;
    *(uint32_t *)(p + 0x98) = 0;
    {
        uint8_t *a = p + 0xac;
        a[0] = 0;
        *(p + 0xb4) = 0;
        a[1] = 0; a[2] = 0; a[3] = 0; a[4] = 0; a[5] = 0; a[6] = 0; a[7] = 0;
    }
    {
        uint8_t *b = p + 0xb4;
        b[1] = 0; b[2] = 0; b[3] = 0; b[4] = 0; b[5] = 0; b[6] = 0; b[7] = 0;
    }
    func_ov007_0219bedc(p, *(uint32_t *)(p + 0xe8));
}
