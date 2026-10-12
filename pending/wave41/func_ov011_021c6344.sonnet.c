#include "ffc/types.h"

typedef struct VT { void *s[16]; } VT;
typedef struct Obj { void **vt; } Obj;
extern void func_02056bf4(void *object);
extern uint32_t func_0204f7d4(const void *object);
extern Obj *func_0203bb08(uint32_t a, const void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov011_021cb884[];
extern uint8_t data_ov011_021cb89c[];
extern void *data_0213df18;

void func_ov011_021c6344(uint8_t *p, int flag)
{
    if (*(Obj **)(p + 0xc8) != 0) {
        Obj *o;
        func_02056bf4(p + 0x48);
        o = *(Obj **)(p + 0xc8);
        if (o != 0) {
            if (o != 0) {
                ((void (*)(Obj *))o->vt[1])(o);
            }
            *(Obj **)(p + 0xc8) = 0;
        }
    }
    {
        const void *r = flag ? (const void *)data_ov011_021cb884 : (const void *)data_ov011_021cb89c;
        Obj *n = func_0203bb08(func_0204f7d4(data_0213df18), r, 1, 0, 0);
        *(Obj **)(p + 0xc8) = n;
        ((void (*)(Obj *))n->vt[10])(n);
        n = *(Obj **)(p + 0xc8);
        ((void (*)(Obj *, int))n->vt[8])(n, 3);
        func_02056bc0(p + 0x48, *(Obj **)(p + 0xc8));
    }
}
