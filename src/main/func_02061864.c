#include "ffc/types.h"

extern char data_020b13f0[];
extern void func_02061344(uint32_t x);
extern void func_0200d5ec(void *p);
extern void func_02061338(void *p);
extern void func_02056844(void *p);

struct S {
    void *vt;
    uint32_t pad[5];
    uint32_t *begin;
    uint32_t count;
};

void *func_02061864(void *p)
{
    struct S *s = (struct S *)p;
    uint32_t *it;

    s->vt = data_020b13f0;
    it = s->begin;
    if (it != (uint32_t *)((uint32_t)it + s->count * 4)) {
        do {
            func_02061344(*it);
            it++;
        } while (it != (uint32_t *)((uint32_t)s->begin + s->count * 4));
    }
    func_0200d5ec(&s->begin);
    func_02061338(s);
    func_02056844(s);
    return p;
}
