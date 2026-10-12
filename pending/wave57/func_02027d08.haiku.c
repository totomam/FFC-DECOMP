#include "ffc/types.h"

typedef struct Ent { uint32_t a; uint32_t size; } Ent;
typedef struct Owner { uint8_t pad[0x14]; Ent *tbl; } Owner;

struct L {
    uint32_t a;
    uint8_t fa;
    uint8_t p1[3];
    uint32_t tmp;
    uint32_t b;
    uint8_t fb;
    uint8_t p2[3];
    uint32_t p3[2];
    uint8_t c;
};

struct Frame {
    uint32_t u0c;
    uint32_t u10;
    struct L L;
};

extern void func_0208763c(void);
extern void func_02087678(void *p);
extern void func_02027e9c(uint32_t *out, void *a, void *b);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void func_02052d98(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02058048(void *a, uint32_t b, uint32_t c);
extern void func_020878ac(uint32_t a, uint32_t b);
extern uint32_t *func_02028038(void *a, void *b);
extern void func_02052d3c(uint32_t a);
extern void func_02052c04(uint32_t a);
extern uint8_t data_021394c4[];
extern uint8_t data_021394a4[];
extern uint8_t data_021394a8[];
extern uint32_t data_02139450;

void *func_02027d08(uint32_t *p)
{
    struct Frame F;
    struct L *L = &F.L;
    uint32_t r5;
    uint32_t size;
    uint32_t cnt;
    uint32_t *o;

    L->b = (uint32_t)data_021394c4;
    L->fb = 1;
    if (L->fb) {
        func_0208763c();
    }
    L->a = (uint32_t)data_021394c4;
    L->fa = 1;
    if (L->fa) {
        func_0208763c();
    }
    func_02027e9c(&L->tmp, data_021394a4, p);
    r5 = L->tmp;
    if (r5 != (uint32_t)data_021394a8) {
        r5 += 0x1c;
        if (L->fa) {
            func_02087678((void *)L->a);
        }
    } else {
        if (L->fa) {
            func_02087678((void *)L->a);
        }
        r5 = 0;
    }
    if (r5 != 0) {
        ((uint32_t *)r5)[0] += 1;
        r5 = ((uint32_t *)r5)[1];
        if (L->fb) {
            func_02087678((void *)L->b);
        }
        return (void *)r5;
    }

    L->p3[0] = p[0];
    L->p3[1] = p[1];
    L->c = ((uint8_t *)p)[8];
    if (L->p3[0] != 0) {
        func_02052be0();
        if (L->c) {
            func_02052d10(L->p3[0], L->p3[1]);
        }
    }
    size = 0xb4;
    if (((Owner *)L->p3[0])->tbl[L->p3[1]].size < 0xb4) {
        size = ((Owner *)L->p3[0])->tbl[L->p3[1]].size;
    }
    r5 = func_0205816c((void *)data_02139450, size, 0, 4, 0, 0, 0);
    func_02052d98(L->p3[0], L->p3[1], 0, r5, size, 0);
    cnt = ((uint32_t *)r5)[0];
    if (cnt > 6) {
        uint32_t sz = (cnt - 1) * 0x1c + 0x28;
        func_02058048((void *)data_02139450, r5, 0);
        r5 = func_0205816c((void *)data_02139450, sz, 0, 4, 0, 0, 0);
        func_02052d98(L->p3[0], L->p3[1], 0, r5, sz, 0);
    }
    func_020878ac(r5, ((Owner *)L->p3[0])->tbl[L->p3[1]].size);
    o = func_02028038(data_021394a4, p);
    o[4] = 1;
    o[5] = r5;
    o[6] = (uint32_t)-1;
    o[7] = (uint32_t)-1;
    o[8] = F.u10;
    o[9] = 0;
    o[10] = F.u0c;
    if (L->p3[0] != 0) {
        if (L->c) {
            func_02052d3c(L->p3[1]);
        }
        func_02052c04(L->p3[0]);
    }
    if (L->fb) {
        func_02087678((void *)L->b);
    }
    return (void *)r5;
}
