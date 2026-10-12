#include "ffc/types.h"

extern uint8_t data_020b3144[];
extern void func_02056880(void *p);
extern void func_02056844(void *p);

typedef void (*cb_t)(uint32_t, void *, uint32_t);
typedef struct {
    cb_t fn;
    uint32_t arg;
} Entry;

typedef struct {
    void *vtbl;
    Entry *list;
    uint32_t count;
    uint32_t f0c;
    void *p10;
    uint32_t f14;
    void *p18;
} Obj;

Obj *func_020971c4(Obj *self)
{
    uint32_t i;

    self->vtbl = data_020b3144;
    i = self->count;
    if (i != 0) {
        do {
            Entry *e;
            i = i - 1;
            e = &self->list[i];
            e->fn(0, self, e->arg);
        } while (i != 0);
    }
    func_02056880(self->p18);
    func_02056880(self->p10);
    func_02056880(self->list);
    func_02056844(self);
    return self;
}
