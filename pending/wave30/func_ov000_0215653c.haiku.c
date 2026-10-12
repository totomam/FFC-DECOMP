#include "ffc/types.h"

extern int func_ov000_02156aec(void *a, const void *b, const void *c);
extern void *func_02092b00(void *a, const void *b);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02086b04(uint8_t *buf, int n, const void *s);
extern uint8_t data_ov000_02169dcc[];
extern uint8_t data_ov000_02169dd8[];
extern uint8_t data_ov000_02169de0[];
extern uint8_t data_ov000_02169de8[];
extern uint8_t data_ov000_02169dec[];

int func_ov000_0215653c(uint8_t *p)
{
    uint8_t buf[8];
    uint32_t r;

    if (func_ov000_02156aec(p, data_ov000_02169dcc, data_ov000_02169dd8)) {
        return 1;
    }
    r = func_02092864((uint8_t *)func_02092b00(*(void **)(p + 0x1a34), data_ov000_02169de0) + 4);
    if (r) {
        func_02086b04(buf, 7, data_ov000_02169de8);
        if (func_ov000_02156aec(p, data_ov000_02169dec, buf)) {
            return 1;
        }
    }
    return 0;
}
