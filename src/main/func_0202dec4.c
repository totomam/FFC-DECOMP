#include "ffc/types.h"

extern void func_0202df18(void *p, int a, float b, int c);
extern void func_0202dfd0(void *p, int a, int b, int c);

void *func_0202dec4(void *p) {
    uint8_t *s = (uint8_t *)p;
    *(s + 0x60) = 0;
    *(uint32_t *)(s + 0x58) = 0;
    *(uint32_t *)(s + 0x5c) = 0;
    func_0202df18(p, 0, -90.0f, 0);
    func_0202dfd0(p, 0, 0, 0);
    return p;
}
