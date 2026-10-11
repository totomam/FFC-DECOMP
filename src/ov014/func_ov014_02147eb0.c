#include "ffc/types.h"

extern void func_020878ac(void *a, uint32_t b);
extern void func_02082364(void *a, uint32_t b, uint32_t c);

void func_ov014_02147eb0(uint8_t *p) {
    func_020878ac(*(void **)(p + 0x18), *(uint32_t *)(p + 0x24));
    func_02082364(*(void **)(p + 0x18), *(uint32_t *)(p + 0x28), *(uint32_t *)(p + 0x24));
}
