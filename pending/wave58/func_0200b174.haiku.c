#include "ffc/types.h"

extern void func_0200c664(void *p);
extern void *func_020159c8(void *heap, uint32_t n);
extern void func_02005988(void *dst, void *src);
extern void func_020095b8(void *dst, void *src);
extern void func_0200b34c(void *dst, uint32_t idx, void *src);
extern void func_0200b618(void *arr, void *obj, uint32_t v);
extern void *func_020059cc(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *a, void *b, uint32_t c, uint32_t d, void *e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a, b, c; } Obj;
typedef struct { uint32_t flag : 1; } Hdr32;
typedef struct { uint8_t flag : 1; uint8_t len : 7; } Hdr8;

extern void *data_020b8e44;
extern uint32_t data_020aaff4[2];

void func_0200b174(uint8_t *self)
{
    Obj o54, o48, o38;
    Obj o2c, o20, o10;
    Obj ext;
    uint32_t r4;
    uint8_t *src;
    uint32_t cnt, cap, w, f;
    uint32_t len;
    uint8_t z;

    func_0200c664(*(void **)(self + 0x88));

    w = *(uint32_t *)(self + 0x134);
    r4 = 0;
    if (((Hdr32 *)(self + 0x134))->flag == 0) {
        len = ((Hdr8 *)(self + 0x134))->len;
    } else {
        len = *(uint32_t *)(self + 0x138);
    }
    if (len == 0) {
        func_02005988(&o54, func_020159c8(data_020b8e44, 8));
        src = (uint8_t *)&o54;
        r4 = 1;
    } else {
        src = self + 0x134;
    }
    func_020095b8(&o48, src);
    func_0200b34c(&o38, 0, &o48);

    cnt = *(uint32_t *)(self + 0xb8);
    cap = *(uint32_t *)(self + 0xbc);
    if (cnt < cap) {
        uint32_t *e = (uint32_t *)(*(uint8_t **)(self + 0xb4) + cnt * 16);
        if (e != 0) {
            e[0] = o38.a;
            func_020095b8(&e[1], &o38.b);
        }
        *(uint32_t *)(self + 0xb8) = *(uint32_t *)(self + 0xb8) + 1;
    } else {
        z = 0;
        func_0200b618(self + 0xb4, &o38, z);
    }
    func_020059cc(&o38.b);
    func_020059cc(&o48);
    if (r4) {
        func_020059cc(&o54);
    }

    w = *(uint32_t *)(self + 0x140);
    r4 = 0;
    if (((Hdr32 *)(self + 0x140))->flag == 0) {
        len = ((Hdr8 *)(self + 0x140))->len;
    } else {
        len = *(uint32_t *)(self + 0x144);
    }
    if (len == 0) {
        func_02005988(&o2c, func_020159c8(data_020b8e44, 9));
        src = (uint8_t *)&o2c;
        r4 = 1;
    } else {
        src = self + 0x140;
    }
    func_020095b8(&o20, src);
    func_0200b34c(&o10, 1, &o20);

    cnt = *(uint32_t *)(self + 0xb8);
    cap = *(uint32_t *)(self + 0xbc);
    if (cnt < cap) {
        uint32_t *e = (uint32_t *)(*(uint8_t **)(self + 0xb4) + cnt * 16);
        if (e != 0) {
            e[0] = o10.a;
            func_020095b8(&e[1], &o10.b);
        }
        *(uint32_t *)(self + 0xb8) = *(uint32_t *)(self + 0xb8) + 1;
    } else {
        z = 0;
        func_0200b618(self + 0xb4, &o10, z);
    }
    func_020059cc(&o10.b);
    func_020059cc(&o20);
    if (r4) {
        func_020059cc(&o2c);
    }

    {
        void *p = func_0205681c(0x118);
        void *res = 0;
        if (p != 0) {
            res = func_02031624(p, *(void **)(self + 0xa4), *(uint32_t *)(self + 0xac),
                                *(uint32_t *)(self + 0xb0), self + 0xb4,
                                *(uint32_t *)(self + 0x14c), 0);
        }
        func_02056bc0(self + 0x14, res);
    }

    *(uint32_t *)(self + 0x80) = data_020aaff4[0];
    *(uint32_t *)(self + 0x84) = data_020aaff4[1];
}
