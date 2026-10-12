#include "ffc/types.h"

extern char data_020adcd0[];
extern void func_02030e20(uint32_t *out, uint8_t *base, uint32_t *a, uint32_t *b);
extern void func_02035c18(void *p);
extern void func_02056db0(void *p);

typedef struct Vt {
    void *f0;
    void (*f1)(void *self);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

uint8_t *func_0202e4bc(uint8_t *p)
{
    uint32_t loc[3];
    uint8_t *base;
    Obj *q;

    *(void **)p = data_020adcd0;
    q = *(Obj **)(p + 0x80);
    if (q) {
        if (q) {
            q->vt->f1(q);
        }
        *(void **)(p + 0x80) = 0;
    }
    base = p + 0x484;
    loc[2] = (uint32_t)(base + 4);
    loc[1] = *(uint32_t *)(base + 8);
    func_02030e20(loc, base, &loc[1], &loc[2]);
    func_02035c18(p + 0xd4);
    func_02056db0(p);
    return p;
}
