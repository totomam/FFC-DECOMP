#include "ffc/types.h"

extern int func_ov000_02149ebc(int8_t *s);

int func_ov000_02149ed4(int8_t *a, int8_t *b) {
    int8_t sc;
    int8_t pc;
    int i;
    int len_a;
    int len_b;

    i = 0;
    goto body;

eq:
    if (sc != 0) {
        goto body;
    }
    return 0;

body:
    pc = b[0];
    sc = a[i];
    b++;
    a++;
    if (sc == pc) {
        goto eq;
    }
    if (pc != 0x2a) {
        return 1;
    }
    a--;
    len_a = func_ov000_02149ebc(a);
    len_b = func_ov000_02149ebc(b);
    if (len_b > len_a) {
        return 1;
    }
    a += len_a - len_b;
    goto body;
}
