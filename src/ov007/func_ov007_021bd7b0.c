#include "ffc/types.h"

extern void func_ov007_021bc310(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern char data_ov007_021c8040[];
extern uint8_t *data_020b93b8;

void *func_ov007_021bd7b0(void *p, void *a1, uint32_t a2, uint32_t a3) {
    uint32_t off;
    uint8_t *q = p;
    func_ov007_021bc310(p, a1, a3, a2, 0);
    *(void **)q = data_ov007_021c8040;
    off = 0x1d << 4;
    *(uint32_t *)(q + off + 4) = *(uint32_t *)(data_020b93b8 + off);
    q[0xb5] = 1;
    return p;
}
