#include "ffc/types.h"

extern int32_t func_ov008_0219a444(int32_t *p, int32_t i);
extern void func_ov005_02196fc4(int32_t a, int32_t b);

void func_ov008_02199e8c(int32_t *p) {
    int32_t sum = 0;
    int32_t i;
    for (i = 0; i < 0x40; i++) {
        if (((uint8_t *)p)[i + 0x100] == 1) {
            sum += func_ov008_0219a444(p, i);
        }
    }
    p = p - 1;
    func_ov005_02196fc4(*p, sum);
}
