#include "ffc/types.h"

extern void func_02019588(void *obj, uint32_t v);
extern void *func_0201a23c(void *obj);
extern uint32_t func_0201a39c(uint32_t v);
extern void *func_020059cc(void *object);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern uint8_t *func_0201a244(uint8_t *obj, uint32_t idx);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t w0;
    uint8_t *p4;
    uint32_t w8;
    uint8_t b12;
    uint8_t rest[8];
} Obj;

static void cleanup(Obj *o, void *tmp) {
    (void)tmp;
}

uint32_t func_02028b34(uint32_t a, uint32_t b) {
    uint32_t tmp[4];
    Obj o;
    uint8_t *p;
    uint32_t n;
    uint32_t idx;

    func_02019588(&o, data_020b8e44);
    n = func_0201a39c(*(uint32_t *)func_0201a23c(&o));
    if (a >= n) {
        func_020059cc(tmp);
        if (o.p4 != 0) {
            if (o.b12 != 0) {
                func_02052d3c((uint32_t)o.p4, o.w8);
            }
            func_02052c04((uint32_t)o.p4);
        }
        func_02053290(&o);
        return 0;
    }
    p = func_0201a244(*(uint8_t **)func_0201a23c(&o), a);
    idx = *(uint32_t *)(p + *(uint32_t *)(p + 8) + (b << 2));
    if (p[idx] != 0) {
        func_020059cc(tmp);
        if (o.p4 != 0) {
            if (o.b12 != 0) {
                func_02052d3c((uint32_t)o.p4, o.w8);
            }
            func_02052c04((uint32_t)o.p4);
        }
        func_02053290(&o);
        return 1;
    }
    func_020059cc(tmp);
    if (o.p4 != 0) {
        if (o.b12 != 0) {
            func_02052d3c((uint32_t)o.p4, o.w8);
        }
        func_02052c04((uint32_t)o.p4);
    }
    func_02053290(&o);
    return 0;
}
