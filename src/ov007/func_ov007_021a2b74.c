#include "ffc/types.h"

typedef struct {
    uint32_t flag:1;
    uint32_t len;
    uint32_t ptr;
} Str;
typedef struct { uint32_t x, y; } Pt;

typedef uint32_t (*VFn)(void *);

extern void *data_0213df20;
extern void *data_ov007_021c9708;
extern void *data_020b8e44;
extern char data_ov007_021c4158[];
extern char data_ov007_021c415c[];
extern char data_ov007_021c4160[];
extern void *data_020b93b8;
extern uint32_t data_ov007_021c4150[];

extern void func_0206047c(void *obj);
extern void func_02060548(void *obj, uint32_t v);
extern void func_02060574(void *obj, uint32_t v);
extern void func_02060584(void *obj, uint32_t v);
extern void func_02060564(void *obj, uint32_t a, uint32_t b);
extern void func_020095b8(void *dst, void *src);
extern void *func_020159c8(void *obj, uint32_t idx);
extern void func_02005988(void *dst, void *src);
extern uint32_t func_02030f9c(void *first, void *second, uint32_t third);
extern void func_02005f3c(void *a, uint32_t b, uint32_t c, void *d);
extern void func_020394a4(void *a, void *b);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void *func_02033094(void *a, void *b, uint32_t c, Pt d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void func_0201cf34(void *a, void *b);
extern void func_020849c4(void *a, void *b, uint32_t c);
extern void *func_0206d7f4(void *a, void *b, void *c);
extern void *func_0206d774(void *a);
extern void *func_02060634(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_ov007_021a2b74(uint8_t *p)
{
    uint8_t b100[0x100];
    uint8_t s68[0x98];
    Str s5c;
    Str s50;
    struct { uint32_t v38; uint8_t v3c[0x14]; } vv;
    Str s2c;
    Str s20;
    Str s14;
    uint32_t a1, a2;
    uint32_t r4, r0v;
    void *obj;
    void *r6;
    void *r7;
    VFn *vt;
    Pt pt;
    uint8_t *q;

    func_0206047c(*(void **)((uint8_t *)data_0213df20 + 0x20));
    func_02060548(*(void **)((uint8_t *)data_0213df20 + 0x20), 3);
    r6 = *(void **)((uint8_t *)data_0213df20 + 0x20);
    obj = data_ov007_021c9708;
    vt = *(VFn **)obj;
    r0v = vt[13](obj);
    func_02060574(r6, 0x10 | r0v);
    func_02060584(*(void **)((uint8_t *)data_0213df20 + 0x20), 0x3f);
    func_02060564(*(void **)((uint8_t *)data_0213df20 + 0x20), 0x10, 0);

    func_020095b8(&s5c, p + 0xe0);
    func_02005988(&s50, func_020159c8(data_020b8e44, 0x23));

    r4 = func_02030f9c(&s50, data_ov007_021c4158, 0);
    r0v = func_02030f9c(&s50, data_ov007_021c415c, 0);
    if (r4 != 0xffffffffu && r0v != 0xffffffffu && r4 < r0v) {
        func_02005f3c(&s50, r4, 2, data_ov007_021c4160);
        func_020095b8(&s2c, &s5c);
        func_020394a4(&s20, &s2c);
        func_0200b65c(&s5c, &s20);
        func_020059cc(&s20);
        func_020059cc(&s2c);
    }

    a2 = !s5c.flag ? (uint32_t)((uint8_t *)&s5c + 1) : s5c.ptr;
    a1 = !s50.flag ? (uint32_t)((uint8_t *)&s50 + 1) : s50.ptr;
    func_02091b10(b100, a1, a2);
    func_020059cc(&s50);
    func_020059cc(&s5c);

    r7 = 0;
    r4 = 0;
    if ((r6 = func_0205681c(0xa4)) != 0) {
        pt.x = 0x80; pt.y = 0x60;
        func_02005988(&s14, b100);
        r4 = 1;
        r6 = func_02033094(r6, &s14, 0, pt, 4, 1);
    }
    func_02056bc0(*(void **)(p + 0xec), r6);
    if (r4 != 0) {
        func_020059cc(&s14);
    }

    func_0201cf34(data_020b93b8, s68);
    vv.v38 = 1;
    func_020849c4(s68, vv.v3c, 0x12);
    r6 = func_0206d7f4(*(void **)(p + 0xcc), *(void **)(p + 0xd4), &vv.v38);
    r7 = func_0206d774(*(void **)(p + 0xcc));
    obj = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 0, 8, 0xa, 0, 0);
    q = p + 0x14;
    func_02056bc0(q, obj);
    func_02056bc0(q, r7);
    func_02056bc0(q, r6);

    *(Pt *)(p + 0xb8) = *(Pt *)data_ov007_021c4150;
}
