#include "ffc/types.h"

typedef struct Obj {
    void *vtbl;
    void *node;
    uint8_t flag;
} Obj;

typedef struct G {
    void *p0;
    void *p4;
} G;

extern uint32_t data_020b064c;
extern G data_02141510;
extern G data_0213e098;

extern uint32_t func_020871d4(const void *object);
extern void func_02088f30(void);
extern void *func_0205681c(uint32_t size);
extern void *func_02054af0(void *node, Obj *owner);
extern void func_02056bc0(void *object, void *node);
extern void func_02056b88(void *object, void *node);

Obj *func_02054b18(Obj *self, uint32_t mode, uint8_t flag) {
    void *node;
    uint32_t a;
    uint32_t b;

    self->flag = flag;
    self->vtbl = &data_020b064c;
    if (self->flag) {
        a = func_020871d4(data_02141510.p4);
        b = func_020871d4(data_0213e098.p4);
        if (a > b) {
            int ok;
            ok = (*(volatile uint16_t *)0x04000208 == 0) ? 1 : 0;
            if (!ok) {
                func_02088f30();
            }
        }
    }
    node = func_0205681c(0x18);
    if (node) {
        node = func_02054af0(node, self);
    }
    self->node = node;
    if (mode == 0) {
        func_02056bc0((char *)data_0213e098.p0 + 0x7c, node);
    } else {
        func_02056b88((char *)data_0213e098.p0 + 0x7c, node);
    }
    return self;
}
