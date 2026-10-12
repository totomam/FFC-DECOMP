#include "ffc/types.h"

typedef struct { uint32_t w[3]; } Tri;
typedef struct { uint32_t w[2]; } Pair;
typedef struct { uint32_t w[4]; } Quad;
typedef void (*VF)(void *, Quad, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
typedef void (*VG)(void *, Quad, uint32_t);

extern void func_02005988(void *dst, void *src);
extern void func_02009678(void *dst, void *src);
extern void func_020095b8(void *dst, void *src);
extern void func_0206139c(void *dst, uint32_t a, void *b, uint32_t c, uint32_t d);
extern void *func_020059cc(void *o);
extern void func_02065f90(void *o, void *a, Pair b, uint32_t d, void *e);
extern uint32_t func_02062884(void *o);
extern uint32_t data_020aad64;
extern uint32_t data_0209de24;
extern uint32_t data_0209de1c;

void func_020091a4(uint8_t *p) {
    Tri s94, s88, s6c, s60;
    Pair s38, s28, s20, s18, z10, z30;
    Quad q;
    uint32_t t, u;
    void *obj;

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
    ((void (*)(void *, void *))(*(void ***)obj)[6])(&s28, obj);
    q.w[0] = 0; q.w[1] = 0; q.w[2] = s28.w[0]; q.w[3] = s28.w[1];
    z30.w[0] = 0; z30.w[1] = 0;
    z10.w[0] = 0; z10.w[1] = 0;
    obj = *(void **)(p + 0x88);
    ((VF)(*(void ***)obj)[17])(obj, q, data_0209de24, s28.w[0], s28.w[1], z10.w[0], z10.w[1]);
    func_020095b8(&s6c, &s94);
    s20.w[0] = 0; s20.w[1] = 2;
    func_02065f90(*(void **)(p + 0x88), *(void **)(p + 0x8c), s20, 0, &s6c);
    func_020059cc(&s6c);
    if ((int32_t)s38.w[0] > 0x100) {
        func_020095b8(&s60, &s94);
        s18.w[0] = s38.w[0]; s18.w[1] = 2;
        func_02065f90(*(void **)(p + 0x88), *(void **)(p + 0x8c), s18, 0, &s60);
        func_020059cc(&s60);
    }
    t = func_02062884(*(void **)(p + 0x88));
    q.w[0] = 0; q.w[1] = 0; q.w[2] = t; q.w[3] = 1;
    obj = *(void **)(p + 0x88);
    ((VG)(*(void ***)obj)[17])(obj, q, data_0209de1c);
    u = func_02062884(*(void **)(p + 0x88));
    q.w[0] = 0; q.w[1] = 0xf; q.w[2] = 0x10; q.w[3] = u;
    obj = *(void **)(p + 0x88);
    ((VG)(*(void ***)obj)[17])(obj, q, data_0209de1c);
    func_020059cc(&s94);
}
