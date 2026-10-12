#include "ffc/types.h"

extern uint32_t data_020b22dc[];
extern void func_02073904(void *p);

typedef struct Obj {
    void **vt;
    uint8_t pad[0xac - 4];
    void *slots[32];
} Obj;

void *func_0207314c(void *a)
{
    Obj *self = (Obj *)a;
    int i;

    self->vt = (void **)data_020b22dc;
    func_02073904(self);
    for (i = 0; i < 32; i++) {
        if (self->slots[i] != 0) {
            void *p = self->slots[i];
            if (p != 0) {
                ((void (*)(void *))((void **)(*(void **)p))[1])(p);
            }
            self->slots[i] = 0;
        }
    }
    return self;
}
