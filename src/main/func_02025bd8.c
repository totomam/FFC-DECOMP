#include "ffc/types.h"

extern void func_02025c48(void *p);
extern void func_0209d06c(uint32_t a, uint32_t b, uint32_t c, void (*f)(void));
extern void func_02027524(void *p);
extern uint32_t data_020ad854;
extern void func_02025bcc(void);

typedef struct {
    uint32_t vtbl;
    uint8_t pad[0x48 - 4];
    uint32_t f48;
} Obj;

void *func_02025bd8(void *p) {
    Obj *self = (Obj *)p;
    self->vtbl = (uint32_t)&data_020ad854;
    func_02025c48(self);
    if (self->f48 != 0) {
        func_0209d06c(self->f48, 0xc, 8, func_02025bcc);
        self->f48 = 0;
    }
    func_02027524((uint8_t *)self + 0x3c);
    return self;
}
