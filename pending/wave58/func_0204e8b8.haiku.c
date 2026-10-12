#include "ffc/types.h"

typedef struct { void *p; uint8_t f; } Guard;
typedef struct { uint32_t a; uint32_t b[8]; } Blob;
typedef struct Obj Obj;

extern uint8_t data_0213df10[];
extern uint8_t data_0209ed3c[];
extern uint8_t data_0209ed40[];
extern uint8_t data_0209e658[];
extern uint8_t data_0209e678[];

extern void func_0208763c(void *p);
extern void func_02060bf4(uint32_t h);
extern void func_0206047c(uint32_t h);
extern void func_0204f6b0(uint32_t h, void *dst, void *src);
extern void func_02088f30(void);
extern void *func_0205681c(uint32_t size);
extern void *func_0205ffd8(void *q, uint8_t *a, void *x, void *y, uint32_t z, uint32_t w, uint32_t v, uint32_t u);
extern void *func_0205908c(void *obj, uint8_t *a, void *x, uint32_t y, uint32_t z, Blob blob, uint32_t p, uint32_t q);
extern void func_02087678(void *p);

void func_0204e8b8(uint8_t *a, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6)
{
    Guard g;
    uint8_t *b;
    Blob blob;
    uint8_t *src;
    uint32_t i, k, w, r4v, r6v;
    void *m;

    g.p = (void *)(*(uint8_t **)(data_0213df10 + 8) + 0x7c);
    g.f = 1;
    if (g.f != 0) {
        func_0208763c(g.p);
    }
    func_02060bf4(*(uint32_t *)(a + 0x1c));
    func_0206047c(*(uint32_t *)(a + 0x20));

    b = *(uint8_t **)(a + 8);
    func_0204f6b0(*(uint32_t *)(a + 4), *(uint8_t **)(b + 0x54) + p3 * 0x1c, a + 0x50);
    func_0204f6b0(*(uint32_t *)(a + 4), *(uint8_t **)(b + 0x4c) + p1 * 0x1c, a + 0x28);
    func_0204f6b0(*(uint32_t *)(a + 4), *(uint8_t **)(b + 0x5c) + p5 * 0x1c, a + 0x78);
    func_0204f6b0(*(uint32_t *)(a + 4), *(uint8_t **)(b + 0x60) + p6 * 0x1c, a + 0x8c);
    func_0204f6b0(*(uint32_t *)(a + 4), *(uint8_t **)(b + 0x50) + p2 * 0x1c, a + 0x3c);
    func_0204f6b0(*(uint32_t *)(a + 4), *(uint8_t **)(b + 0x58) + p4 * 0x1c, a + 0x64);

    w = *(uint32_t *)(a + 0xc);
    w = (w & 0xbfffffff) | ((p2 != 0) << 30);
    *(uint32_t *)(a + 0xc) = w;
    w = (w & 0x7fffffff) | ((p4 != 0) << 31);
    *(uint32_t *)(a + 0xc) = w;

    if (p2 != 0) {
        for (i = 0; i < 5; i++) {
            uint32_t *e = (uint32_t *)(data_0209ed3c + i * 0x24);
            if (p2 == e[0] && *(uint32_t *)(a + 0x40) == e[1]) {
                break;
            }
        }
        blob.a = *(uint32_t *)(data_0209ed3c + i * 0x24);
        src = data_0209ed40 + i * 0x24;
    } else {
        blob.a = *(uint32_t *)(data_0209e658 + 0x1c);
        src = data_0209e678;
    }
    for (k = 0; k < 8; k++) {
        blob.b[k] = ((uint32_t *)src)[k];
    }

    r4v = 0;
    r6v = 0;
    if (p4 != 0) {
        switch (*(uint32_t *)(a + 0x68)) {
        case 6:
            r4v = 0x6890000;
            break;
        case 7:
            r4v = 0x6894000;
            break;
        case 9:
            r4v = 0x68a0000;
            break;
        default:
            func_02088f30();
            break;
        }
        r6v = *(uint32_t *)(a + 0x68);
    }

    if (p3 != 0) {
        m = func_0205681c(0x28);
        if (m != 0) {
            m = func_0205ffd8(m, a, *(void **)(b + 0x48), *(void **)(b + 0x44),
                              *(uint32_t *)(a + 0x50), *(uint32_t *)(b + 0x3c), r4v, r6v);
        }
        *(void **)(a + 0x18) = m;
    }

    if (p1 != 0) {
        m = func_0205681c(0x58);
        if (m != 0) {
            b = *(uint8_t **)(a + 8);
            m = func_0205908c(m, a, *(void **)(b + 0x40), *(uint32_t *)(a + 0x28),
                              *(uint32_t *)(b + 0x38), blob,
                              *(uint32_t *)(a + 0x78), *(uint32_t *)(a + 0x8c));
        }
        *(void **)(a + 0x14) = m;
    }

    {
        Obj **it = *(Obj ***)(a + 0xa8);
        while (it != *(Obj ***)(a + 0xa8) + *(uint32_t *)(a + 0xac)) {
            void **vt = *(void ***)(*it);
            ((void (*)(void *))vt[2])(*it);
            it++;
        }
    }

    if (g.f != 0) {
        func_02087678(g.p);
    }
}
