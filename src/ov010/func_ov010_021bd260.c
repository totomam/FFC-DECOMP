#include "ffc/types.h"

extern void func_ov010_021bd180(void *a, void *b, uint32_t c, void *d);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069404(void *object, uint32_t value);
extern uint32_t data_ov010_021d11e0[];
extern uint32_t data_ov010_021d11f8[];
extern char data_ov010_021d12ac[];

typedef void (*VFn)(void *, uint32_t, uint32_t);

void *func_ov010_021bd260(void *self, void *b)
{
    void *obj;
    VFn fn;

    func_ov010_021bd180(self, b, data_ov010_021d11e0[1], data_ov010_021d11f8);
    *(void **)self = data_ov010_021d12ac;
    func_02069320(self, 2);
    func_02069404(self, 4);
    obj = *(void **)((uint8_t *)self + 0x9c);
    fn = (VFn)(*(void ***)obj)[14];
    fn(obj, 2, 0);
    return self;
}
