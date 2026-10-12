#include "ffc/types.h"

extern void func_02021338(uint32_t code);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *src, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void *func_02033338(void *obj, void *a, void *b, uint32_t c);
extern void func_020059cc(void *obj);
extern void func_02033420(void *obj, void *a, void *b);
extern void func_02033438(void *obj, uint32_t v);
extern uint32_t func_ov008_0219d07c(void *self, uint32_t a, uint32_t b);
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern uint32_t data_ov008_021a7f78[];

typedef struct { uint32_t a, b, c; } Blk;

uint32_t func_ov008_0219cf90(uint8_t *p)
{
    Blk s2;
    Blk s1;
    Blk s0;
    void *r7;
    uint32_t r4;
    uint32_t r6;

    if (p[0x104] == 0) {
        func_02021338(0xc7);
        return 0;
    }

    {
        void *obj = *(void **)(p + 0x134);
        (*(void (**)(void *))(*(uint8_t **)obj + 0x2c))(obj);
    }

    *(uint32_t *)(p + 0x154) = 0;
    r4 = 0;
    r7 = func_0205681c(0xb8);
    if (r7 != 0) {
        func_02005988(&s2, func_020159c8(data_020b8e44, 0xe0));
        r7 = func_02033338(r7, &s2, p + 0x154, 0);
        r4 = 1;
    }
    if (r4 != 0) {
        func_020059cc(&s2);
    }

    func_02005988(&s1, func_020159c8(data_020b8e44, 0xe1));
    func_02005988(&s0, func_020159c8(data_020b8e44, 0xe2));
    func_02033420(r7, &s1, &s0);
    func_020059cc(&s0);
    func_020059cc(&s1);
    func_02033438(r7, 1);

    r6 = func_ov008_0219d07c(p, data_ov008_021a7f78[0], data_ov008_021a7f78[1]);
    r4 = (uint32_t)func_02062a30(*(void **)(p + 0x134));
    func_02056bc0(p + 0x14, r7);
    func_02056bc0(p + 0x14, (void *)r4);
    func_02056bc0(p + 0x14, (void *)r6);
    return 1;
}
