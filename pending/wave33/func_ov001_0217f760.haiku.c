#include "ffc/types.h"

extern uint32_t func_ov001_0217f520(void *obj, void *key);
extern uint32_t func_02093b18(uint32_t v);
extern int32_t func_ov001_0217f594(int32_t a, uint32_t b, uint32_t c);
extern void func_ov001_0217f8ac(int32_t a, uint32_t b, uint32_t c, int32_t d, int32_t e);
extern uint8_t data_ov001_021919b0[];
extern uint8_t data_ov001_02191998[];
extern uint8_t data_ov001_0219197c[];
extern uint8_t data_ov001_0219199c[];

void func_ov001_0217f760(void *p) {
    uint32_t a = func_02093b18(func_ov001_0217f520(p, data_ov001_021919b0));
    uint32_t b = func_02093b18(func_ov001_0217f520(p, data_ov001_02191998));
    uint32_t c = func_02093b18(func_ov001_0217f520(p, data_ov001_0219197c));
    uint32_t d = func_02093b18(func_ov001_0217f520(p, data_ov001_0219199c));
    int32_t r = func_ov001_0217f594(2, c, b);
    if (r != -1) {
        func_ov001_0217f8ac(r, a, d, 0, 0);
    }
}
