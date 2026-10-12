#include "ffc/types.h"

typedef struct Obj Obj;
struct Obj { void **vt; };

typedef struct Buf98 {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint8_t wc;
} Buf98;

extern void func_02016a54(Buf98 *p, uint32_t v);
extern uint32_t func_0203b6fc(void);
extern void *func_0204f7ec(const void *object);
extern void *func_0204f7d4(const void *object);
extern void *func_0203b688(void);
extern void func_02005988(void *dst, const void *src);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_02053370(void *dst, const void *a, const void *b);
extern void func_0205d508(void *dst, const void *src, uint32_t n);
extern void *func_0203bcb4(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_0205d620(void *p);
extern void func_020059cc(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02062a30(void *owner);
extern void *func_0203b720(void);
extern void *func_020606f0(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void *func_02062a08(void *owner, uint32_t v);
extern void *func_ov003_02153470(void *p);
extern void func_ov003_02152f7c(uint32_t a, uint32_t b);
extern void func_ov003_02152674(uint32_t a, uint32_t b);
extern void func_ov003_0214a244(uint8_t *self, uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;
extern void *data_0213df18;
extern uint8_t data_ov003_0217984c[];

void func_ov003_0214a280(uint8_t *a0, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7,
                         uint32_t a8, uint32_t a9)
{
    Buf98 b98;
    uint32_t o8c[3];
    uint32_t o80[3];
    uint32_t o48[14];
    uint32_t arr[2];
    uint32_t *pa = (uint32_t *)&a6;
    void *sp28;
    void *sp30;
    uint32_t i;
    uint32_t r7;
    uint32_t sp18;
    uint32_t off;
    void *tmp14;
    uint8_t *r4;
    void *r6;

    func_02016a54(&b98, data_020b8e44);
    sp28 = (void *)func_0203b6fc();
    arr[0] = a4;
    arr[1] = a5;

    for (i = 0; i < 2; i++) {
        r7 = (i == 1);
        if (a1 != 0 && a1 != i + 1) {
            continue;
        }
        sp18 = r7 ? a3 : a2;
        if (r7) {
            tmp14 = func_0204f7ec(data_0213df18);
        } else {
            tmp14 = func_0204f7d4(data_0213df18);
        }
        off = r7 ? 0x1b8 : 0x1bc;
        r4 = a0 + off;
        r6 = func_0203b688();
        func_02005988(o8c, data_ov003_0217984c);
        {
            uint8_t *base = (uint8_t *)func_02052d90((const void *)b98.w4, b98.w8);
            uint32_t offs = *(uint32_t *)(base + 0xc);
            uint32_t v1 = *(uint32_t *)(base + offs + arr[i] * 4);
            uint8_t *q = base + v1;
            uint32_t v2 = *(uint32_t *)(base + v1);
            func_02053370(o80, o8c, q + v2);
        }
        func_0205d508(o48, o80, 0);
        *(void **)r4 = func_0203bcb4(tmp14, o48, 1, 0, 0);
        func_0205d620(o48);
        func_020059cc(o80);
        func_020059cc(o8c);
        {
            Obj *o = *(Obj **)r4;
            ((void (*)(Obj *, uint32_t, uint32_t))o->vt[3])(o, pa[0], pa[1]);
        }
        {
            Obj *o = *(Obj **)r4;
            ((void (*)(Obj *, uint32_t))o->vt[8])(o, 0);
        }
        func_02056bc0(a0 + 0x48, *(void **)r4);
        sp30 = func_02062a30(*(void **)r4);
        func_02056bc0(r6, func_0203b720());
        func_02056bc0(r6, sp30);
        if (a8 != 0) {
            void *s20 = *(void **)((uint8_t *)tmp14 + 0x20);
            Obj *o = *(Obj **)r4;
            void *res = ((void *(*)(Obj *))o->vt[13])(o);
            func_02056bc0(r6, func_020606f0(s20, res, a8 << 1, a9, 0));
        }
        func_02056bc0(r6, func_02062a08(*(void **)r4, 1));
        if (r7 == 0 && sp18 == 0) {
            void *p1 = func_ov003_02153470(*(void **)(a0 + 0x9c));
            func_ov003_02152f7c(*(uint32_t *)(a0 + 0x180), *(uint32_t *)p1);
            void *p2 = func_ov003_02153470(*(void **)(a0 + 0x9c));
            func_ov003_02152674(*(uint32_t *)(a0 + 0x184), *(uint32_t *)p2);
        }
        func_ov003_0214a244(a0, a1, sp18, r6, r7, 0);
        func_02056bc0(sp28, r6);
    }

    func_02056bc0(*(void **)(a0 + 0x1b4), sp28);
    if (b98.w4 != 0) {
        if (b98.wc != 0) {
            func_02052d3c(b98.w4, b98.w8);
        }
        func_02052c04(b98.w4);
    }
    func_02053290(&b98);
}
