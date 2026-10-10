#include "ffc/types.h"

extern void func_02061344(uint32_t v);
extern void func_0200d5ec(void *p);
extern void func_02061338(void *p);
extern char data_020b13f0[];

typedef struct {
    void *vt;
    uint32_t pad[5];
    uint32_t *arr;
    uint32_t count;
} Obj;

void *func_02061824(void *p0)
{
    Obj *s = (Obj *)p0;
    uint32_t *it;

    it = s->arr;
    s->vt = data_020b13f0;
    if (it != s->arr + s->count) {
        do {
            func_02061344(*it);
            it++;
        } while (it != s->arr + s->count);
    }
    func_0200d5ec(&s->arr);
    func_02061338(s);
    return s;
}
