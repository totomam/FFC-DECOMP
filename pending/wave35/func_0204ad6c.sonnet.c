#include "ffc/types.h"

int32_t func_0204ad6c(int8_t *s, int32_t n) {
    int32_t i = 0;
    int32_t cnt = 0;
    int32_t j = 0;
    int8_t c = s[i];
    s++;
    if (n <= 0) goto done;
    while (i < n) {
        int32_t k = j;
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z') || c == ' ') {
            cnt += 1;
        } else {
            cnt += 3;
        }
        i++;
        c = s[k];
        s++;
    }
done:
    return cnt;
}
