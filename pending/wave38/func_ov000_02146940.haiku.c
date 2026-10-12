#include "ffc/types.h"

extern uint32_t func_020882cc(void);
extern void func_ov000_02148218(void);
extern void func_ov000_02146904(void *p, uint32_t v);

void func_ov000_02146940(void *self, uint32_t mode)
{
    uint8_t *p = (uint8_t *)self;

    if (mode != 2) {
        if (*(uint32_t *)(p + 0x28) == *(uint32_t *)(p + 0x24)) {
            uint16_t d = (uint16_t)(*(uint32_t *)(p + 0x48) - *(uint32_t *)(p + 0x50));
            if (*(uint16_t *)(p + 0x30) == d) {
                return;
            }
        }
        if (mode != 1) {
            *(uint8_t *)(p + 0x32) = (uint8_t)(*(uint8_t *)(p + 0x32) + 1);
            if (*(uint8_t *)(p + 0x32) < 2) {
                uint32_t t = func_020882cc();
                uint32_t diff = t - *(uint32_t *)(p + 0x2c);
                if (diff < 0x1991b) {
                    func_ov000_02148218();
                    return;
                }
            }
        }
    }
    func_ov000_02146904(self, 0x10);
}
