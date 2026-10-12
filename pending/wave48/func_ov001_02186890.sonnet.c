#include "ffc/types.h"

extern uint8_t *data_ov001_0219575c[];
extern uint8_t data_ov001_0219430c[];

extern int32_t func_ov001_02185e8c(uint32_t a, void *s, int32_t z);
extern uint64_t func_ov001_02185efc(uint32_t a, void *s, int32_t z, int32_t w);
extern int32_t func_ov001_02185e54(uint32_t a, void *s, void *t);
extern uint64_t func_020996c0(uint64_t a, uint64_t b);
extern uint32_t func_02099dd8(uint64_t a);
extern uint32_t func_0209a2e0(uint32_t a, uint32_t b);
extern uint32_t func_0209a33c(uint32_t a, uint32_t b);
extern int32_t func_02092948(int32_t a, int32_t b);
extern int32_t func_0209704c(int32_t a, int32_t b);

int32_t func_ov001_02186890(uint32_t a, uint32_t b)
{
    uint8_t *st = data_ov001_0219575c[1];
    void *s = st + 0x59c;
    int32_t r;

    switch (*(int32_t *)(st + 0x69c)) {
    case 0: {
        int32_t x = func_ov001_02185e8c(a, s, 0);
        int32_t y = func_ov001_02185e8c(b, s, 0);
        r = x - y;
        break;
    }
    case 1: {
        int32_t r4 = 0;
        uint64_t v = func_020996c0(func_ov001_02185efc(a, s, 0, 0),
                                   func_ov001_02185efc(b, s, 0, 0));
        if (*(int32_t *)(data_ov001_0219575c[1] + 0x6a0) == 0) {
            v = func_020996c0(0, v);
        }
        if (func_0209a2e0(func_02099dd8(v), 0)) {
            return 1;
        }
        if (func_0209a33c(func_02099dd8(v), 0) < 0) {
            r4 = 1;
        }
        return -r4;
    }
    case 2: {
        int32_t x = func_ov001_02185e54(a, s, data_ov001_0219430c);
        int32_t y = func_ov001_02185e54(b, s, data_ov001_0219430c);
        r = func_02092948(x, y);
        break;
    }
    case 3: {
        int32_t x = func_ov001_02185e54(a, s, data_ov001_0219430c);
        int32_t y = func_ov001_02185e54(b, s, data_ov001_0219430c);
        r = func_0209704c(x, y);
        break;
    }
    default:
        return 0;
    }

    if (*(int32_t *)(data_ov001_0219575c[1] + 0x6a0) == 0) {
        r = -r;
    }
    return r;
}
