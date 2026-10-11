#include "ffc/types.h"

extern void func_02006728(void *a, int32_t b, int32_t c);

void func_02006808(int32_t *p, int32_t v) {
    if (v < 0) {
        v = 0;
    } else if (v > 0x7f) {
        v = 0x7f;
    }
    p[2] = v;
    func_02006728(p, p[3], 0);
}
