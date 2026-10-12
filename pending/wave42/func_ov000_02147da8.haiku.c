#include "ffc/types.h"

typedef struct Obj {
    uint8_t pad0[8];
    uint8_t type;
    uint8_t flag;
} Obj;

extern uint32_t data_02141510[];
extern uint8_t data_ov000_0216bc60;
extern void func_ov000_02145fe0(uint32_t a, uint32_t b, Obj *o);
extern void func_ov000_02145f70(uint32_t a, uint32_t b, Obj *o);
extern uint32_t func_ov000_0214b818(uint32_t a, uint32_t b, uint32_t c, uint32_t d, Obj *o);
extern uint32_t func_ov000_02147c54(uint32_t a, uint32_t b, uint32_t c, uint32_t d, Obj *o);

uint32_t func_ov000_02147da8(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    uint8_t *base = *(uint8_t **)((uint8_t *)data_02141510 + 4);
    Obj *o = *(Obj **)(base + 0xa4);
    uint32_t r;

    if (o == 0) {
        goto zero;
    }
    if (o->type == 0xa) {
        if (b != 0) {
            func_ov000_02145fe0(a, b, o);
        }
        if (d != 0) {
            func_ov000_02145fe0(c, d, o);
        }
        r = b + d;
    } else if (o->type == 0xb) {
        if (b != 0) {
            func_ov000_02145f70(a, b, o);
        }
        if (d != 0) {
            func_ov000_02145f70(c, d, o);
        }
        r = b + d;
    } else {
        if (o->flag != 0) {
            r = func_ov000_0214b818(a, b, c, d, o);
        } else {
            r = func_ov000_02147c54(a, b, c, d, o);
        }
    }
    if (data_ov000_0216bc60 == 0) {
        return r;
    }
zero:
    return 0;
}
