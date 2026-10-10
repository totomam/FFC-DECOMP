#include "ffc/types.h"

extern char data_020b3144[];
extern void func_02056880(void *p);

typedef struct Entry {
    void (*fn)(uint32_t, void *, void *);
    void *arg;
} Entry;

typedef struct Obj {
    void *vtbl;
    Entry *list;
    uint32_t count;
    uint32_t pad;
    void *p10;
    uint32_t pad2;
    void *p18;
} Obj;

Obj *func_02097184(Obj *self)
{
    uint32_t i;

    self->vtbl = (void *)data_020b3144;
    i = self->count;
    if (i != 0) {
        do {
            Entry *e;
            i--;
            e = &self->list[i];
            e->fn(0, self, e->arg);
        } while (i != 0);
    }
    func_02056880(self->p18);
    func_02056880(self->p10);
    func_02056880(self->list);
    return self;
}
