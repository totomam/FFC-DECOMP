#include "ffc/types.h"

extern int func_ov012_021cff98(void *p);
extern void *func_020655dc(void *obj, int a, int b);
extern void func_02056bc0(void *object, void *node);

void func_ov012_021d11ac(uint8_t *self, int flag)
{
    uint8_t *p;

    func_ov012_021cff98(*(void **)(self + 0xc0));
    if (flag) {
        p = *(uint8_t **)(self + 0xc0);
        if (p[0x33c] == 0 && (int8_t)p[0x338] <= 0) {
            func_02056bc0(self + 0x14, func_020655dc(*(void **)(self + 0xc4), 5, 1));
            return;
        }
        func_02056bc0(self + 0x14, func_020655dc(*(void **)(self + 0xc4), 6, 1));
        return;
    }
    p = *(uint8_t **)(self + 0xc0);
    if (p[0x33c] == 0 && (int8_t)p[0x338] <= 0) {
        func_02056bc0(self + 0x14, func_020655dc(*(void **)(self + 0xc4), 3, 1));
        return;
    }
    func_02056bc0(self + 0x14, func_020655dc(*(void **)(self + 0xc4), 4, 1));
}
