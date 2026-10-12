#include "ffc/types.h"

extern char *func_02092b00(const char *a);
extern uint32_t func_02092864(const char *text);

uint32_t func_ov001_0217ed8c(const char *a, const char *s, char *out, int32_t max)
{
    int32_t i = 0;
    char delim = s[0];
    char *p = func_02092b00(a);
    char c;
    if (p == 0) {
        return 0;
    }
    p = p + func_02092864(s);
    while (i < max - 1 && (c = p[i]) != 0 && c != delim) {
        out[i] = c;
        i++;
    }
    out[i] = 0;
    return 1;
}
