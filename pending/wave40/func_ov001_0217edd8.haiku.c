#include "ffc/types.h"

extern int32_t func_ov000_021655ac(void *p, int32_t zero, int32_t *a, int32_t *b);
extern void func_ov000_021652a8(int32_t x, int32_t y, int32_t z, void *d);
extern void func_ov001_0217ef50(void *p, int32_t n, void *d);
extern void func_ov001_021788f0(void *p, int32_t n, int32_t f);
extern uint8_t data_ov001_02191818[];
extern uint8_t data_ov001_0219182c[];
extern uint8_t data_ov001_02191864[];
extern uint8_t data_ov001_0219187c[];

int32_t func_ov001_0217edd8(void *p0, void *p1, int32_t *out) {
    int32_t a = 0;
    int32_t b = 0;
    int32_t r = func_ov000_021655ac(p1, 0, &a, &b);

    if (r == -1) {
        func_ov000_021652a8(1, 0, 1, data_ov001_02191818);
        func_ov001_0217ef50(p0, 5, data_ov001_0219182c);
        func_ov001_021788f0(p0, 3, 1);
        return 3;
    }
    if (r > 0) {
        if (b != 0) {
            func_ov000_021652a8(1, 0, 1, data_ov001_02191864);
            *out = 4;
            return 0;
        }
        if (a != 0) {
            func_ov000_021652a8(1, 0, 8, data_ov001_0219187c);
            *out = 3;
            return 0;
        }
    }
    *out = 0;
    return 0;
}
