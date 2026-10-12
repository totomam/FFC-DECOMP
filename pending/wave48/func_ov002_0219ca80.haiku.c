#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *object, uint32_t x);
extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern char data_ov002_021d4cf8[];
extern char data_ov002_021d4bc4[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Quad;

typedef struct Obj {
    void **vt;
} Obj;

#define FLD(p, o, T) (*(T *)((uint8_t *)(p) + (o)))

void func_ov002_0219ca80(void *self, Quad x)
{
    uint8_t *n;
    Quad cur;
    uint32_t r7;
    int i;

    if (FLD(self, 0x90, void *) != 0) {
        uint32_t *f = (uint32_t *)((uint8_t *)FLD(self, 0x90, void *) + 0xc);
        *f = (*f & 0xffffff00) | 2;
        FLD(self, 0x90, void *) = 0;
    }

    if (x.a == x.c && x.b == x.d) {
        return;
    }

    func_02021338(0xde);
    n = (uint8_t *)func_0205681c(0x94);
    if (n != 0) {
        cur = x;
        r7 = FLD(self, 0x80, uint32_t);
        func_02056c9c(n, 0);
        FLD(n, 0, void *) = data_ov002_021d4cf8;
        FLD(n, 0x80, uint32_t) = cur.a;
        FLD(n, 0x84, uint32_t) = cur.b;
        FLD(n, 0x88, uint32_t) = cur.c;
        FLD(n, 0x8c, uint32_t) = cur.d;
        FLD(n, 0x90, uint32_t) = func_0203b6f0();
        func_02056bc0(n + 0x48, FLD(n, 0x90, void *));

        for (i = 0; i < 4; i++) {
            Obj *o = (Obj *)func_0203b95c(FLD(data_ov002_021d4bc4, 0x24, void *), r7, 0, 1);
            ((void (*)(Obj *))o->vt[10])(o);
            func_02064390(o, (i & 2) ? FLD(n, 0x88, uint32_t) : FLD(n, 0x80, uint32_t),
                          (i & 1) ? FLD(n, 0x8c, uint32_t) : FLD(n, 0x84, uint32_t));
            ((void (*)(Obj *, uint32_t))o->vt[8])(o, 0);
            ((void (*)(Obj *, uint32_t, uint32_t))o->vt[14])(o, i + 1, 0);
            func_02056bc0(FLD(n, 0x90, void *), o);
        }
    }
    FLD(self, 0x90, void *) = n;
    func_02056bc0((uint8_t *)self + 0x48, n);
}
