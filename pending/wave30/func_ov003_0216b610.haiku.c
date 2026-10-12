#include "ffc/types.h"

extern void *func_0203b688(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_021642a0(void *a, void *b, uint32_t c);
extern void func_02056bc0(void *object, void *node);

void *func_ov003_0216b610(void *r0, void *r1)
{
    uint8_t *p = (uint8_t *)r1;
    void *obj = func_0203b688(r0);
    uint32_t i;
    for (i = 0; i < *(uint32_t *)(p + 4); i++) {
        void *node = func_0205681c(0x1c);
        if (node != 0) {
            uint32_t val = ((uint32_t *)(p + *(uint32_t *)(p + 8)))[i];
            node = func_ov003_021642a0(node, r0, val);
        }
        func_02056bc0(obj, node);
    }
    return obj;
}
