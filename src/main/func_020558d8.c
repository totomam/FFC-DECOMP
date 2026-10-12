#include "ffc/types.h"

extern char data_020ae6d4[];
extern void func_02055b88(uint32_t a, void *b);
extern void func_02055980(void *p);
extern void func_0200d5ec(void *p);

typedef struct Obj {
    void *vtbl;
    uint32_t pad[3];
    uint32_t *f10;
    uint32_t f14;
} Obj;

void *func_020558d8(void *p)
{
    Obj *s = (Obj *)p;
    s->vtbl = data_020ae6d4;
    while (s->f14 != 0) {
        func_02055b88(*s->f10, s);
    }
    func_02055980(s);
    func_0200d5ec(&s->f10);
    func_0200d5ec(&s->pad[0]);
    return s;
}
