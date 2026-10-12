#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

typedef struct S2 {
    uint8_t pad[0x88];
    void *h;
} S2;

typedef struct S1 {
    S2 *f0;
} S1;

extern S1 *data_020b8e44;
extern Pair data_ov007_021c5ae0;
extern Pair data_ov007_021c5ae8;

extern int func_02075b9c(void *h);
extern void func_02075b24(void *h, void *fn, void *p);
extern void func_02075b0c(void *h, void *fn, void *p);
extern void func_ov007_021ae63c(int x);
extern void *func_02075a6c(void *h);
extern void func_ov001_0218dde0(void *p, int x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0202157c(int a, int b);
extern uint32_t func_020215f0(void);
extern void *func_020215cc(int x);
extern void *func_0203b688(void);
extern void *func_0205681c(int size);
extern void *func_020159c8(void *d, int x);
extern void func_02005988(void *buf, void *node);
extern void *func_02033094(void *a, void *b, int c, int d, int e, int f, int g);
extern void func_020059cc(void *buf);
extern void *func_02032d24(void *a, int b, int c, void *d, int e, int f);
extern void func_ov007_021b0848(void *p);
extern void func_ov007_021b0944(void);
extern void func_ov007_021b0930(void);

void func_ov007_021b01bc(uint8_t *p)
{
    uint32_t a, b;
    void *n, *c, *d, *q, *r, *o;
    uint32_t valsA[2], valsB[2];
    uint32_t bufA[4], bufB[4];
    int doneA, doneB;

    if (*(int *)(p + 0xc8) == 1) {
        if (func_02075b9c(data_020b8e44->f0->h) == 1) {
            func_02075b24(data_020b8e44->f0->h, (void *)func_ov007_021b0944, p);
            func_02075b0c(data_020b8e44->f0->h, (void *)func_ov007_021b0930, p);
            func_ov007_021ae63c(3);
            n = func_02075a6c(data_020b8e44->f0->h);
            func_ov001_0218dde0(p, 0);
            func_02056bc0(p, n);
            a = func_0202157c(0x73, 0);
            b = func_020215f0();
            c = func_020215cc(0x19);
            d = func_0203b688();
            func_02056bc0(d, c);
            func_02056bc0(d, (void *)b);
            func_02056bc0(d, (void *)a);
            func_02056bc0(p + 0x48, d);
            doneA = 0;
            q = func_0205681c(0xa4);
            if (q != 0) {
                valsA[0] = 0x80;
                valsA[1] = 0x60;
                o = func_020159c8(data_020b8e44, 4);
                func_02005988(bufA, o);
                q = func_02033094(q, bufA, 0, valsA[0], valsA[1], 4, 0);
                doneA = 1;
            }
            if (doneA) {
                func_020059cc(bufA);
            }
            func_ov001_0218dde0(p, 3);
            func_02056bc0(p, q);
            *(Pair *)(p + 0xb0) = data_ov007_021c5ae0;
            return;
        }
        doneB = 0;
        r = func_0205681c(0xb0);
        if (r != 0) {
            o = func_020159c8(data_020b8e44, 0x11a);
            func_02005988(bufB, o);
            valsB[0] = 0x80;
            valsB[1] = 0x60;
            r = func_02032d24(r, valsB[0], valsB[1], bufB, 4, 0);
            doneB = 1;
        }
        func_02056bc0(p + 0x14, r);
        if (doneB) {
            func_020059cc(bufB);
        }
        func_ov007_021b0848(p);
    } else {
        *(Pair *)(p + 0xb0) = data_ov007_021c5ae8;
    }
}
