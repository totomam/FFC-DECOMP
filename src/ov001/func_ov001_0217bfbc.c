#include "ffc/types.h"

extern int32_t func_ov001_0217b8f0(void *a, void *b);
extern int32_t func_ov001_0217bb10(void *a, void *b);
extern int32_t func_ov001_0217bd00(void *a, void *b);
extern void func_ov001_0217bf3c(void *a, void *b);

int32_t func_ov001_0217bfbc(void *a, uint32_t *b)
{
    int32_t r4 = 0;
    if (b[0] == 0x64) {
        return 3;
    }
    if (b[0] != 0x69) {
        if (b[1] != 0) {
            r4 = func_ov001_0217b8f0(a, b);
        } else {
            r4 = func_ov001_0217bb10(a, b);
        }
    }
    if (r4 == 0 && b[0] == 0x69) {
        r4 = func_ov001_0217bd00(a, b);
        func_ov001_0217bf3c(a, b);
    }
    return r4;
}
