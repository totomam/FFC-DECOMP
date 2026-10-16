#include "ffc/types.h"
extern uint8_t data_ov006_021baf3c[6];
extern int func_ov006_0219ef3c(uint8_t *a, int b, int c);
int func_ov006_0219e1dc(int a, int b) {
    int r;
    int i;
    int found;
    uint8_t *p;
    r = 0;
    p = data_ov006_021baf3c;
    found = 0;
    i = 0;
    do {
        if (*p != 0) { found = 1; break; }
        i++; p++;
    } while (i < 6);
    if (found) {
        if (func_ov006_0219ef3c(data_ov006_021baf3c, b, 6) != 0) r = 1;
    } else {
        if (a != 0x1000) r = 2;
    }
    return r;
}
