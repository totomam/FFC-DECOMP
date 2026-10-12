#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);

int func_ov003_02154db8(uint8_t *self, uint32_t key, uint32_t *out)
{
    uint32_t val = 0;
    uint32_t i = 0;
    uint8_t *p;
    uint32_t count;

    p = func_02052d90(*(void **)(self + 0xe4), *(uint32_t *)(self + 0xe8));
    count = *(uint32_t *)(p + 0x84);
    if (count != 0) {
        do {
            p = func_02052d90(*(void **)(self + 0xe4), *(uint32_t *)(self + 0xe8));
            if (key == *(uint16_t *)(p + *(uint32_t *)(p + 0x88) + i * 8)) {
                p = func_02052d90(*(void **)(self + 0xe4), *(uint32_t *)(self + 0xe8));
                val = *(uint32_t *)(p + *(uint32_t *)(p + 0x88) + i * 8 + 4);
                break;
            }
            i++;
            p = func_02052d90(*(void **)(self + 0xe4), *(uint32_t *)(self + 0xe8));
            count = *(uint32_t *)(p + 0x84);
        } while (i < count);
    }
    p = func_02052d90(*(void **)(self + 0xe4), *(uint32_t *)(self + 0xe8));
    count = *(uint32_t *)(p + 0x84);
    if (i >= count) {
        return 0;
    }
    if (out != 0) {
        *out = val;
    }
    return 1;
}
