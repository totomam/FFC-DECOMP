#include "ffc/types.h"

extern void func_02021338(uint32_t code);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t idx);
extern void func_02005988(void *dst, void *src);
extern void *func_02033338(void *a, void *b, void *c, uint32_t d);
extern void func_020059cc(void *object);
extern void func_02033420(void *a, void *b, void *c);
typedef struct { uint32_t a, b; } S2;
extern uint32_t func_ov008_02199fa4(void *self, S2 s);
extern S2 data_ov008_021a7a4c;
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;

uint32_t func_ov008_02199ebc(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint32_t off = 0x142;
    uint32_t buf1[3];
    uint32_t buf2[3];
    uint32_t buf3[3];
    void *r7;
    void *r6;
    uint32_t r4;
    uint32_t fl;

    if (p[off] == 0) {
        func_02021338(0xc7);
        return 0;
    }

    {
        void **obj = *(void ***)(p + 0xe8);
        ((void (*)(void *))((void **)*obj)[11])(obj);
    }

    *(uint32_t *)(p + off + 6) = 0;

    fl = 0;
    r7 = func_0205681c(0xb8);
    {
    if (r7 != 0) {
        func_02005988(buf1, func_020159c8(data_020b8e44, 0xcf));
        fl = 1;
        r7 = func_02033338(r7, buf1, p + 0x148, 0);
    }
    if (fl) func_020059cc(buf1);
    }

    func_02005988(buf2, func_020159c8(data_020b8e44, 0xcb));
    func_02005988(buf3, func_020159c8(data_020b8e44, 0xcc));
    func_02033420(r7, buf2, buf3);
    func_020059cc(buf3);
    func_020059cc(buf2);

    r4 = func_ov008_02199fa4(p0, data_ov008_021a7a4c);
    r6 = func_02062a30(*(void **)(p + 0xe8));
    {
    uint8_t *q = p + 0x14;
    func_02056bc0(q, r7);
    func_02056bc0(q, r6);
    func_02056bc0(q, (void *)r4);
    }
    return 1;
}
