#include "ffc/types.h"

typedef struct {
    uint32_t w;
    uint32_t h;
} Sz;

extern void *func_ov001_0218dde0(void *self, int arg);
extern void func_02056c4c(void);
extern void *func_02073b24(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *base, uint32_t off);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *a, Sz sz, void *obj, uint32_t p5, uint32_t p6);
extern void *func_020059cc(void *object);
extern void *func_02033094(void *a, void *b, uint32_t c, Sz sz, uint32_t p1, uint32_t p2);
extern uint32_t func_02056aec(void *obj);
extern void *func_02008ce8(void *a, void *b, uint32_t c, void *d);
extern void *func_ov007_0219b460(void *a, Sz b, uint32_t d);
extern void *data_020b8e44;
extern void *data_020b93b8;
extern Sz data_ov007_021c60e8;

void func_ov007_021b2dac(uint8_t *self)
{
    void *r4;
    void *r6;
    int fa;
    void *r7;
    void *p;
    uint32_t obj;
    void *tmp;
    uint32_t objA[3];
    Sz szA;
    uint32_t objB[3];
    Sz tb;
    void *aec;
    uint32_t z, fb;
    uint8_t *q;

    func_ov001_0218dde0(self, 3);
    func_02056c4c();
    if (*(void **)(self + 0xb8) != 0) {
        r4 = func_02073b24(*(void **)(self + 0xb8));
        func_02056bc0(func_ov001_0218dde0(self, 0), r4);
    }
    if (self[0xb4] == 0 && self[0xb5] == 0) {
        fa = 0;
        r7 = func_0205681c(0xb0);
        if (r7 != 0) {
            tmp = func_020159c8(data_020b8e44, 0x144);
            func_02005988(objA, tmp);
            szA.w = 0x80;
            szA.h = 0x60;
            fa = 1;
            r7 = func_02032d24(r7, szA, objA, 4, 0);
        }
        func_02056bc0(self + 0x14, r7);
        if (fa != 0) {
            func_020059cc(objA);
        }
    } else if (self[0xb4] != 0) {
        z = 0;
        fb = 0;
        r4 = func_0205681c(0xa4);
        if (r4 != 0) {
            tb.w = 0x80;
            tb.h = 0x60;
            tmp = func_020159c8(data_020b8e44, 0x36);
            func_02005988(objB, tmp);
            fb = 1;
            r4 = func_02033094(r4, objB, z, tb, 4, z);
        }
        if (fb != 0) {
            func_020059cc(objB);
        }
        func_02056bc0(self + 0x48, r4);
        aec = (void *)func_02056aec(r4);
        fb = (uint32_t)func_0205681c(0x94);
        if (fb != 0) {
            fb = (uint32_t)func_02008ce8((void *)fb, r4, 0, *(void **)(self + 0x98));
        }
        z = (uint32_t)func_ov007_0219b460(data_020b93b8, data_ov007_021c60e8, 1);
        p = func_0205681c(0x94);
        if (p != 0) {
            p = func_02008ce8(p, r4, 0, *(void **)(self + 0x98));
        }
        q = self + 0x14;
        func_02056bc0(q, p);
        func_02056bc0(q, (void *)z);
        func_02056bc0(q, (void *)fb);
        func_02056bc0(q, aec);
    }
    func_02056bc0(self + 0x14, (void *)func_02056aec(self));
}
