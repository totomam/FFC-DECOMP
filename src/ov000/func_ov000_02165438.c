#include "ffc/types.h"

extern int32_t func_ov000_0214ee6c(void *a);
extern int32_t func_ov000_0214e448(void *a);
extern void func_ov000_02165408(int32_t a, int32_t b);

int32_t func_ov000_02165438(void *a, int32_t *p) {
    int32_t r = func_ov000_0214ee6c(a);
    int32_t v;
    if (r == 0) {
        if (*p == 0) {
            v = 1;
        } else {
            v = 0;
        }
        *p = v;
        return v;
    } else {
        if (func_ov000_0214e448(a) == 0) {
            return 0;
        }
        func_ov000_02165408(r, -1);
        *p = 1;
        return 1;
    }
}
