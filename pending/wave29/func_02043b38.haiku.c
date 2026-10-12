#include "ffc/types.h"

extern int32_t func_ov003_0216c8ac(uint16_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02164f4c(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);

void func_02043b38(void *this, uint16_t *p)
{
    uint8_t *s = (uint8_t *)this;
    void *node;

    if (s[0x165] == 0) {
        return;
    }
    if (func_ov003_0216c8ac(*p) != 0) {
        return;
    }
    node = func_0205681c(0x88);
    if (node != 0) {
        node = func_ov003_02164f4c(node, s, *(void **)(s + 0x158));
    }
    func_02056bc0(s + 0x14, node);
}
