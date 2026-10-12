#include "ffc/types.h"

extern uint32_t func_ov001_0217f520(void *p, void *d);
extern uint32_t func_02093b18(uint32_t v);
extern int32_t func_ov001_0217f594(int32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02092b00(void *p, void *d);
extern void func_ov001_0217f8ac(int32_t a, uint32_t b, uint32_t c, void *d, uint32_t e);
extern char data_ov001_02191990[];
extern char data_ov001_0219197c[];
extern char data_ov001_02191998[];
extern char data_ov001_0219199c[];
extern char data_ov001_021919a0[];
extern char data_ov001_021919a8[];
extern char data_ov001_0219196c[];

void func_ov001_0217f6c0(void *p)
{
    uint32_t a = func_02093b18(func_ov001_0217f520(p, data_ov001_02191990));
    uint32_t b = func_02093b18(func_ov001_0217f520(p, data_ov001_0219197c));
    uint32_t c = func_02093b18(func_ov001_0217f520(p, data_ov001_02191998));
    uint32_t d = func_02093b18(func_ov001_0217f520(p, data_ov001_0219199c));
    int32_t r = func_ov001_0217f594(1, b, c);
    if (r != -1) {
        uint32_t e = func_02093b18(func_ov001_0217f520(p, data_ov001_021919a0));
        uint32_t q = func_02092b00(p, data_ov001_021919a8);
        void *s;
        if (q == 0) {
            e = 0;
            s = data_ov001_0219196c;
        } else {
            s = (void *)(q + 6);
        }
        func_ov001_0217f8ac(r, a, d, s, e);
    }
}
