#include "ffc/types.h"

extern void func_0203758c(void *p);
extern void func_0209cf5c(void *arr, int count, int size, void *ctor, void *dtor);
extern void func_02035f58(void *o);
extern void func_02035fd0(void *o);
extern void func_0200a630(void *a, void *b);
extern void func_02051248(void *a, void *b);
extern void func_0200b65c(void *a, void *b);
extern void func_020059cc(void *o);
extern void func_0200a678(void *o);
extern void *func_0205681c(uint32_t size);
extern void *func_ov011_021c9954(void *a, void *b, void *c, void *d, void *e, void *f);
extern void func_ov001_0218dde0(void *p, int x);
extern void func_02056bc0(void *p, void *node);
extern void func_0209d02c(void *arr, int count, int size, void *dtor);
extern uint32_t data_ov001_02194628[];

#define LD32(b, o) (*(uint32_t *)((uint8_t *)(b) + (o)))
#define LD16(b, o) (*(uint16_t *)((uint8_t *)(b) + (o)))

void func_ov001_0218a490(void *pp)
{
    uint8_t *p = (uint8_t *)pp;
    uint8_t B[0x0c];
    uint8_t A[0x0c];
    uint8_t T[0x60];
    uint8_t L[0x200];
    uint8_t *r7;
    uint8_t *b;
    uint8_t *s;
    uint8_t *s2;
    void *node;
    int v, n, idx, i, k, off;

    func_0203758c(p);
    v = ((int (*)(void *))((void **)*(void **)p)[14])(p);
    n = v + 1;
    idx = n % 2;
    r7 = p + 0x104 + idx * 0x2d8;
    for (i = 0; i < 3; i++) {
        LD32(L, i * 4) = 0;
    }
    func_0209cf5c(L + 0xc, 5, 0x60, (void *)func_02035f58, (void *)func_02035fd0);
    for (i = 0; i < 5; i++) {
        func_02035f58(T);
        b = L + 0x60 * i;
        LD32(b, 0x0c) = LD32(T, 0x00);
        LD32(b, 0x14) = LD32(T, 0x08);
        LD32(b, 0x1c) = LD32(T, 0x10);
        LD32(b, 0x24) = LD32(T, 0x18);
        LD32(b, 0x2c) = LD32(T, 0x20);
        LD32(b, 0x34) = LD32(T, 0x28);
        LD32(b, 0x38) = LD32(T, 0x2c);
        for (k = 0; k < 17; k++) {
            LD16(b, 0x3c + 2 * k) = LD16(T, 0x30 + 2 * k);
        }
        LD32(b, 0x60) = LD32(T, 0x54);
        LD32(b, 0x64) = LD32(T, 0x58);
        LD32(b, 0x68) = LD32(T, 0x5c);
        func_02035fd0(T);
    }
    func_0200a630(A, r7 + 8);
    func_02051248(B, A);
    func_0200b65c(L, B);
    func_020059cc(B);
    func_0200a678(A);
    for (i = 0; i < 5; i++) {
        off = 0x60 * i;
        b = L + off;
        s = r7 + off;
        s2 = r7 + 0xf8 + off;
        LD32(b, 0x0c) = LD32(s2, 0);
        LD32(b, 0x14) = LD32(s, 0x100);
        LD32(b, 0x1c) = LD32(s, 0x108);
        LD32(b, 0x24) = LD32(s, 0x110);
        LD32(b, 0x2c) = LD32(s, 0x118);
        LD32(b, 0x34) = LD32(s2, 0x28);
        LD32(b, 0x38) = LD32(s2, 0x2c);
        for (k = 0; k < 17; k++) {
            LD16(b, 0x3c + 2 * k) = LD16(s, 0xc8 + 2 * k);
        }
        LD32(b, 0x60) = LD32(s, 0x14c);
        LD32(b, 0x64) = LD32(s, 0x150);
        LD32(b, 0x68) = LD32(s, 0x154);
    }
    for (i = 0; i < 2; i++) {
        p[i * 0x2d8 + 0x106] = 0;
    }
    node = func_0205681c(0x290);
    if (node != 0) {
        node = func_ov011_021c9954(node, (void *)LD32(p, 0x100), L, (void *)LD32(p, 0x728), 0, 0);
    }
    func_ov001_0218dde0(p, 1);
    func_02056bc0(p, node);
    LD32(p, 0xf4) = data_ov001_02194628[0];
    LD32(p, 0xf8) = data_ov001_02194628[1];
    p = p + 0xf8;
    func_0209d02c(L + 0xc, 5, 0x60, (void *)func_02035fd0);
    func_020059cc(L);
}
