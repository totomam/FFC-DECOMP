#include "ffc/types.h"

extern void func_ov007_021bc310(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_02056830(uint32_t size);
extern uint8_t data_ov007_021c8074[];

void *func_ov007_021bd088(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t e) {
    func_ov007_021bc310(p, a, e, c, 0);
    *(void **)p = data_ov007_021c8074;
    *(uint32_t *)(p + 0x1d8) = b;
    *(void **)(p + 0x1dc) = func_02056830(0x5a0);
    p[0xb5] = 1;
    return p;
}
