#include "ffc/types.h"

extern void func_02055050(void *a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void *func_0206df9c(void *a, uint32_t b);
extern void func_0206e27c(void *a, uint32_t b);
extern void func_02055ae8(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0206cb74(void *a);
extern void func_0201e954(void *a, uint32_t b, void *c);
extern uint32_t func_0206bf18(void);
extern uint32_t func_02036d18(void *a);
extern uint32_t func_02036ce8(void *a);
extern uint32_t func_02036cd8(const void *object);
extern void func_0206e2a4(void *a, void *b);
extern uint32_t func_0201c9ac(void *a, uint32_t b);
extern uint32_t func_0201bd84(void *a, uint32_t b);
extern uint32_t func_0206cb80(void *a);

extern void *data_0213e098;
extern void *data_020b93b8;
extern char data_020ac838[];
extern char data_020ac858[];
extern uint32_t data_ov013_021c4280[];
extern uint32_t data_ov013_021c4288[];

#define PF(p, off, T) (*(T *)((uint8_t *)(p) + (off)))

typedef struct { uint32_t a, b; } S8;
typedef struct {
    void *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} Node;

void func_ov013_021bd9e4(void *param)
{
    uint8_t *p = (uint8_t *)param;
    Node *n;
    uint32_t loc[6];
    uint32_t sp4, sp8, r6, r7, t, v, i;
    void *r; uint8_t *q;

    func_02055050(data_0213e098, 1);
    r = func_0205681c(0x29c);
    if (r != 0) {
        r = func_0206df9c(r, 0);
    }
    PF(p, 0xfc, void *) = r;
    func_0206e27c(r, 1);
    q = p;
    if (p) q = p + 0x80;
    func_02055ae8((uint8_t *)PF(p, 0xfc, void *) + 0x20, q);
    func_02056bc0(p + 0x48, PF(p, 0xfc, void *));

    if (func_0206cb74(PF(p, 0xf4, void *)) == 0) {
        func_0201e954(data_020b93b8, PF(p, 0xf0, uint32_t), loc);
        n = (Node *)func_0205681c(0x20);
        if (n != 0) {
            r6 = func_0206bf18();
            r7 = func_02036d18(loc);
            v = func_02036ce8(loc);
            t = func_02036cd8(loc);
            n->f8 = 0;
            n->fc = 0x100ab;
            n->vt = data_020ac838;
            n->f10 = t;
            n->f14 = v;
            n->f18 = r7;
            n->f1c = r6;
        }
        func_0206e2a4(PF(p, 0xfc, void *), n);
    }

    if (PF(PF(p, 0xc8, uint8_t *), 0x5c, uint8_t) == 0 || func_0206cb74(PF(p, 0xf4, void *)) == 0) {
        n = (Node *)func_0205681c(0x20);
        if (n != 0) {
            r7 = func_0201c9ac(data_020b93b8, 8);
            sp4 = func_0201c9ac(data_020b93b8, 7);
            sp8 = func_0201bd84(data_020b93b8, 0x26);
            r6 = func_0201bd84(data_020b93b8, 0x25);
            t = func_0206cb74(PF(p, 0xf4, void *));
            n->f8 = 0;
            n->fc = 0x100ac;
            n->vt = data_020ac858;
            n->f10 = t;
            ((uint8_t *)n)[0x14] = (uint8_t)r6;
            ((uint8_t *)n)[0x15] = (uint8_t)sp8;
            n->f18 = sp4;
            n->f1c = r7;
        }
        func_0206e2a4(PF(p, 0xfc, void *), n);
    }

    if (PF(PF(p, 0xc8, uint8_t *), 0x5c, uint8_t) != 0 && func_0206cb74(PF(p, 0xf4, void *)) == 0) {
        for (r6 = 1; r6 < func_0206cb80(PF(p, 0xf4, void *)); r6++) {
            n = (Node *)func_0205681c(0x20);
            if (n != 0) {
                r7 = func_0201bd84(data_020b93b8, 0x26);
                t = func_0201bd84(data_020b93b8, 0x25);
                n->f8 = 0;
                n->fc = 0x100ac;
                n->vt = data_020ac858;
                n->f10 = r6;
                ((uint8_t *)n)[0x14] = (uint8_t)t;
                ((uint8_t *)n)[0x15] = (uint8_t)r7;
                n->f18 = 0;
                n->f1c = 0;
            }
            func_0206e2a4(PF(p, 0xfc, void *), n);
        }
    }

    t = func_0201c9ac(data_020b93b8, 7);
    PF(PF(p, 0xc8, uint8_t *), 0x54, uint32_t) = t;
    t = func_0201c9ac(data_020b93b8, 8);
    PF(PF(p, 0xc8, uint8_t *), 0x58, uint32_t) = t;
    p[0x100] = 0;

    for (i = 0; i < func_0206cb80(PF(p, 0xf4, void *)); i++) {
        p[0x101 + i] = 0;
    }

    PF(p, 0xb8, S8) = *(S8 *)data_ov013_021c4280;
    PF(p, 0xc0, S8) = *(S8 *)data_ov013_021c4288;
}
