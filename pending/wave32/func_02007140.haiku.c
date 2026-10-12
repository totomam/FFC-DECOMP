#include "ffc/types.h"

extern void func_0200724c(uint8_t *p);
extern void func_02006dd4(uint8_t *p);

void func_02007140(uint8_t *a) {
    int32_t i = *(int32_t *)(a + 0x24);
    int32_t n;
    if (i != 1) {
        do {
            uint8_t *e = a + i * 0x14;
            int32_t c = *(int32_t *)(e + 0x1c) - 1;
            *(int32_t *)(e + 0x1c) = c;
            n = *(int32_t *)(e + 0x24);
            if (c <= 0) {
                func_0200724c(a);
            }
            i = n;
        } while (n != 1);
    }
    func_02006dd4(a);
}
