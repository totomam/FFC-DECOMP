#include "ffc/types.h"

extern void func_02069600(void *self, void *obj);

void func_ov011_021c8900(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    int i;
    for (i = 0; i < 5; i++) {
        func_02069600(p0, *(void **)(p + i * 4 + 0xfc));
        if (*(void **)(p + i * 4 + 0xfc) != 0) {
            void *obj = *(void **)(p + i * 4 + 0xfc);
            if (obj != 0) {
                ((void (*)(void *))(*(void ***)obj)[1])(obj);
            }
            *(void **)(p + i * 4 + 0xfc) = 0;
        }
    }
    *(uint8_t *)(p + 0x3bc) = 0;
}
