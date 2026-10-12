#include "ffc/types.h"

void func_020840a8(uint32_t *tab, uint32_t poly)
{
    uint32_t c;
    uint32_t i;
    uint32_t j;

    i = 0;
    do {
        c = i;
        j = 0;
        do {
            if (c & 1) {
                c = (c >> 1) ^ poly;
            } else {
                c = c >> 1;
            }
            j++;
        } while (j < 8);
        tab[i] = c;
        i++;
    } while (i < 256);
}
