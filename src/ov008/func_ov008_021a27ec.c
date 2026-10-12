#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

uint16_t func_ov008_021a27ec(uint8_t *a, uint32_t idx)
{
    uint8_t *m;
    if (a[0x144]) {
        m = (uint8_t *)func_02052d90(*(void **)(a + 0xc0), *(uint32_t *)(a + 0xc4));
        if (*(uint32_t *)(m + 0x10) > idx) {
            m = (uint8_t *)func_02052d90(*(void **)(a + 0xc0), *(uint32_t *)(a + 0xc4));
            return *(uint16_t *)(m + *(uint32_t *)(m + 0x14) + (idx << 3) + 6);
        }
    } else {
        m = (uint8_t *)func_02052d90(*(void **)(a + 0xc0), *(uint32_t *)(a + 0xc4));
        if (*(uint32_t *)(m + 0x8) > idx) {
            m = (uint8_t *)func_02052d90(*(void **)(a + 0xc0), *(uint32_t *)(a + 0xc4));
            return *(uint16_t *)(m + *(uint32_t *)(m + 0xc) + (idx << 3) + 6);
        }
    }
    return 0;
}
