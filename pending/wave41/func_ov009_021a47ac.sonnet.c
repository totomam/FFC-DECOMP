#include "ffc/types.h"

extern void func_02056bf4(void *p);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov009_021b0bb8;

void func_ov009_021a47ac(uint8_t *self, uint32_t state)
{
    uint8_t buf[0x44];
    void *o;

    if (state > 2) {
        return;
    }
    if (*(void **)(self + 0xbc) != 0) {
        func_02056bf4(self + 0x48);
        o = *(void **)(self + 0xbc);
        if (o != 0) {
            if (o != 0) {
                (*(void (**)(void *))(*(uint32_t *)o + 4))(o);
            }
            *(void **)(self + 0xbc) = 0;
        }
    }
    func_02086ad4(buf, (uint32_t)&data_ov009_021b0bb8, state);
    o = func_0203bb94(buf, 1, 0, 0);
    *(void **)(self + 0xbc) = o;
    (*(void (**)(void *))(*(uint32_t *)o + 0x28))(o);
    o = *(void **)(self + 0xbc);
    (*(void (**)(void *, uint32_t))(*(uint32_t *)o + 0x20))(o, 3);
    func_02056bc0(self + 0x48, *(void **)(self + 0xbc));
}
