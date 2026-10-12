#include "ffc/types.h"

typedef struct {
    uint8_t pad0[4];
    void *ptr4;
    uint8_t pad8[4];
    uint32_t cc;
} Obj;

typedef struct {
    void *x;
    uint16_t y;
    uint16_t pad;
    uint32_t z;
} Arg;

extern Obj *func_ov000_02166414(void *a);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d);
extern int32_t func_ov000_0216888c(void *obj, Arg *arg, void *cb, uint32_t zero, uint32_t zero2);
extern void *func_ov000_0216876c(void *p);
extern int32_t func_ov001_021807fc(void *p);
extern uint8_t data_ov000_0216b7fc[];
extern void func_ov000_02166444(void);

int32_t func_ov000_02166b94(void *a, uint16_t b, int32_t *out) {
    Arg s;
    int32_t ret = 0;
    int32_t r;
    Obj *o = func_ov000_02166414(a);
    if (o->cc == 0) {
        func_ov000_021652a8(12, 3, 15, data_ov000_0216b7fc);
        *out = 3;
        return 11;
    }
    s.x = a;
    s.y = b;
    r = func_ov000_0216888c(o->ptr4, &s, func_ov000_02166444, ret, ret);
    if (r == ret - 1) {
        *out = 3;
        return ret;
    }
    *out = func_ov001_021807fc(((void **)func_ov000_0216876c(o->ptr4))[2]);
    return ret;
}
