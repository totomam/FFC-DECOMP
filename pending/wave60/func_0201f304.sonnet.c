#include "ffc/types.h"
typedef struct { uint16_t h[17]; } S;
extern void func_02036560(void *p, int a);
extern void func_0203654c(void *p, int a);
void func_0201f304(uint8_t *self, int idx, uint8_t *src)
{
    uint8_t *d = *(uint8_t **)(self + 0x58) + idx * 0x60;
    int i;
    uint16_t *dh, *sh;
    *(uint32_t *)(d + 0) = *(uint32_t *)(src + 0);
    *(uint32_t *)(d + 8) = *(uint32_t *)(src + 8);
    *(uint32_t *)(d + 0x10) = *(uint32_t *)(src + 0x10);
    *(uint32_t *)(d + 0x18) = *(uint32_t *)(src + 0x18);
    *(uint32_t *)(d + 0x20) = *(uint32_t *)(src + 0x20);
    *(uint32_t *)(d + 0x28) = *(uint32_t *)(src + 0x28);
    *(uint32_t *)(d + 0x2c) = *(uint32_t *)(src + 0x2c);
    *(S *)(d + 0x30) = *(S *)(src + 0x30);
    *(uint32_t *)(d + 0x54) = *(uint32_t *)(src + 0x54);
    *(uint32_t *)(d + 0x58) = *(uint32_t *)(src + 0x58);
    *(uint32_t *)(d + 0x5c) = *(uint32_t *)(src + 0x5c);
    func_02036560(*(uint8_t **)(self + 0x58) + idx * 0x60, 0);
    func_0203654c(*(uint8_t **)(self + 0x58) + idx * 0x60, idx);
}
