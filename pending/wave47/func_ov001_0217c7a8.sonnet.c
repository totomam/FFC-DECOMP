#include "ffc/types.h"

extern uint32_t func_ov001_0217ec8c(void *a, void *b, uint32_t c);
extern uint32_t func_02092a04(void *p, void *q, uint32_t n);
extern void func_ov001_0217ef50(void *a, uint32_t x, void *y);
extern void func_ov001_021788f0(void *a, uint32_t x, uint32_t y);
extern uint32_t func_ov001_0217ed8c(void *a, void *b, void *c, uint32_t n);
extern void *func_02093b18(void *p);
extern void *func_ov000_021653d4(uint32_t n);
extern void func_ov001_0217ef6c(void *a, void *b);
typedef struct { uint32_t x, y; } S;
extern uint32_t func_ov001_0217894c(void *a, S s, void *z, void *w, uint32_t v);
extern void func_ov001_0217b7f4(void *a, void *b);
extern uint32_t data_ov001_021912ac[];
extern uint32_t data_ov001_021912b4[];
extern uint32_t data_ov001_021912e4[];
extern uint32_t data_ov001_021912f0[];

uint32_t func_ov001_0217c7a8(void *a, uint32_t *b, void *c)
{
    uint32_t buf[4];
    S s;
    uint32_t *r3;
    void *p;
    uint32_t ret;

    if (func_ov001_0217ec8c(a, c, 1) != 0) {
        return 4;
    }
    if (func_02092a04(c, data_ov001_021912ac, 5) != 0) {
        func_ov001_0217ef50(a, 1, data_ov001_021912b4);
        func_ov001_021788f0(a, 3, 1);
        return 3;
    }
    if (func_ov001_0217ed8c(c, data_ov001_021912e4, buf, 16) == 0) {
        func_ov001_0217ef50(a, 1, data_ov001_021912b4);
        func_ov001_021788f0(a, 3, 1);
        return 3;
    }
    p = func_02093b18(c);
    s.x = b[3];
    s.y = b[4];
    if (s.x != 0) {
        r3 = func_ov000_021653d4(8);
        if (r3 == 0) {
            func_ov001_0217ef6c(a, data_ov001_021912f0);
            return 1;
        }
        r3[1] = (uint32_t)p;
        r3[0] = 0;
        ret = func_ov001_0217894c(a, s, r3, b, 0);
        if (ret != 0) {
            return ret;
        }
    }
    func_ov001_0217b7f4(a, b);
    return 0;
}
