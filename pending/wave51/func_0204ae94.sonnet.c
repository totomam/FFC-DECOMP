#include "ffc/types.h"

int func_0204ae94(int8_t *s, int n) {
    int i;
    int c;
    int old;
    int v;
    int started;

    if (n > 10) {
        return -1;
    }
    v = 0;
    started = 0;
    for (i = 0; i < n; i++) {
        c = s[i];
        if (started != 0) {
            if (c == ' ' || c == 0) {
                break;
            }
        } else if (c == ' ') {
            continue;
        }
        if (c < '0' || c > '9') {
            return -1;
        }
        old = v;
        v = c + v * 10 - '0';
        started = 1;
        if (old > v) {
            return -1;
        }
    }
    return v;
}
