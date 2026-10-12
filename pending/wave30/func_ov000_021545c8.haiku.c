#include "ffc/types.h"

extern void func_ov000_02154640(void *p, uint8_t *out);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_02084ca4(uint8_t *dst, const uint8_t *src, uint32_t length);
extern const uint8_t data_ov000_02169b08[];

int32_t func_ov000_021545c8(void *a, uint8_t *s)
{
    uint8_t buf[8];
    uint8_t tmp[0x10];
    int32_t i;

    func_ov000_02154640(a, buf);
    if (func_02090410(buf, data_ov000_02169b08, 8) == 0) {
        func_02084ca4(tmp, s, 10);
        for (i = 0; i < 10; i++) {
            if (s[i] < 0x20 || s[i] > 0x7e) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
