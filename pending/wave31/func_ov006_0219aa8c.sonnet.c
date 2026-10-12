#include "ffc/types.h"

extern void func_ov006_0219aadc(void *b, uint32_t *tbl, void *dst, uint32_t *tmp);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern uint32_t data_ov006_021b57d8[];

void func_ov006_0219aa8c(uint32_t *a, uint8_t *b)
{
    uint8_t *bb = b;
    uint32_t tmp = 0x8bU << 18;
    uint32_t *t = data_ov006_021b57d8;
    uint8_t *dst;
    int i;

    a[0] = *(uint32_t *)(bb + 0x24);
    a[1] = *(uint32_t *)(bb + 0x34);
    dst = (uint8_t *)a + 0xc;
    for (i = 0; i < 3; i++) {
        func_ov006_0219aadc(bb, t, dst, &tmp);
        dst += 0x10;
        t++;
    }
    func_02084ca4(bb + 0x160, (uint8_t *)a + 0x3c, 0x88);
}
