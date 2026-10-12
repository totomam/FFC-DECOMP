#include "ffc/types.h"

extern void *func_02056bf4(void *a, void *b);
extern void *func_0203bb94(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov012_021d40d4[];

void func_ov012_021cfd14(uint8_t *self)
{
    void *p;

    if (*(uint32_t *)(self + 0x2ac) != 0) {
        func_02056bf4(self + 0x48, *(void **)(self + 0x2ac));
        p = *(void **)(self + 0x2ac);
        if (p != 0) {
            if (p != 0) {
                ((void (*)(void *))(*(void ***)p)[1])(p);
            }
            *(uint32_t *)(self + 0x2ac) = 0;
        }
    }
    *(void **)(self + 0x2ac) = func_0203bb94(
        ((uint32_t *)(data_ov012_021d40d4 + 0x14 * *(uint32_t *)(self + 0x2d4)))[*(uint32_t *)(self + 0x2dc)], 1, 0, 0);
    p = *(void **)(self + 0x2ac);
    ((void (*)(void *))(*(void ***)p)[10])(p);
    p = *(void **)(self + 0x2ac);
    ((void (*)(void *, uint32_t))(*(void ***)p)[8])(p, 2);
    func_02056bc0(self + 0x48, *(void **)(self + 0x2ac));
}
