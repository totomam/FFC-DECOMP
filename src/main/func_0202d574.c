#include "ffc/types.h"

extern void func_0202d43c(void *a, void *b, void *c, void *d);
extern void func_02056c4c(void *p);
extern void func_0202d48c(void *p);

void func_0202d574(uint8_t *p) {
    uint32_t buf[3];
    func_0202d43c(buf, p, p + 500, p + 524);
    *(uint32_t *)(p + 0xb0) = 0;
    *(uint32_t *)(p + 0xbc) = 0x0fffffff;
    *(uint32_t *)(p + 0xc0) = 0;
    *(uint32_t *)(p + 0x80) = 0;
    func_02056c4c(p + 0x48);
    func_0202d48c(buf);
}
