#include "ffc/types.h"

typedef struct Str {
    uint32_t w0;
    uint32_t w1;
    uint8_t *ptr;
} Str;

extern void func_020095b8(void *dst, void *src);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *dst, void *src);
extern uint32_t func_02030f9c(void *a, void *b, uint32_t c);
extern void func_02005f3c(void *a, uint32_t b, uint32_t c, void *d);
extern void func_020394a4(void *a, void *b);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *o);
extern uint32_t func_02091b10(void *o, uint32_t a, ...);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02033094(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *o, void *n);
extern void func_0201cf34(uint32_t a, void *b);
extern void func_020849c4(void *d, void *s, uint32_t n);
extern uint32_t func_0206c270(uint32_t a);
extern uint32_t func_0206d7f4(uint32_t a, uint32_t b, void *c);
extern uint32_t func_0206d774(uint32_t a);
extern void func_ov013_021c29e0(uint32_t a);
extern uint32_t func_0205f904(void);

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern uint8_t data_ov013_021c4e78;
extern uint8_t data_ov013_021c4e7c;
extern uint8_t data_ov013_021c4e80;
extern uint32_t data_ov013_021c4e70[2];

void func_ov013_021c26a8(uint8_t *a)
{
    uint8_t buf100[0x100];
    uint8_t b68[0x98];
    Str s50;
    Str s5c;
    uint8_t b3c[0x14];
    Str s30;
    uint8_t b24[0xc];
    uint8_t b18[0xc];
    uint32_t pair[2];
    uint32_t tmp;
    uint32_t r4;
    uint32_t r0;
    uint32_t r6;
    uint32_t r7;
    uint32_t x;
    uint32_t y;

    func_020095b8(&s5c, a + 0xe0);
    tmp = func_020159c8(data_020b8e44, 0x1b3);
    func_02005988(&s50, (void *)tmp);
    r6 = 0;
    r4 = func_02030f9c(&s50, &data_ov013_021c4e78, 0);
    r0 = func_02030f9c(&s50, &data_ov013_021c4e7c, 0);
    if (r4 != (uint32_t)-1 && r0 != (uint32_t)-1 && r4 < r0) {
        func_02005f3c(&s50, r4, 2, &data_ov013_021c4e80);
        func_020095b8(&s30, &s5c);
        func_020394a4(b24, &s30);
        func_0200b65c(&s5c, b24);
        func_020059cc(b24);
        func_020059cc(&s30);
    }

    if (s5c.w0 & 1) {
        x = (uint32_t)s5c.ptr;
    } else {
        x = (uint32_t)&s5c + 1;
    }
    if (s50.w0 & 1) {
        y = s50.w1;
    } else {
        y = (uint32_t)&s50 + 1;
    }
    func_02091b10(buf100, y, x);
    func_020059cc(&s50);
    func_020059cc(&s5c);

    r7 = 0;
    r4 = 0;
    r6 = func_0205681c(0xa4);
    if (r6 != 0) {
        pair[0] = 0x80;
        pair[1] = 0x60;
        func_02005988(b18, buf100);
        r6 = func_02033094((void *)r6, b18, 0, 0x80, 0x60, 4, 0);
        r4 = 1;
    }

    func_02056bc0((void *)*(uint32_t *)(a + 0xec), (void *)r6);
    if (r4) {
        func_020059cc(b18);
    }

    func_0201cf34(data_020b93b8, b68);
    func_020849c4(b68, b3c, 0x12);

    r6 = func_0206c270(*(uint32_t *)(a + 0xcc));
    r7 = func_0206d7f4(*(uint32_t *)(a + 0xcc), *(uint32_t *)(a + 0xd4), b3c);
    tmp = func_0206d774(*(uint32_t *)(a + 0xcc));

    func_ov013_021c29e0(*(uint32_t *)(a + 0xc8));
    r0 = func_0205f904();

    func_02056bc0(a + 0x14, (void *)r0);
    func_02056bc0(a + 0x14, (void *)tmp);
    func_02056bc0(a + 0x14, (void *)r7);
    func_02056bc0(a + 0x14, (void *)r6);

    *(uint32_t *)(a + 0xb8) = data_ov013_021c4e70[0];
    *(uint32_t *)(a + 0xbc) = data_ov013_021c4e70[1];
}
