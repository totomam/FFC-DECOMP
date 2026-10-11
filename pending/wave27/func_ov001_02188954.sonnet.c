#include "ffc/types.h"

int func_ov001_02188954(char *dst, char *src, int n) {
    int i = 0;
    int count = 0;
    int z = count;
    int idx = count;
    for (; i < n; i++) {
        char c = src[idx];
        if (c != 0) {
            count++;
            src++;
            *dst = c;
        } else {
            *dst = z;
        }
        dst++;
    }
    return count;
}
