#include "ffc/types.h"

extern void func_02021338(uint32_t code);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void *func_02033338(void *a, void *b, void *c, uint32_t d);
extern void func_020059cc(void *object);
extern void func_02033420(void *a, void *b, void *c);
typedef struct { uint32_t a, b; } S;
extern uint32_t func_ov008_0219b208(void *self, S s);
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern S data_ov008_021a7cb4;

uint32_t func_ov008_0219b120(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t idx = 0x110;
    uint32_t off;
    uint32_t x18[3];
    uint32_t x12[3];
    uint32_t x0[3];
    void *obj;
    void **vt;
    void *r7;
    void *r6;
    uint32_t r4;
    int flag;

    if (p[idx] == 0) {
        func_02021338(0xc7);
        return 0;
    }

    obj = *(void **)(p + 0xf0);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[11])(obj);

    *(uint32_t *)(p + idx + 4) = 0;

    flag = 0;
    r7 = func_0205681c(0xb8);
    if (r7 != 0) {
        off = 0xcd;
        func_02005988(x18, func_020159c8(data_020b8e44, off));
        off += 0x47;
        flag = 1;
        r7 = func_02033338(r7, x18, p + off, 0);
    }
    if (flag) {
        func_020059cc(x18);
    }

    func_02005988(x12, func_020159c8(data_020b8e44, 0xcb));
    func_02005988(x0, func_020159c8(data_020b8e44, 0xcc));
    func_02033420(r7, x12, x0);
    func_020059cc(x0);
    func_020059cc(x12);

    r4 = func_ov008_0219b208(self, data_ov008_021a7cb4);
    r6 = func_02062a30(*(void **)(p + 0xf0));
    {
    void *q = p + 0x14;
    func_02056bc0(q, r7);
    func_02056bc0(q, r6);
    func_02056bc0(q, (void *)r4);
    }
    return 1;
}
