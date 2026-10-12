#include "ffc/types.h"

extern int32_t func_ov001_0217f520(int32_t a, void *b);
extern int32_t func_02093b18(int32_t a);
extern int32_t func_ov001_0217f594(int32_t a, int32_t b, int32_t c);
extern int32_t *func_ov000_0216876c(void *obj, int32_t idx);
extern void func_ov001_0217f8ac(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);
extern uint8_t data_ov001_02191974[];
extern uint8_t data_ov001_0219197c[];
extern uint8_t data_ov001_02191980[];
extern uint8_t data_ov001_02194c38[];

void func_ov001_0217f5ec(int32_t a0)
{
    int32_t r4;
    int32_t r6;
    int32_t r7;
    int32_t r5;
    int32_t *p;

    r4 = func_02093b18(func_ov001_0217f520(a0, data_ov001_02191974));
    r6 = func_02093b18(func_ov001_0217f520(a0, data_ov001_0219197c));
    r7 = func_ov001_0217f520(a0, data_ov001_02191980);
    r5 = 0;
    r6 = func_ov001_0217f594(0, r6, 0);
    if (r6 != r5 - 1) {
        p = func_ov000_0216876c(*(void **)(data_ov001_02194c38 + 0x14), r6);
        p[2] = r4;
        if (r4 > 0) {
            r5 = 1;
        }
        func_ov001_0217f8ac(r6, r5, 0, r7, 0);
    }
}
