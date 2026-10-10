#include "ffc/types.h"

extern char data_ov007_021c58e8[];
extern void func_02056844(uint32_t);
extern void func_ov001_0218e0a8(void *);

typedef struct Obj {
    void *vtbl;
    char pad[0xb8 - 4];
    uint32_t field98;
} Obj;

void *func_ov007_021afe48(Obj *self)
{
    self->vtbl = data_ov007_021c58e8;
    if (self->field98 != 0) {
        func_02056844(self->field98);
        self->field98 = 0;
    }
    func_ov001_0218e0a8(self);
    return self;
}
