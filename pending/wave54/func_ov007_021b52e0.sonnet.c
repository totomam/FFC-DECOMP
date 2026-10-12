#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t a:1; uint32_t a2:31; uint32_t b; uint32_t c; } Blk;

extern void *func_ov001_0218dde0(void *obj, uint32_t v);
extern void func_02056c4c(void);
extern void func_0200a630(void *dst, void *src);
extern void func_02051248(void *dst, void *src);
extern void *func_0200a678(void *object);
extern void *func_020159c8(void *obj, uint32_t n);
extern void func_02005988(void *dst, const void *src);
extern uint32_t func_02030f9c(void *first, void *second, uint32_t third);
extern void func_02005f3c(void *a, uint32_t b, uint32_t c, void *d);
extern void func_020095b8(void *a, void *b);
extern void func_020394a4(void *a, void *b);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_02091b10(void *object, void *first, uint32_t second);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02032d24(void *obj, Pair sz, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern uint8_t data_ov007_021c6998[];
extern uint8_t data_ov007_021c699c[];
extern uint8_t data_ov007_021c69a0[];
extern Pair data_ov007_021c6988;
extern Pair data_ov007_021c6990;

void func_ov007_021b52e0(uint8_t *self)
{
    Blk s4c;
    Blk s40;
    Blk s34;
    Blk s28;
    Blk s1c;
    Blk s10;
    Pair s8;
    uint32_t n, m;
    uint32_t r4;
    uint32_t k;
    void *p;
    uint32_t a1, a2;

    func_ov001_0218dde0(self, 3);
    func_02056c4c();
    if (self[0x564] == 0) {
    func_0200a630(&s34, self + 0xec);
    func_02051248(&s4c, &s34);
    func_0200a678(&s34);
    func_02005988(&s40, func_020159c8(data_020b8e44, 0x149));
    n = func_02030f9c(&s40, data_ov007_021c6998, 0);
    m = func_02030f9c(&s40, data_ov007_021c699c, 0);
    if (n != (uint32_t)-1 && m != (uint32_t)-1 && n < m) {
        func_02005f3c(&s40, n, 2, data_ov007_021c69a0);
        func_020095b8(&s28, &s4c);
        func_020394a4(&s1c, &s28);
        func_0200b65c(&s4c, &s1c);
        func_020059cc(&s1c);
        func_020059cc(&s28);
    }
    if (s4c.a == 0) {
        a2 = (uint32_t)((uint8_t *)&s4c + 1);
    } else {
        a2 = s4c.c;
    }
    if (s40.a == 0) {
        a1 = (uint32_t)((uint8_t *)&s40 + 1);
    } else {
        a1 = s40.c;
    }
    k = 0x566;
    func_02091b10(self + k, (void *)a1, a2);
    func_020059cc(&s40);
    func_020059cc(&s4c);

    if (self[k - 1] == 0) {
        r4 = 0;
        p = func_0205681c(0xb0);
        if (p != 0) {
            func_02005988(&s10, self + k);
            s8.a = 0x80; s8.b = 0x60;
            r4 = 1;
            p = (void *)(uintptr_t)func_02032d24(p, s8, &s10, 4, 0);
        }
        func_02056bc0(func_ov001_0218dde0(self, 1), p);
        if (r4 != 0) {
            func_020059cc(&s10);
        }
    }
    *(Pair *)(self + 0xb0) = data_ov007_021c6988;
    } else {
        *(Pair *)(self + 0xb0) = data_ov007_021c6990;
    }
}
