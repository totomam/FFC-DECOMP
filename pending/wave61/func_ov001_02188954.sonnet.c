#include "ffc/types.h"
int func_ov001_02188954(int8_t *dst, int8_t *src, int n) {
    int i = 0;
    int cnt = 0;
    int z = 0;
    if (n > 0) {
        do {
            int8_t c = src[z];
            if (c != 0) {
                cnt++;
                src++;
                *dst = c;
            } else {
                *dst = z;
            }
            i++;
            dst++;
        } while (i < n);
    }
    return cnt;
}
