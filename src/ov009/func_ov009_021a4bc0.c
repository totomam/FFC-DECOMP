#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov009_02199b9c(void);
extern void func_ov009_0219a014(void);
extern void func_02056bc0(void *object, void *node);

void func_ov009_021a4bc0(uint8_t *self)
{
    void *r = func_0205681c(0xac);
    if (r != 0) {
        r = func_ov009_02199b9c();
    }
    *(void **)(self + 0x170) = r;
    func_ov009_0219a014();
    func_02056bc0(self + 0x48, *(void **)(self + 0x170));
}
