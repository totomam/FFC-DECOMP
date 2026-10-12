#include "ffc/types.h"

extern void func_02069600(void *self, void *obj);

void func_ov010_021bf10c(void *self)
{
    uint32_t i;
    uint8_t *p = (uint8_t *)self;
    for (i = 0; i < *(uint32_t *)(p + 0x10C); i++) {
        void *obj;
        func_02069600(self, ((void **)*(void ***)(p + 0x108))[i]);
        obj = ((void **)*(void ***)(p + 0x108))[i];
        if (obj != 0) {
            if (obj != 0) {
                ((void (*)(void *))((void **)*(void **)obj)[1])(obj);
            }
            ((void **)*(void ***)(p + 0x108))[i] = 0;
        }
    }
}
