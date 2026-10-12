#include "ffc/types.h"

typedef struct { int32_t x, y; } P;

extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern uint16_t func_020816d4(int32_t a, int32_t b);
extern void *func_02062a78(uint32_t a, P p, P q, int32_t e, int32_t f);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov002_021d5414[];

typedef struct Node {
    void *vtable;
    uint32_t f04, f08, f0c, f10, f14, f18;
    int32_t f1c, f20, f24, f28;
    uint32_t f2c, f30;
    uint16_t f34;
    uint32_t f38;
} Node;

static inline void init(Node *n, uint32_t s, P p, P q, uint32_t g)
{
    n->f0c &= ~0xffu;
    n->vtable = data_ov002_021d5414;
    n->f14 = g;
    n->f18 = s;
    n->f1c = p.x;
    n->f20 = p.y;
    n->f24 = q.x;
    n->f28 = q.y;
    n->f2c = 0x78;
    n->f30 = 0;
    n->f34 = 0;
    n->f38 = 0;
    n->f34 = func_020816d4(p.y << 12, p.x << 12);
}

void *func_ov002_021ae268(uint8_t *self, P p, P q, int32_t e, int32_t f, int32_t flag, uint32_t g)
{
    void *obj = func_0203b6fc();
    Node *n;

    if (flag != 0) {
        n = (Node *)func_0205681c(0x3c);
        if (n != 0) {
            init(n, *(uint32_t *)(self + 0x128), p, q, g);
        }
        func_02056bc0(obj, n);
    } else {
        int32_t s194 = *(int32_t *)(self + 0x194);
        int32_t s190 = *(int32_t *)(self + 0x190);
        P a, b;
        b.x = q.x + s190; b.y = q.y + s194;
        a.x = p.x + s190; a.y = p.y + s194;
        func_02056bc0(obj, func_02062a78(*(uint32_t *)(self + 0x194 - 0x6c), a, b, e, f));
    }
    if (*(uint32_t *)(self + 0x1a0) != 0) {
        P a, b;
        b.x = q.x; b.y = q.y - 6;
        a.x = p.x; a.y = p.y - 6;
        func_02056bc0(obj, func_02062a78(*(uint32_t *)(self + 0x1a0), a, b, e, f));
    }
    *(int32_t *)(self + 0x188) = q.x;
    *(int32_t *)(self + 0x18c) = q.y;
    return obj;
}
