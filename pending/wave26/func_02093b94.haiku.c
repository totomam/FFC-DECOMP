#include "ffc/types.h"

int func_02093b94(uint16_t *p, uint16_t *q, int n) {
    int d = 0;
    while (n != 0) {
        d = p[0] - q[0];
        if (d != 0) {
            break;
        }
        p++;
        q++;
        n--;
    }
    return d;
}
