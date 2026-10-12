#include "ffc/types.h"

extern char data_ov011_021cb330[];
extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void *func_02035fd0(void *object);
extern void func_020695d0(void *p);

typedef struct {
    void *vt;
    uint8_t pad0[0xec - 4];
    void *slots[5];
    uint8_t pad1[0x1d4 - 0xec - 5 * 4];
    void *tail;
} Obj;

Obj *func_ov011_021c394c(Obj *self)
{
    int i;
    void *q;

    self->vt = data_ov011_021cb330;

    for (i = 0; i < 5; i++) {
        q = self->slots[i];
        if (q != 0) {
            if (q != 0) {
                func_0205d620(q);
                func_02056844(q);
            }
            self->slots[i] = 0;
        }
    }

    q = self->tail;
    if (q) {
        func_02056844(q);
        self->tail = 0;
    }

    func_02035fd0((uint8_t *)self + 0x168);
    func_02035fd0((uint8_t *)self + 0x108);
    func_020695d0(self);
    func_02056844(self);
    return self;
}
