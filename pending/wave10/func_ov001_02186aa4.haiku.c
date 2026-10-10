#include "ffc/types.h"

typedef struct Outer {
    uint32_t w0;
    uint8_t *base;
} Outer;

extern int32_t func_ov001_02185e54(uint32_t a, uint32_t b, uint8_t *c);
extern int32_t func_02092948(int32_t a, int32_t b);
extern int32_t func_ov001_02186890(uint32_t a, uint32_t b);
extern Outer data_ov001_0219575c;
extern uint8_t data_ov001_0219430c[];

int32_t func_ov001_02186aa4(uint32_t *p0, uint32_t *p1) {
    uint32_t a = *p0;
    uint32_t b = *p1;
    uint8_t *base = data_ov001_0219575c.base;
    int32_t r = func_ov001_02185e54(a, (uint32_t)(base + 0x498), data_ov001_0219430c);
    int32_t s = func_ov001_02185e54(b, (uint32_t)(base + 0x498), data_ov001_0219430c);
    if (func_02092948(r, s) == 0) {
        return func_ov001_02186890(a, b);
    }
    if (*(uint32_t *)(data_ov001_0219575c.base + 0x6a0) == 0) {
        r = -r;
    }
    return r;
}
