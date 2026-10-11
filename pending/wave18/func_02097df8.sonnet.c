#include "ffc/types.h"

extern void func_0209724c(void *p);
extern char data_020b33a8[];
extern char data_020b33bc[];

void *func_02097df8(void *a0) {
    uint8_t *p = (uint8_t *)a0;
    uint32_t v = (uint32_t)data_020b33a8;
    uint8_t *q;
    *(uint32_t *)p = v;
    *(uint32_t *)(p + 4) = (uint32_t)data_020b33bc;
    q = p + *(int32_t *)(v - 12);
    func_0209724c(q);
    *(uint32_t *)(q + 0x30) = 0;
    *(uint16_t *)(q + 0x34) = 0x20;
    return p;
}
