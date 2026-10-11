#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218e840(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void func_ov001_0218eb2c(uint8_t *self)
{
    void *r1;
    void *p = func_0205681c(0x8c);
    r1 = p;
    if (p != 0) {
        r1 = func_ov001_0218e840(p, *(void **)(self + 0x80));
    }
    func_02056bc0(self + 0x14, r1);
}
