#include "ffc/types.h"
extern int func_ov000_0214eef4(int a, uint8_t *b, uint32_t c);
extern int func_ov000_02165408(int a, int b);
int func_ov000_0216556c(int a, uint8_t *b, uint32_t *c) {
    uint32_t v = *c;
    *b = v;
    a = func_ov000_0214eef4(a, b, v);
    *c = *b;
    return func_ov000_02165408(a, -1);
}
