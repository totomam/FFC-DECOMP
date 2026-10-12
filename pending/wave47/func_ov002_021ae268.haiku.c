#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern uint16_t func_020816d4(int32_t a, int32_t b);
extern uint32_t func_02062a78(uint32_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f, int32_t g);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov002_021d5414[];

typedef struct Node {
    void *vtable;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    int32_t f1c;
    int32_t f20;
    int32_t f24;
    int32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint16_t f34;
    uint32_t f38;
} Node;

void *func_ov002_021ae268(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
                          uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8)
{
    uint32_t *args = &a0;
    uint8_t *self = (uint8_t *)args[0];
    int32_t p1 = (int32_t)args[1];
    int32_t p2 = (int32_t)args[2];
    int32_t p3 = (int32_t)args[3];
    int32_t b5 = (int32_t)args[4];
    int32_t b6 = (int32_t)args[5];
    int32_t b7 = (int32_t)args[6];
    uint32_t b8 = args[7];
    int32_t b9 = (int32_t)args[8];
    void *obj = func_0203b6fc();
    Node *n;

    if (b8 != 0) {
        n = (Node *)func_0205681c(0x3c);
        if (n != 0) {
            n->vtable = data_ov002_021d5414;
            n->f0c &= ~0xffu;
            n->f14 = b9;
            n->f18 = *(uint32_t *)(self + 0x128);
            n->f1c = p1;
            n->f20 = p2;
            n->f24 = p3;
            n->f28 = b5;
            n->f2c = 0x78;
            n->f30 = 0;
            n->f34 = 0;
            n->f38 = 0;
            n->f34 = func_020816d4(p2 << 12, p1 << 12);
        }
        func_02056bc0(obj, n);
    } else {
        int32_t s190 = *(int32_t *)(self + 0x190);
        int32_t s194 = *(int32_t *)(self + 0x194);
        uint32_t r;
        r = func_02062a78(*(uint32_t *)(self + 0x128), p1 + s190, p2 + s194,
                          p3 + s190, b5 + s194, b6, b7);
        func_02056bc0(obj, (void *)r);
    }

    if (*(uint32_t *)(self + 0x1a0) != 0) {
        uint32_t r2;
        r2 = func_02062a78(*(uint32_t *)(self + 0x1a0), p1, p2 - 6, p3,
                           b5 - 6, b6, b7);
        func_02056bc0(obj, (void *)r2);
    }

    *(uint32_t *)(self + 0x188) = p3;
    *(uint32_t *)(self + 0x18c) = b5;
    return obj;
}
