#include "ffc/types.h"

extern void func_02074080(uint32_t v);
extern void func_0203b720(void *p);

void func_ov007_021bc3a8(void *p) {
    uint8_t *b = (uint8_t *)p;
    if (b[0xb4]) {
        func_02074080(*(uint32_t *)(b + 0xb0));
    } else {
        func_0203b720(p);
    }
}
