#include "ffc/types.h"

typedef struct { uint32_t w[3]; } Tri;
typedef struct { uint32_t w[2]; } Pair;
typedef struct { uint32_t w[4]; } Quad;

extern void func_02005988(void *dst, void *src);
extern void func_02009678(void *dst, void *src);
extern void func_020095b8(void *dst, void *src);
extern void func_0206139c(void *dst, uint32_t a, void *b, uint32_t c, uint32_t d);
extern void *func_020059cc(void *o);
extern void func_02065f90(void *o, void *a, uint32_t b, uint32_t c, uint32_t d, void *e);
extern uint32_t func_02062884(void *o);
extern uint32_t data_020aad64;
extern uint32_t data_0209de24;
extern uint32_t data_0209de1c;

void func_020091a4(uint8_t *p) {
    Tri s94;
    Tri s88;
    Quad s78;
    Tri s6c;
    Tri s60;
    Quad s50;
    Quad s40;
    Pair s38;
    uint32_t z30[2];
    Pair s28;
    Pair s20;
    Pair s18;
    uint32_t z10[2];
    void **vt;
    void *obj;
    uint32_t t;

    func_02005988(&s94, &data_020aad64);
    if (*(uint32_t *)(p + 0xb4) != 0) {
        func_02009678(&s94, (void *)(*(uint32_t *)(p + 0xb0) + *(uint32_t *)(p + 0xc0) * 12));
    }
    func_020095b8(&s88, &s94);
    func_0206139c(&s38, *(uint32_t *)(p + 0x8c), &s88, 0, 0);
    func_020059cc(&s88);
    s38.w[1] = 0x10;
    *(uint32_t *)(p + 0xc4) = s38.w[0];
    obj = *(void **)(p + 0x88);
    vt = *(void ***)obj;
    ((void (*)(void *, void *))vt[6])(&s28, obj);
    s78.w[0] = 0;
    s78.w[1] = 0;
    s78.w[2] = s28.w[0];
    s78.w[3] = s28.w[1];
    obj = *(void **)(p + 0x88);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))vt[17])(
        obj, 0, 0, s28.w[0], s28.w[1], data_0209de24, 0);
    func_020095b8(&s6c, &s94);
    obj = *(void **)(p + 0x88);
    s20.w[0] = 0;
    s20.w[1] = 2;
    func_02065f90(obj, *(void **)(p + 0x8c), s20.w[0], s20.w[1], 0, &s6c);
    func_020059cc(&s6c);
    if ((int32_t)s38.w[0] > 0) {
        func_020095b8(&s60, &s94);
        obj = *(void **)(p + 0x88);
        s18.w[0] = s38.w[0];
        s18.w[1] = 2;
        func_02065f90(obj, *(void **)(p + 0x8c), s18.w[0], s18.w[1], 0, &s60);
        func_020059cc(&s60);
    }
    t = func_02062884(*(void **)(p + 0x88));
    s50.w[0] = 0;
    s50.w[1] = 0;
    s50.w[2] = t;
    s50.w[3] = 1;
    obj = *(void **)(p + 0x88);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))vt[17])(
        obj, 0, 0, t, 1, data_0209de1c, 0);
    t = func_02062884(*(void **)(p + 0x88));
    s40.w[0] = 0;
    s40.w[1] = 0xf;
    s40.w[2] = 0x10;
    s40.w[3] = t;
    obj = *(void **)(p + 0x88);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))vt[17])(
        obj, 0, 0xf, 0x10, t, data_0209de1c, 0);
    func_020059cc(&s94);
    z30[0] = z30[1] = z10[0] = z10[1] = 0;
}
