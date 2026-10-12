#include "ffc/types.h"

extern int32_t func_ov003_0214dd30(int32_t, int32_t, int32_t);

int32_t func_ov003_02162a5c(int32_t *p, int32_t a, int32_t b) {
    int32_t r;

    r = func_ov003_0214dd30(p[0x20], a, b);
    if (r == 0x171717 || r == 0) {
        return r == 0;
    }

    r = func_ov003_0214dd30(p[0x20], a - 0x1000, b);
    if (r == 0x171717 || r == 0) {
        return r == 0;
    }

    r = func_ov003_0214dd30(p[0x20], a + 0x1000, b);
    if (r == 0x171717 || r == 0) {
        return r == 0;
    }

    r = func_ov003_0214dd30(p[0x20], a, b - 0x1000);
    if (r == 0x171717 || r == 0) {
        return r == 0;
    }

    r = func_ov003_0214dd30(p[0x20], a, b + 0x1000);
    if (r == 0x171717 || r == 0) {
        return r == 0;
    }

    return 0;
}
