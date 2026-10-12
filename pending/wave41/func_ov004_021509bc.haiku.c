#include "ffc/types.h"

extern void func_ov004_02151f2c(void *a, uint32_t b, uint32_t c);
extern void func_ov004_0215223c(void *p);
extern void func_0200d5ec(void *p);
extern void func_02065874(void *p);
extern void func_02056844(void *p);

void func_ov004_021509bc(uint8_t *r4)
{
    uint8_t flag;
    uint8_t *pf;
    uint32_t off;

    off = 0x131;
    pf = &flag;
    *pf = 0;
    r4[off] = 0;
    func_ov004_02151f2c(r4 + off - 0x25, *(uint32_t *)(r4 + off - 0x21), *pf);
    *(uint32_t *)(r4 + off - 0x15) = *(uint32_t *)(r4 + off - 0x15) - *(uint32_t *)(r4 + off - 0x21);
    *(uint32_t *)(r4 + off - 9) = *(uint32_t *)(r4 + off - 9) - *(uint32_t *)(r4 + off - 9);
    if (*(uint32_t **)(r4 + off + 3) == 0) {
        return;
    }
    func_ov004_0215223c((uint8_t *)*(uint32_t **)(r4 + off + 3) + 0x2c);
    func_0200d5ec((uint8_t *)*(uint32_t **)(r4 + off + 3) + 0x20);
    func_0200d5ec((uint8_t *)*(uint32_t **)(r4 + off + 3) + 0x14);
    func_02065874((uint8_t *)*(uint32_t **)(r4 + off + 3) + 8);
    func_02056844(*(uint32_t **)(r4 + off + 3));
    *(uint32_t *)(r4 + 0x134) = 0;
}
