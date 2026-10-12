#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
typedef struct { uint32_t a; uint32_t b; } Pos;
extern void *func_02031624(void *obj, void *p, Pos pos, uint32_t a, uint32_t b, uint32_t c);
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02036994(void *obj, uint32_t idx);
extern void *func_020159c8(void *src, uint32_t id);
extern void func_02005988(void *buf, void *src);
extern void func_02031754(void *obj, int32_t id, void *buf);
extern void *func_020059cc(void *buf);
extern void *func_ov011_021c02a8(void *obj, Pos pr);
extern uint32_t data_ov011_021caf30[];
extern uint32_t data_ov011_021cad8c[];
extern uint32_t data_ov011_021caf34[];
extern uint32_t data_ov011_021caf68[];
extern void *data_020b8e44;
extern uint32_t data_ov011_021cb164[];
extern uint32_t data_ov011_021cb16c[];

void func_ov011_021c1468(uint8_t *a0, uint32_t a1) {
    Pos pos;
    Pos *d;
    void *r6;
    uint32_t *r4;
    void *v10;
    void *r1;
    uint32_t b4c[3], b40[3], b34[3], b28[3], b1c[3];
    void *obj;
    uint8_t *q;

    *(uint32_t *)(a0 + 0x2bc) = 0;
    obj = *(void **)(a0 + 0x17c);
    ((void (*)(void *))((*(void ***)obj)[11]))(obj);

    {
        uint32_t off = a1 << 3;
        uint32_t t0 = *(uint32_t *)((uint8_t *)data_ov011_021caf30 + off);
        pos.a = t0 + *(uint32_t *)((uint8_t *)data_ov011_021cad8c + 0x3c);
        uint32_t t1 = *(uint32_t *)((uint8_t *)data_ov011_021caf34 + off);
        pos.b = t1 + *(uint32_t *)((uint8_t *)data_ov011_021cad8c + 0x40);
    }
    if (a1 == 4) {
        pos.a -= 0x10;
    }

    r6 = func_0205681c(0x118);
    if (r6 != 0) {
        r6 = func_02031624(r6, a0 + 0x2bc, pos, 0, 0, 0);
    }

    v10 = func_02062a30(*(void **)(a0 + 0x17c));

    r4 = (uint32_t *)func_0205681c(0x14);
    if (r4 != 0) {
        r4[3] &= ~0xffu;
        r4[0] = (uint32_t)data_ov011_021caf68;
    }

    q = a0;
    q = a0 + 0x14;
    func_02056bc0(q, r6);
    func_02056bc0(q, r4);
    func_02056bc0(q, v10);

    if (func_02036994(a0 + 0x220, a1) != 0) {
        func_02005988(b4c, func_020159c8(data_020b8e44, 0xaa));
        func_02031754(r6, 0xb, b4c);
        func_020059cc(b4c);

        func_02005988(b40, func_020159c8(data_020b8e44, 0xab));
        func_02031754(r6, 0xc, b40);
        func_020059cc(b40);

        func_02005988(b34, func_020159c8(data_020b8e44, 0xac));
        func_02031754(r6, 0xe, b34);
        func_020059cc(b34);

        r1 = func_ov011_021c02a8(a0, *(Pos *)data_ov011_021cb164);
    } else {
        func_02005988(b28, func_020159c8(data_020b8e44, 0xa9));
        func_02031754(r6, 0xb, b28);
        func_020059cc(b28);

        r1 = func_ov011_021c02a8(a0, *(Pos *)data_ov011_021cb16c);
    }

    func_02056bc0(a0 + 0x14, r1);

    func_02005988(b1c, func_020159c8(data_020b8e44, 0xb0));
    func_02031754(r6, -2, b1c);
    func_020059cc(b1c);
}
