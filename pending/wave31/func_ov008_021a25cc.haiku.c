#include "ffc/types.h"

extern void func_02069694(void *a, void *b, uint32_t c);
extern void func_02069600(void *a, void *b);

typedef struct Obj {
    void (**vt)(struct Obj *);
} Obj;

typedef struct Self {
    uint8_t pad[0xd4];
    void *f_d4;
    void *f_d8;
    Obj *arr[8];
} Self;

void func_ov008_021a25cc(Self *p)
{
    uint8_t i;
    Obj *o;

    func_02069694(p, p->f_d4, 4);
    for (i = 0; i < 8; i++) {
        func_02069600(p, p->arr[i]);
        o = p->arr[i];
        if (o != 0) {
            if (o != 0) {
                o->vt[1](o);
            }
            p->arr[i] = 0;
        }
    }
}
