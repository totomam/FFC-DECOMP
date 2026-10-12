#include "ffc/types.h"

extern void func_020226b0(int8_t *p);

void func_02022820(int8_t **s, int8_t *dst) {
    int8_t *start = dst;
    int8_t *p;
    while (*(p = *s) != ',' && *p != 0) {
        (*s)++;
        *dst = *p;
        dst++;
    }
    *dst = 0;
    func_020226b0(start);
}
