#include "ffc/types.h"

extern uint32_t func_ov002_02195fa4(uint32_t);
extern uint32_t func_ov002_021c8ff0(uint32_t);
extern uint32_t func_ov002_02198700(uint32_t, uint32_t);
extern void func_ov002_021c900c(uint8_t *, uint32_t, uint32_t);
extern uint32_t func_ov002_021c9134(uint8_t *);
extern void func_ov002_021c9130(uint8_t *);
extern uint32_t func_ov002_021c9004(uint32_t);
extern uint32_t func_ov002_021c8ff8(uint32_t);
extern uint32_t func_ov002_021c8ff4(uint32_t);
extern int32_t func_ov002_021aa820(uint32_t);
extern uint32_t func_ov002_021c9000(uint32_t);
extern uint32_t func_ov002_021994c0(uint32_t, uint32_t);

uint32_t func_ov002_021a8f94(uint8_t *self, uint32_t a, uint32_t b)
{
    uint8_t buf[8];
    uint32_t x, y, z;
    int32_t q;

    x = func_ov002_02195fa4(*(uint32_t *)(self + 0xf4));
    y = func_ov002_021c8ff0(b);
    z = func_ov002_02198700(x, y);
    func_ov002_021c900c(buf, b, a);
    if (func_ov002_021c9134(buf) == 0) {
        func_ov002_021c9130(buf);
        return 0;
    }
    if (func_ov002_021c9004(b) != 0) {
        func_ov002_021c9130(buf);
        return 0;
    }
    if (func_ov002_021c8ff8(b) != 6) {
        if (func_ov002_021c8ff4(b) == 0) {
            func_ov002_021c9130(buf);
            return 0;
        }
    }
    q = func_ov002_021c8ff4(b);
    if (q >= func_ov002_021aa820(z)) {
        func_ov002_021c9130(buf);
        return 0;
    }
    if (func_ov002_021c8ff8(b) != 1 && func_ov002_021c8ff8(b) != 2 &&
        func_ov002_021c8ff8(b) != 7 && func_ov002_021c8ff8(b) != 6) {
        func_ov002_021c9130(buf);
        return 0;
    }
    if (func_ov002_021c9000(b) == 1) {
        func_ov002_021c9130(buf);
        return 0;
    }
    if (func_ov002_021994c0(*(uint32_t *)(self + 0xfc), 4) != 0) {
        func_ov002_021c9130(buf);
        return 1;
    }
    if (func_ov002_021c9134(buf) != 0) {
        func_ov002_021c9130(buf);
        return 1;
    }
    func_ov002_021c9130(buf);
    return 0;
}
