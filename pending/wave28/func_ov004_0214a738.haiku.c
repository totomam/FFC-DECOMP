#include "ffc/types.h"

extern void func_ov004_0214e84c(uint32_t a);
extern void *func_02153104(void);
extern void func_02060bf4(uint32_t a);

void func_ov004_0214a738(uint8_t *p)
{
    uint32_t *obj = *(uint32_t **)(p + 0xa0);
    if (obj) {
        if (obj) {
            ((void (*)(uint32_t *))((void **)*obj)[1])(obj);
        }
        *(uint32_t **)(p + 0xa0) = 0;
    }
    func_ov004_0214e84c(*(uint32_t *)(p + 0x88));
    func_02060bf4(((uint32_t *)func_02153104())[7]);
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
