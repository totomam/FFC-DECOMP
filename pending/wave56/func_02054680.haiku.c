#include "ffc/types.h"

extern uint8_t data_020b0638[];
extern uint32_t data_0213e098[];
extern uint32_t data_02141510[];
extern uint32_t func_020871d4(const void *object);
extern void func_02088f30(void);
extern void *func_0205681c(uint32_t size);
extern void *func_02054658(void *object, void *value_14);
extern void func_02056bc0(void *object, void *node);
extern void func_02056b88(void *object, void *node);

typedef struct {
    uint32_t vt;
    void *node;
    uint8_t flag;
} Obj;

void *func_02054680(void *self, uint32_t mode, uint8_t flag)
{
    Obj *o = (Obj *)self;
    void *node;

    o->vt = (uint32_t)data_020b0638;
    o->flag = flag;
    if (o->flag) {
        if (func_020871d4((const void *)data_02141510[1]) > func_020871d4((const void *)data_0213e098[1])) {
            uint32_t ime_zero = (*(volatile uint16_t *)0x04000208 == 0);
            if (!ime_zero) {
                func_02088f30();
            }
        }
    }

    node = func_0205681c(0x18);
    if (node != 0) {
        node = func_02054658(node, o);
    }
    o->node = node;

    switch (mode) {
    case 0:
        func_02056bc0((void *)(data_0213e098[0] + 0x14), node);
        break;
    default:
        func_02056b88((void *)(data_0213e098[0] + 0x14), node);
        break;
    case 2:
        func_02056bc0((void *)(data_0213e098[0] + 0xb0), node);
        break;
    case 3:
        func_02056b88((void *)(data_0213e098[0] + 0xb0), node);
        break;
    }

    return o;
}
