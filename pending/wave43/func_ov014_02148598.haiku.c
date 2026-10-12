#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);
extern void func_ov014_02148624(void *self, uint16_t a, uint16_t b);
extern void func_ov014_02148790(void *self);

void func_ov014_02148598(uint8_t *s, int32_t n)
{
    int32_t mv = *(int32_t *)(s + 4);
    uint8_t *m = (uint8_t *)mv;
    int32_t k = n;
    int32_t found;
    uint32_t count;
    uint32_t i;
    uint8_t *base;
    uint8_t *e;

    if (n < 0) {
        k = *(int32_t *)(s + 0xc) + 1;
    }
    if (k > *(int32_t *)(s + 0xc)) {
        found = 0;
        base = (uint8_t *)func_02052d90(*(void **)(m + 4), *(uint32_t *)(m + 8));
        count = *(uint32_t *)(base + 8);
        for (i = *(uint32_t *)(s + 0x10); i < count; i++) {
            base = (uint8_t *)func_02052d90(*(void **)(m + 4), *(uint32_t *)(m + 8));
            e = base + *(uint32_t *)(base + 0xc) + i * 8;
            if ((int32_t)*(uint16_t *)e <= k) {
                if ((int32_t)(*(uint16_t *)e + *(uint16_t *)(e + 2)) >= k) {
                    found = 1;
                    if (*(uint32_t *)(s + 0x10) == i && *(uint8_t *)(s + 0x14) != 0) {
                        continue;
                    }
                    *(uint32_t *)(s + 0x10) = i;
                    func_ov014_02148624(s, *(uint16_t *)(e + 6), *(uint16_t *)(e + 4));
                    break;
                }
            }
            if ((int32_t)(*(uint16_t *)e + *(uint16_t *)(e + 2)) <= k) {
                *(uint32_t *)(s + 0x10) = i;
            }
        }
        if (found == 0) {
            func_ov014_02148790(s);
        }
        *(int32_t *)(s + 0xc) = k;
    }
}
