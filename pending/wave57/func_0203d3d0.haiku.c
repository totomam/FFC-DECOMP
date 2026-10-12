#include "ffc/types.h"

extern void *func_0203bf90(int);
extern void *func_0203bf7c(int);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void func_0203b0a8(void *a, void *b, void *c, uint32_t d);
extern void *func_ov007_021be084(void *a, void *b, void *c, void *d, int e);
extern void func_0200958c(void *p);
extern void func_02005988(void *a, void *b);
extern void func_ov007_021be130(void *a, void *b);
extern void *func_020059cc(void *object);
extern void *func_0203bf68(int);
extern void *func_0203bf54(int);
extern uint8_t data_020aec4c[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Tri;

void func_0203d3d0(uint8_t *p)
{
    uint32_t state = *(uint32_t *)(p + 0x80);
    *(uint32_t *)(p + 0x80) = *(uint32_t *)(p + 0x80) + 1;

    switch (state) {
    case 0: {
        void *a = func_0203bf90(0x1e);
        void *b = func_0203bf7c(0x1e);
        void *c = func_0203b6fc();
        func_02056bc0(c, b);
        func_02056bc0(c, a);
        func_02056bc0(p + 0x14, c);
        return;
    }
    case 1: {
        Tri t;
        Tri u;
        uint8_t flag = 0;
        void *r6;
        t.a = 0;
        t.b = 0;
        t.c = 0;
        r6 = func_0205681c(0x130);
        if (r6 != 0) {
            func_0203b0a8(p + 0x8c, *(void **)(p + 0x8c), p + 0x8c, flag);
            r6 = func_ov007_021be084(r6, *(void **)(p + 0x84), *(void **)(p + 0x88), &t, 1);
            func_0200958c(&t);
        }
        func_02005988(&u, data_020aec4c);
        func_ov007_021be130(r6, &u);
        func_020059cc(&u);
        func_02056bc0(p + 0x14, r6);
        return;
    }
    case 2: {
        void *a = func_0203bf68(0x1e);
        void *b = func_0203bf54(0x1e);
        void *c = func_0203b6fc();
        func_02056bc0(c, b);
        func_02056bc0(c, a);
        func_02056bc0(p + 0x14, c);
        return;
    }
    case 3:
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        return;
    default:
        return;
    }
}
