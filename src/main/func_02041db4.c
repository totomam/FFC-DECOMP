#include "ffc/types.h"

extern void *data_0213df18;
extern char data_020af5f4[];
extern void *data_020b8e44;
extern char data_020acab8[];
extern char data_020ad6f4[];
extern void *data_020b93b8;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_020af63c;

extern void func_02056c9c(void *a, void *b);
extern void func_02053234(void *object);
extern uint32_t func_02018008(void *x);
extern void *func_02056830(uint32_t x);
extern void func_0205d5f8(void *o);
extern void func_0201ffd0(void *o);
extern int func_0201b780(void *x);
extern void func_020375f4(uint32_t mask);
extern void *func_0205681c(uint32_t size);
extern void *func_ov011_021c9e14(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void *func_02041db4(void *a0, uint32_t a1, uint32_t a2)
{
    uint8_t *p = (uint8_t *)a0;
    uint32_t *b, *c, *d, *e;
    uint32_t r;
    void *q;

    func_02056c9c(a0, *(void **)((uint8_t *)data_0213df18 + 0x20));
    *(char **)p = data_020af5f4;
    *(uint32_t *)(p + 0x88) = a1;
    *(uint32_t *)(p + 0x8c) = 0;
    b = (uint32_t *)(p + 0x90);
    *(uint32_t *)(p + 0x90) = 0;
    b[3] = (uint32_t)(b + 1);
    b[1] = 0;
    c = (uint32_t *)(p + 0xa0);
    func_02053234(c);
    c[1] = 0;
    ((uint8_t *)c)[0xc] = 0;
    d = (uint32_t *)(p + 0xb0);
    func_02053234(d);
    *(uint32_t *)(p + 0xc0) = 0;
    *(uint32_t *)(p + 0xc4) = 0;
    d[1] = 0;
    ((uint8_t *)d)[0xc] = 0;
    r = func_02018008(data_020b8e44);
    e = (uint32_t *)(p + 0xc8);
    e[2] = r;
    e[0] = (uint32_t)data_020acab8;
    e[0] = (uint32_t)data_020ad6f4;
    e[3] = (uint32_t)func_02056830((r + 7) >> 3);
    p[0xd8] = 1;
    p[0xd9] = 0;
    func_0205d5f8(p + 0xe0);
    *(uint32_t *)(p + 0x120) = 0;
    *(uint32_t *)(p + 0x124) = 0;
    *(uint32_t *)(p + 0x12c) = 0;
    *(uint32_t *)(p + 0x14c) = 0;
    *(uint32_t *)(p + 0x150) = 0;
    *(uint32_t *)(p + 0x154) = 0;
    *(uint32_t *)(p + 0x158) = 0;
    p[0x15c] = 0;
    *(uint32_t *)(p + 0x160) = 0;
    p[0x164] = 0;
    p[0x165] = 0;
    *(uint32_t *)(p + 0x16c) = a2;
    *(uint32_t *)(p + 0x170) = 0;
    func_0201ffd0(p + 0x174);
    *(uint32_t *)(p + 0x168) = 0;

    if (*(uint32_t *)(p + 0x88) != 0) {
        if (func_0201b780(data_020b93b8) == 0) {
            if (a2 == 0) {
                func_020375f4(0x1400);
                q = func_0205681c(0x9c);
                if (q != 0) {
                    q = func_ov011_021c9e14(q, p + 0x168);
                }
                func_02056bc0(p + 0x14, q);
            }
        }
    }

    *(Pair *)(p + 0x80) = data_020af63c;
    return a0;
}
