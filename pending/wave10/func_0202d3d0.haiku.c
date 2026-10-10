#include "ffc/types.h"

int func_0202d3d0(int8_t *s1, int8_t *s2) {
    int8_t c1;
    int8_t c2;
    int8_t l1;
    int8_t l2;

    while ((c1 = s1[0]) != 0 && (c2 = s2[0]) != 0) {
        l1 = c1;
        if (c1 >= 'A' && c1 <= 'Z') l1 = (int8_t)(c1 + 0x20);
        l2 = c2;
        if (c2 >= 'A' && c2 <= 'Z') l2 = (int8_t)(c2 + 0x20);
        if (l1 != l2) break;
        s1++;
        s2++;
    }
    return c1 - s2[0];
}
