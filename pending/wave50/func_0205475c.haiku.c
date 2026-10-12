#include "ffc/types.h"

extern uint32_t func_020871d4(const void *object);
extern void func_02088f30(void);
extern void func_02056bf4(void *a, void *b);
extern uint32_t data_020b0638[];
extern uint32_t data_02141510[];
extern uint32_t data_0213e098[];

typedef struct {
    void *vt;
    void *p;
    uint8_t flag;
} Obj;

void *func_0205475c(Obj *self)
{
    char *base;
    self->vt = data_020b0638;
    if (self->flag != 0) {
        uint32_t a = func_020871d4((const void *)data_02141510[1]);
        if (a > func_020871d4((const void *)data_0213e098[1])) {
            int t = (*(volatile uint16_t *)0x04000208 == 0);
            if (!t) {
                func_02088f30();
            }
        }
    }
    base = (char *)data_0213e098[0];
    func_02056bf4(base + 0x14, self->p);
    base = (char *)data_0213e098[0];
    func_02056bf4(base + 0xb0, self->p);
    if (self->p != 0) {
        void **v = *(void ***)self->p;
        ((void (*)(void *))v[1])(self->p);
    }
    return self;
}
