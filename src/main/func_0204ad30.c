#include "ffc/types.h"

int32_t func_0204ad30(int8_t *s) {
    int32_t count = 0;
    int8_t c;
    c = *s++;
    while (c != 0) {
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ') {
            count += 1;
        } else {
            count += 3;
        }
        c = *s++;
    }
    return count;
}
