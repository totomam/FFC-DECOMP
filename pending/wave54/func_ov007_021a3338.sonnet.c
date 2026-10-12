#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t x[3]; } Buf;

extern void func_020559d4(void *obj);
extern void func_0208763c(void *obj);
extern void func_02087678(void *obj);
extern void *func_02056aec(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *obj, uint32_t v);
extern void *func_02032d24(void *obj, Pair pr, void *x, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern uint32_t func_0206d774(uint32_t v);
extern uint32_t data_020b8e44;
extern uint32_t data_ov007_021c41b4[2];
extern uint32_t data_ov007_021c41bc[2];

void func_ov007_021a3338(uint8_t *p)
{
    uint8_t *e;
    uint8_t flag;
    uint8_t *m;
    int ok;
    void *obj;
    void *node;
    struct { uint32_t a[2]; Pair pr; Buf tmp; } fr;
    uint32_t t;
    uint32_t zero;

    func_020559d4(*(uint8_t **)(p + 0xc8) + 0xb8);
    func_020559d4(p + 0x80);

    e = *(uint8_t **)(p + 0xec);
    m = e + 0x1c;
    flag = e[0x12];
    if (flag) {
        func_0208763c(m);
    }
    ok = (*(uint32_t *)(e + 0x14) == 0);
    if (flag) {
        func_02087678(m);
    }
    if (!ok) {
        return;
    }

    if (*(uint32_t *)(p + 0xf0) == 0x22) {
        node = func_02056aec(p);
        func_02056bc0(p + 0x14, node);
        return;
    }

    if (*(uint32_t *)(*(uint8_t **)(p + 0xd0) + 0xb8) != 2) {
        int has = 0;
        zero = 0;
        obj = 0;
        obj = func_0205681c(0xb0);
        if (obj != 0) {
            t = func_020159c8(data_020b8e44, 0x2d);
            func_02005988(&fr.tmp, t);
            has = zero + 1;
            fr.pr.a = 0x80;
            fr.pr.b = 0x60;
            obj = func_02032d24(obj, fr.pr, &fr.tmp, 4, zero);
                    }
        if (has) {
            func_020059cc(&fr.tmp);
        }
        node = func_02056aec(p);
        {
        uint8_t *q = p + 0x14;
        func_02056bc0(q, obj);
        func_02056bc0(q, node);
        }
        return;
    }

    t = func_0206d774(*(uint32_t *)(p + 0xcc));
    func_02056bc0(p + 0x14, (void *)t);
    {
    uint32_t a = data_ov007_021c41b4[0], b = data_ov007_021c41b4[1];
    *(uint32_t *)(p + 0xb8) = a;
    *(uint32_t *)(p + 0xbc) = b;
    }
    {
    uint32_t a = data_ov007_021c41bc[0], b = data_ov007_021c41bc[1];
    *(uint32_t *)(p + 0xc0) = a;
    *(uint32_t *)(p + 0xc4) = b;
    }
}
