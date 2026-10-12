#include "ffc/types.h"

extern char *data_ov001_02195750;

char *func_ov001_02185fac(char *str, int delim) {
    char *start;
    char *p;
    int i;
    int ch;

    if (str != 0) {
        data_ov001_02195750 = str;
    }
    i = 0;
    p = data_ov001_02195750;
    start = p;
    while ((ch = p[i]) != 0 && ch != delim) {
        p++;
        data_ov001_02195750 = p;
    }
    if (p == start) {
        start = 0;
    }
    if (ch != 0) {
        data_ov001_02195750 = data_ov001_02195750 + 1;
        *p = 0;
    }
    return start;
}
