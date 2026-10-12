#include "ffc/types.h"

void func_0202265c(int8_t *s, int8_t *d) {
    int8_t c = *s;
    while ((c == ' ' || c == '\t') && c != 0) {
        s++;
        c = *s;
    }
    if (c == 0) {
        *d = 0;
        return;
    }
    while (*s != 0) {
        *d++ = *s++;
    }
    *d = 0;
    d--;
    while (*d == ' ' || *d == '\t') {
        *d = 0;
        d--;
    }
}
