#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

typedef struct Node {
    void *vt;
    uint8_t p04[0x15 - 0x04];
    uint8_t flag;
    uint8_t p16[0x1c - 0x16];
    uint32_t f1c;
    uint32_t p20;
    uint32_t f24;
    uint8_t p28[0x30 - 0x28];
    uint32_t f30;
    uint8_t p34[0x4c - 0x34];
    void *f4c;
} Node;

extern Pair func_ov003_0215c220(void *self);
extern void *func_0205681c(uint32_t size);
extern void func_02056c4c(void *x);
extern void func_020572d0(Node *n, Pair v, uint32_t a);
extern void func_02056bc0(void *object, void *node);
extern void *data_ov003_0217a240;

void func_ov003_0215c19c(void *self, Pair p, uint32_t c, uint32_t d)
{
    Node *n;
    Pair v;
    func_02056c4c(*(void **)((uint8_t *)self + 0xc0));
    n = (Node *)func_0205681c(0x50);
    if (n != 0) {
        v = func_ov003_0215c220(self);
        func_020572d0(n, v, p.a);
        n->vt = &data_ov003_0217a240;
        n->f4c = self;
        n->f24 = c << 1;
        if (n->flag != 0) {
            if (c << 1) {
                n->f1c = c << 5;
            } else {
                n->f1c = 1;
            }
        }
        n->f30 = d;
        n->f1c = 0x2000;
    }
    func_02056bc0(*(void **)((uint8_t *)self + 0xc0), n);
}
