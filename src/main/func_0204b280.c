#include "ffc/types.h"

extern int func_0204b000(void *a, uint32_t b, int8_t *c, int d);
extern int func_0204b25c(uint8_t x);
extern int8_t data_0209e56c[];

int func_0204b280(int8_t *p, void *q, uint32_t v) {
    int i;
    if (func_0204b000(q, v, p + 0x3a, 0x12) < 0) {
        return 1;
    }
    for (i = 19; i >= 2; i--) {
        int8_t *s = p + i;
        int c = s[0x38];
        int e = data_0209e56c[i];
        for (;;) {
            c = func_0204b25c((uint8_t)c);
            s[0x38] = (int8_t)c;
            if (c == e) {
                break;
            }
            if (func_0204b000(q, v, p + 0x3a, 0x12) < 0) {
                return 1;
            }
        }
    }
    return 0;
}
