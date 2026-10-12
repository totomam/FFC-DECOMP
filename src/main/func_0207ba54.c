#include "ffc/types.h"

extern void func_0207b8d4(void *p);
extern void func_0207bd2c(void *p);
extern uint8_t data_0213f080[];

void *func_0207ba54(void **a, int idx, uint32_t val) {
    uint8_t *e;
    if (*a != 0) {
        func_0207b8d4(a);
    }
    e = data_0213f080 + idx * 0x17c;
    if (*(uint32_t *)(e + 0x134) == 0) {
        return 0;
    }
    if (((int32_t)(*(uint32_t *)(e + 0x118) << 31) >> 31)) {
        if ((int32_t)val < *(int32_t *)(e + 0x158)) {
            return 0;
        }
        func_0207bd2c(e);
    }
    *(uint32_t *)(e + 0x158) = val;
    *(uint32_t *)(e + 0x118) = (*(uint32_t *)(e + 0x118) & ~1u) | 1u;
    *(void **)(e + 0x154) = a;
    *a = e;
    return e;
}
