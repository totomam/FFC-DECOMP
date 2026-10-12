#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t d;
} Obj;

typedef struct {
    uint16_t *q;
    Obj o;
} Local;

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

extern void func_02053234(void *object);
extern int func_02047f14(void *obj, void *out);
extern void func_0201c220(uint32_t a, uint32_t b, uint16_t c);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern uint32_t data_020b93b8;
extern Pair data_020afcb8;
extern Pair data_020afcc0;

void func_0204806c(uint8_t *p0)
{
    Local l;
    Obj *o = &l.o;

    func_02053234(o);
    l.o.b = 0;
    l.o.d = 0;
    if (func_02047f14(o, &l.q) != 0) {
        func_0201c220(data_020b93b8, 1, *l.q);
        *(Pair *)(p0 + 0x84) = data_020afcb8;
        if (l.o.b != 0) {
            if (o->d != 0) {
                func_02052d3c(o->b, o->c);
            }
            func_02052c04(o->b);
        }
        func_02053290(o);
    } else {
        *(Pair *)(p0 + 0x84) = data_020afcc0;
        if (l.o.b != 0) {
            if (o->d != 0) {
                func_02052d3c(o->b, o->c);
            }
            func_02052c04(o->b);
        }
        func_02053290(o);
    }
}
