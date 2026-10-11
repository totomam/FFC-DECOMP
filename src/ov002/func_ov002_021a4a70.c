#include "ffc/types.h"

extern void *func_0203b688(void *a);
extern void *func_0205681c(uint32_t size);
extern void *func_ov002_021a0c70(void *obj, void *node, void *b, void *c);
extern void func_02056bc0(void *object, void *node);

void *func_ov002_021a4a70(void *a, void *b, void *c)
{
    void *r4 = func_0203b688(a);
    void *node = func_0205681c(0x20);
    if (node) {
        node = func_ov002_021a0c70(node, *(void **)((uint8_t *)a + 0xf0), b, c);
    }
    func_02056bc0(r4, node);
    return r4;
}
