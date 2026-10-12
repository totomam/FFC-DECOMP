#include "ffc/types.h"

extern void func_02069694(void *self, void *arg, uint32_t n);
extern void func_02069600(void *self, void *arg);

void func_ov008_021a3598(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint16_t i;

    func_02069694(p0, *(void **)(p + 0xd0), 4);
    func_02069694(p0, *(void **)(p + 0xcc), 2);

    for (i = 0; i < *(uint32_t *)(p + 0xdc); i++) {
        void *obj;
        func_02069600(p0, (*(void ***)(p + 0xd8))[i]);
        obj = (*(void ***)(p + 0xd8))[i];
        if (obj != 0) {
            if (obj != 0) {
                ((void (*)(void *))((void **)(*(void **)obj))[1])(obj);
            }
            (*(void ***)(p + 0xd8))[i] = 0;
        }
    }

    {
        uint32_t x = *(volatile uint32_t *)(p + 0xdc);
        uint32_t y = *(volatile uint32_t *)(p + 0xdc);
        *(uint32_t *)(p + 0xdc) = y - x;
    }
}
