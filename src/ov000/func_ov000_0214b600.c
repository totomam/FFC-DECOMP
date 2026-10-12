#include "ffc/types.h"

extern int32_t func_ov000_0214ac30(int32_t a, int32_t b, void *p);
extern void func_ov000_0214ac94(void *s, int32_t v);
extern int32_t func_ov000_0214af30(void *p);
extern void (*data_ov000_0216bca4)(int32_t);

int32_t func_ov000_0214b600(int32_t *out, void *arg) {
    uint8_t *s = *(uint8_t **)((uint8_t *)arg + 0xc);
    uint32_t o = 0x824;
    int32_t v = *(int32_t *)(s + o);

    if (v != 0 && *(uint8_t *)(s + 0x456) == 0) {
        int32_t a = *(int32_t *)(s + o + 8);
        int32_t b = *(int32_t *)(s + o + 4);
        if (func_ov000_0214ac30(v + a, b - a, arg)) {
            data_ov000_0216bca4(*(int32_t *)(s + o));
            *(int32_t *)(s + o) = 0;
            *out = 0;
            return 0;
        }
        func_ov000_0214ac94(s, *(int32_t *)(s + o));
        if (*(uint8_t *)(s + 0x456) == 0) {
            *(int32_t *)(s + o) = 0;
        }
    }

    if (*(int32_t *)(s + o) == 0) {
        do {
            if (func_ov000_0214af30(arg) == 9) {
                *out = 0;
                return 0;
            }
        } while (*(int32_t *)(s + o) == 0);
    }

    o = 0x828;
    {
        int32_t x = *(int32_t *)(s + o);
        int32_t y = *(int32_t *)(s + o + 4);
        *out = x - y;
        return *(int32_t *)(s + o - 4) + *(int32_t *)(s + o + 4);
    }
}
