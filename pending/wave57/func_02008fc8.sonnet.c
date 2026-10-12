#include "ffc/types.h"

extern void func_0208763c(void *object);
extern uint32_t func_02056dd4(void *object);
extern uint32_t func_02015a38(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0206133c(uint32_t object);
extern uint32_t func_0203b7fc(uint32_t a, uint32_t b, uint32_t c);
extern void func_02009130(void *out, void *src, uint32_t arg);
extern void func_020095b8(void *out, void *src);
extern void func_0206139c(void *out, uint32_t obj, void *in, uint32_t a, uint32_t b);
extern void func_020059cc(void *object);
extern uint32_t func_020639b8(void *object, uint32_t idx, uint32_t z);
typedef struct { uint32_t a, b; } S2;
extern uint32_t func_0203ba60(uint32_t obj, S2 s, uint32_t c, uint32_t d);
extern void func_02067494(uint32_t obj, uint32_t a, uint32_t b);
extern void func_02056bc0(void *a, uint32_t b);
extern void func_02009494(void *object);
extern void func_02087678(void *object);

struct Guard { void *q; volatile uint8_t flag; };

extern uint32_t data_0213df20;
extern volatile uint32_t data_0209de20;
extern uint32_t data_020b8e44;
extern uint32_t data_0209de24;
extern uint32_t data_0209de1c;
extern uint32_t data_020aad64;

void func_02008fc8(uint8_t *p)
{
    struct { uint32_t saved; S2 sp8; uint32_t sp10; uint32_t pad2; uint32_t sp18[3]; struct Guard g; uint32_t sp2c[3]; uint32_t sp38[3]; } L;
    uint32_t best;
    uint32_t i;
    uint32_t t;
    uint32_t r4;
    uint32_t o;
    uint32_t w;
    uint32_t h;

    L.g.q = p + 0x98;
    L.g.flag = 1;
    if (L.g.flag) {
        func_0208763c(L.g.q);
    }
    r4 = func_02056dd4(p);
    L.saved = data_0213df20;
    data_0213df20 = r4;
    o = func_02015a38(data_020b8e44, data_0209de24, data_0209de1c, data_0209de20);
    *(uint32_t *)(p + 0x8c) = o;
    func_0206133c(o);
    h = func_0203b7fc(60, 9, 1);
    *(uint32_t *)(p + 0x90) = h;
    ((void (*)(void *))(*(void ***)(*(uint32_t *)(p + 0x8c)))[1])(L.sp18);

    best = 0x100;
    for (i = 0; (int32_t)i < *(int32_t *)(p + 0xbc); i++) {
        func_02009130(L.sp38, &data_020aad64, *(uint32_t *)(p + 0xb0));
        func_020095b8(L.sp2c, L.sp38);
        func_0206139c(&L.sp10, *(uint32_t *)(p + 0x8c), L.sp2c, 0, 0);
        func_020059cc(L.sp2c);
        if ((int32_t)L.sp10 >= (int32_t)best) {
            best = L.sp10;
        }
        func_020059cc(L.sp38);
    }

    L.sp8.a = best + 0x100 + L.sp18[0];
    L.sp8.b = 0x10;
    t = func_020639b8(p + 0x94, 0, 0);
    w = func_0203ba60(*(uint32_t *)(p + 0x90), L.sp8, t + 4, 1);
    *(uint32_t *)(p + 0x88) = w;
    func_02067494(w, 0, 0xc0);
    ((void (*)(void *))(*(void ***)(*(uint32_t *)(p + 0x88)))[10])((void *)*(uint32_t *)(p + 0x88));
    r4 = *(uint32_t *)(p + 0x90);
    func_02056bc0(p + 0x48, *(uint32_t *)(p + 0x88));
    func_02056bc0(p + 0x48, r4);
    *(int32_t *)(p + 0xc0) = -1;
    func_02009494(p);
    data_0213df20 = L.saved;
    if (L.g.flag) {
        func_02087678(L.g.q);
    }
}
