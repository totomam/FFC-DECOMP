#include "ffc/types.h"

int func_ov000_02145810(uint16_t *a, uint16_t *b)
{
    int i = 0;
    do {
        uint16_t x = *a;
        uint16_t y = *b;
        a++;
        b++;
        if (x != y) {
            return 1;
        }
        i++;
    } while (i < 3);
    return 0;
}
