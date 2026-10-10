#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203b708(int);
extern void func_02056bc0(void *object, void *node);

void func_ov001_0218eae8(void *self, void *node)
{
    void *a;
    void *b;

    if (node != *(void **)((uint8_t *)self + 0xb8)) {
        return;
    }
    a = func_02056aec();
    b = func_0203b708(0x1e);
    self = (uint8_t *)self + 0x14;
    func_02056bc0(self, b);
    func_02056bc0(self, a);
}
