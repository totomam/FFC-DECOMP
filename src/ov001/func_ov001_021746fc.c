#include "ffc/types.h"

extern void func_ov001_02171e6c(void *p, uint32_t a, uint32_t b);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d);
extern int32_t func_ov000_02165588(uint32_t x);
extern int32_t func_ov000_02165864(uint32_t x, void *p);
extern uint8_t data_ov001_0218fe64[];
extern uint8_t data_ov001_0218fe74[];
extern uint32_t data_ov001_02194be4;

#define F(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

void func_ov001_021746fc(void *s)
{
    uint32_t r4;
    int32_t h;

    if (F(s, 0x1cc) != 0) {
        F(s, 0x10) = 2;
        func_ov001_02171e6c(s, 0, 0);
        return;
    }

    func_ov000_021652a8(8, 3, 0x10, data_ov001_0218fe64);
    r4 = F(s, 0x18c);
    if (r4 == 0) {
        r4 = data_ov001_02194be4;
        if (r4 == 0) {
            r4 = F(s, 0x18);
        }
    }

    h = func_ov000_02165588(r4);
    F(s, 0x1c) = h;
    if (h == -1) {
        if (func_ov000_02165864(r4, (uint8_t *)s + 0x1cc) == -1) {
            func_ov000_021652a8(8, 3, 1, data_ov001_0218fe74);
            F(s, 0x1cc) = 0;
            F(s, 0x124) = 1;
            F(s, 0x40) = 4;
            return;
        }
    }

    if (F(s, 0x1c) == (uint32_t)-1) {
        F(s, 0x10) = 2;
        func_ov001_02171e6c(s, 0, 0);
    } else {
        F(s, 0x10) = 3;
        func_ov001_02171e6c(s, 0, 0);
    }
}
