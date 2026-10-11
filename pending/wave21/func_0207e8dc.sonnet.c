#include "ffc/types.h"

extern void func_0207e0f4(void *p, int a, int b, int c);

void func_0207e8dc(uint8_t *p, uint32_t a, uint32_t b) {
    uint32_t args[3];
    uint32_t flag;
    *(uint32_t **)(p + 0x10) = args;
    flag = (*(uint32_t *)(p + 0xc) & 0x20) ? 1 : 0;
    args[0] = flag;
    args[1] = a;
    args[2] = b;
    func_0207e0f4(p, 5, 1, flag);
}
