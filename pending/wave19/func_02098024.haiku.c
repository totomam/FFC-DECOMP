#include "ffc/types.h"

extern void func_0209724c(void *p);
extern uint8_t data_020b3380[];
extern uint8_t data_020b3394[];

void *func_02098024(void *p) {
    uint8_t *s = (uint8_t *)p;
    uint32_t b = (uint32_t)data_020b3380;
    int32_t off;
    uint8_t *q;

    *(uint32_t *)s = b;
    *(uint32_t *)(s + 4) = 0;
    *(uint32_t *)(s + 8) = (uint32_t)data_020b3394;
    b -= 12;
    off = *(int32_t *)b;
    q = s + off;
    func_0209724c(q);
    *(uint32_t *)(q + 0x30) = 0;
    *(uint8_t *)(q + 0x34) = 0x20;
    return s;
}
