#include "ffc/types.h"

int8_t func_0204b4f0(char *p, char **a, int32_t *b) {
    int32_t idx;
    if (*a == 0) {
        idx = *b;
        if (idx < 0x400) {
            *b = idx + 1;
            return *(int8_t *)(p + idx + 0x38);
        }
        *b = 0;
        *a = *(char **)(p + 0x34);
    } else if (*b == 0x200) {
        *b = 0;
        *a = *(char **)*a;
    }
    idx = *b;
    *b = idx + 1;
    return *(int8_t *)(*a + idx + 4);
}
