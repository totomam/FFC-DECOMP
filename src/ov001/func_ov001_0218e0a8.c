#include "ffc/types.h"

extern char data_ov001_021949c0[];
extern void func_02056844(uint32_t);
extern void func_02056db0(void *);

typedef struct Obj {
    void *vtbl;
    char pad[0x98 - 4];
    uint32_t field98;
} Obj;

void *func_ov001_0218e0a8(Obj *self)
{
    self->vtbl = data_ov001_021949c0;
    if (self->field98 != 0) {
        func_02056844(self->field98);
        self->field98 = 0;
    }
    func_02056db0(self);
    return self;
}
