#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t x);
extern void func_02087620(void *object);
extern void func_0202d574(void *obj);
extern char data_020adac0[];

void *func_0202d4cc(uint8_t *obj, uint32_t a, uint16_t b, uint32_t c, uint32_t e)
{
    uint32_t off;
    uint8_t *q;
    func_02056c9c(obj, 0);
    *(void **)obj = (void *)data_020adac0;
    *(uint32_t *)(obj + 0x80) = 0;
    *(uint32_t *)(obj + 0x84) = 0;
    *(uint32_t *)(obj + 0x88) = a;
    *(uint32_t *)(obj + 0x8c) = c;
    *(uint32_t *)(obj + 0x90) = e;
    off = 0x7d << 2;
    *(uint16_t *)(obj + 0xac) = b;
    func_02087620(obj + off);
    off += 0x18;
    q = obj + 0x48;
    q[0x12] = (uint8_t)((q[0x12] & 0xffffff00u) | 1u);
    *(uint32_t *)(obj + 0xa0) = 0;
    *(uint32_t *)(obj + 0xa4) = 0;
    *(uint32_t *)(obj + 0xa8) = 0;
    *(uint32_t *)(obj + 0x94) = 0;
    *(uint32_t *)(obj + 0x98) = 0;
    *(uint32_t *)(obj + 0x9c) = 0;
    *(uint32_t *)(obj + 0xb8) = 1u << 12;
    obj[0xb4] = 1;
    *(uint16_t *)(obj + 0xae) = 0x7fff;
    *(uint32_t *)(obj + off) = 0;
    func_0202d574(obj);
    return obj;
}
