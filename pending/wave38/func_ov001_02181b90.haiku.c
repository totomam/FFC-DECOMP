#include "ffc/types.h"

extern int32_t func_ov001_0218085c(uint32_t base, int32_t off, uint16_t v);
extern int32_t func_ov001_021803b0(void *self, int32_t off, int32_t len);

int32_t func_ov001_02181b90(void *self, int32_t *p)
{
    uint8_t *s = (uint8_t *)self;

    func_ov001_0218085c(*(uint32_t *)(s + 0x50),
                        *p + *(int32_t *)(*(uint8_t **)(s + 8) + 0x44) + 5,
                        *(uint16_t *)(s + 0x66));
    if (func_ov001_021803b0(self, *(uint32_t *)(s + 0x50) + *p, p[1]) == 0) {
        return 0;
    }
    p[3] = *(int32_t *)(s + 0x88);
    if (((uint8_t *)*(uint32_t *)(s + 0x50))[*p + *(int32_t *)(*(uint8_t **)(s + 8) + 0x44) + 2] == 2) {
        *(int32_t *)(s + 0x8c) = *(int32_t *)(s + 0x88);
    }
    return 1;
}
