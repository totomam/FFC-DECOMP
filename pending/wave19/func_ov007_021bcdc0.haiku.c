#include "ffc/types.h"

extern void func_ov007_021bc310(void *p, int a, int b, int c, int d);
extern char data_ov007_021c8178[];

void *func_ov007_021bcdc0(void *p, int a, int b, int c, int d) {
    uint8_t *q = (uint8_t *)p;
    func_ov007_021bc310(p, a, d, c, 0);
    *(void **)q = data_ov007_021c8178;
    *(uint32_t *)(q + 0x1d4) = (uint32_t)b;
    q[0xb5] = 1;
    return p;
}
