#include "ffc/types.h"

extern void func_0200724c(uint8_t *p);
extern void func_02006dd4(uint8_t *p);

void func_02007140(uint8_t *a) {
    int32_t i = *(int32_t *)(a + 0x24);
    while (i != 1) {
        int32_t *e = (int32_t *)(a + i * 0x14);
        int32_t c = e[7] - 1;
        int32_t n;
        e[7] = c;
        n = e[9];
        if (c <= 0) func_0200724c(a);
        i = n;
        if (i == 1) break;
    }
    func_02006dd4(a);
}
