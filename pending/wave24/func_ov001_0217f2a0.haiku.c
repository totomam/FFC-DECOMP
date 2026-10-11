#include "ffc/types.h"

char *func_ov001_0217f2a0(char *s) {
    char *orig = s;
    while (*s != 0) {
        if (*s == '\\') {
            *s = '/';
        }
        s++;
    }
    return orig;
}
