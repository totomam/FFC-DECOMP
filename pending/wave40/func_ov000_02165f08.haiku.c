#include "ffc/types.h"

extern int8_t data_ov000_02169762[];
extern int8_t data_ov000_0216975f[];
extern int8_t data_ov000_0216975c[];

int func_ov000_02165f08(const int8_t *s, int mode)
{
    const int8_t *base;
    const int8_t *start;
    int8_t c;

    start = s;
    switch (mode) {
    case 1:
        base = data_ov000_02169762;
        break;
    case 2:
        base = data_ov000_0216975f;
        break;
    default:
        base = data_ov000_0216975c;
        break;
    }

    c = *s;
    if (c != 0) {
        int8_t t = base[2];
        do {
            if (c == t) {
                int idx = s - start;
                return 3 * (idx / 4) + (idx - 1) % 4;
            }
            s++;
            c = *s;
        } while (c != 0);
    }
    {
        int len = s - start;
        return 3 * (len / 4);
    }
}
