#include "ffc/types.h"

extern char data_ov007_021c4dac[];
extern void func_02056844(uint32_t);
extern void func_ov001_0218e0a8(void *);

typedef struct Obj {
    void *vtbl;
    char pad[0xbc - 4];
    uint32_t field98;
} Obj;

void *func_ov007_021aae54(Obj *self)
{
    self->vtbl = data_ov007_021c4dac;
    if (self->field98 != 0) {
        func_02056844(self->field98);
        self->field98 = 0;
    }
    func_ov001_0218e0a8(self);
    return self;
}
