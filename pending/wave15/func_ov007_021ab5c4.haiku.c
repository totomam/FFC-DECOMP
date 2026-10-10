#include "ffc/types.h"

extern void func_0205f470(void *a);

void func_ov007_021ab5c4(void *p) {
    uint8_t *s = *(uint8_t **)((uint8_t *)p + 0x80);
    *(uint8_t *)(s + 0x3c) = 1;
    func_0205f470(*(void **)(*(uint8_t **)(s + 0x50) + 0x94));
}
