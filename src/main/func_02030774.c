#include "ffc/types.h"

extern int32_t func_0202e10c(uint8_t *p, uint8_t *q);
extern void func_02023038(uint32_t a, int32_t b, uint32_t c);
extern uint8_t data_020adf4c[];

int func_02030774(uint8_t *p) {
    if (p[0x449] && p[0x44b] && p[0x44c] && p[0x44d]) {
        if (func_0202e10c(p + 0x13c, data_020adf4c) == 0) {
            int32_t c = *(int32_t *)(p + 0x41c);
            int32_t d = *(int32_t *)(p + 0x40c);
            int32_t e = *(int32_t *)(p + 0x414);
            int32_t f = *(int32_t *)(p + 0x418);
            int32_t g = *(int32_t *)(p + 0x410);
            (void)g;
            uint32_t packed = (uint32_t)((e >> 12) | ((f >> 12) << 5) | ((c >> 12) << 10));
            func_02023038(*(uint32_t *)(p + 0x98), d >> 12, (uint16_t)packed);
        }
    }
    return 100;
}
