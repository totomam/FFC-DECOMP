#include "ffc/types.h"

extern uint8_t data_020b24f8[];
extern void func_02056858(void *p);

typedef struct Obj {
    void *vtbl;
    uint32_t pad4;
    uint32_t count;
    void *buf;
    void **items;
} Obj;

Obj *func_020720b0(Obj *this)
{
    uint32_t i;
    this->vtbl = data_020b24f8;
    for (i = 0; i < this->count; i++) {
        void *o = this->items[i];
        if (o != 0) {
            void **vt = *(void ***)o;
            ((void (*)(void *))vt[1])(o);
        }
        this->items[i] = 0;
    }
    func_02056858(this->items);
    this->items = 0;
    func_02056858(this->buf);
    this->buf = 0;
    return this;
}
