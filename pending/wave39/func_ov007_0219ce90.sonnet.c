#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern Pair data_ov007_021c2f40;
extern uint32_t data_ov007_021c2c14[];
extern uint32_t data_ov007_021c2d6c[];
extern Pair data_ov007_021c2f48;
extern void *func_0203bb94(uint32_t a, int b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *obj);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, int x);
extern uint32_t func_0203c030(void *object);

void func_ov007_0219ce90(uint8_t *p)
{
    uint8_t *obj;
    uint8_t *n;
    uint8_t *q;
    uint32_t *vt;
    void *o;
    uint32_t t;
    void *r7;
    uint32_t r6;

    if (p[0x90] != 0) {
        *(Pair *)(p + 0x80) = data_ov007_021c2f40;
        return;
    }

    o = func_0203bb94(data_ov007_021c2c14[1], 1, 0, 0);
    vt = (uint32_t *)(((uint32_t *)o)[0]);
    (*(void (**)(void *))((uint8_t *)vt + 0x28))(o);
    obj = o;
    func_02056bc0(p + 0x48, obj);
    r7 = func_02056aec(obj);

    n = func_0205681c(0x94);
    if (n != 0) {
        r6 = *(uint32_t *)(p + 0x8c);
        func_02056c9c(n, 0);
        *(uint32_t **)n = data_ov007_021c2d6c;
        *(uint32_t *)(n + 0x80) = (uint32_t)(p + 0x90);
        *(uint32_t *)(n + 0x84) = r6;
        *(uint32_t *)(n + 0x88) = 0x3c;
        *(uint32_t *)(n + 0x8c) = 0xf;
        n[0x90] = 1;
        n[0x91] = 0;
    }

    t = func_0203c030((void *)0xf);
    q = p + 0x14;
    func_02056bc0(q, (void *)t);
    func_02056bc0(q, n);
    func_02056bc0(q, r7);

    *(Pair *)(p + 0x80) = data_ov007_021c2f48;
}
