#include "ffc/types.h"

extern void func_02092878(int8_t *dst, const int8_t *src);
extern uint32_t func_02092864(const uint8_t *text);

void func_0202e150(int8_t *a, int8_t *b, int8_t *c) {
    int32_t i;
    uint32_t idx;

    func_02092878(b, a);
    idx = 0;
    i = (int32_t)func_02092864((const uint8_t *)b) - 1;
    while (i >= 0) {
        if (b[i] == '/') {
            idx = i;
            break;
        }
        i--;
    }
    idx = idx + 1;
    b[idx] = 0;
    if (c != 0) {
        func_02092878(c, a + idx);
    }
}
