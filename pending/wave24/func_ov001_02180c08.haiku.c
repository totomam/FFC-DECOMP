#include "ffc/types.h"

extern int32_t func_ov001_021808cc(int32_t *p);
extern int32_t func_ov001_0217ff48(int32_t *p, int32_t a, int32_t b, int32_t c);

int32_t func_ov001_02180c08(int32_t *p) {
    if (p[3] != 1) {
        if (func_ov001_021808cc(p)) {
            return 1;
        }
        return 0;
    }
    p[3] = 5;
    {
        int32_t r = 0;
        if (func_ov001_0217ff48(p, 0, 0, 0)) {
            r = 1;
        }
        return r;
    }
}
