#include "ffc/types.h"

extern void func_020878ac(void *a, uint32_t b);
extern void func_02082908(void *a, uint32_t b, uint32_t c);

void func_ov014_02147e98(uint8_t *p) {
    func_020878ac(*(void **)(p + 0x14), *(uint32_t *)(p + 0x20));
    func_02082908(*(void **)(p + 0x14), 0, *(uint32_t *)(p + 0x20));
}
