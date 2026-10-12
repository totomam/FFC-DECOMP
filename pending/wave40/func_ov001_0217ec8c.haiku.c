#include "ffc/types.h"

extern uint32_t func_02092a04(void *a, void *b, uint32_t c);
extern uint32_t func_ov001_0217ed8c(void *a, void *b, void *c, uint32_t d);
extern uint32_t func_02093b18(void *p);
extern uint32_t func_02092b00(void *a, void *b);
extern void func_ov001_021788f0(void *o, uint32_t x, uint32_t y);
extern uint8_t data_ov001_021917f4[];
extern uint8_t data_ov001_021917fc[];
extern uint8_t data_ov001_02191804[];
extern uint8_t data_ov001_02191810[];

uint32_t func_ov001_0217ec8c(void *obj, void *a1, uint32_t flag)
{
    uint8_t buf[16];
    uint8_t *s = *(uint8_t **)obj;
    uint32_t ok;

    if (func_02092a04(a1, data_ov001_021917f4, 7) == 0) {
        if (func_ov001_0217ed8c(a1, data_ov001_021917fc, buf, 16) != 0) {
            *(uint32_t *)(s + 0x5b8) = func_02093b18(buf);
        }
        if (func_ov001_0217ed8c(a1, data_ov001_02191804, s, 0x100) == 0) {
            s[0] = 0;
        }
        if (flag != 0) {
            if (func_02092b00(a1, data_ov001_02191810) != 0) {
                ok = 1;
            } else {
                ok = 0;
            }
            func_ov001_021788f0(obj, 4, ok ? 1 : 0);
        }
        return 1;
    }
    return 0;
}
