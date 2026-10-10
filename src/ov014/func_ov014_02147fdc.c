#include "ffc/types.h"

extern void func_020878ac(void *a, uint32_t b);
extern void func_02082650(void *a, uint32_t b, uint32_t c);

void func_ov014_02147fdc(uint8_t *p) {
    func_020878ac(*(void **)(p + 0x1c), *(uint32_t *)(p + 0x2c));
    func_02082650(*(void **)(p + 0x1c), 0, *(uint32_t *)(p + 0x2c));
}
