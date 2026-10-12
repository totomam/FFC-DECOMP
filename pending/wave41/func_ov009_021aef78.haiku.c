#include "ffc/types.h"

extern void func_02036b54(uint32_t a, uint32_t b, uint32_t c);
extern void func_0201f1a8(uint32_t a, uint8_t b, uint32_t c);
extern uint32_t data_020b93b8;

void func_ov009_021aef78(char *self, uint32_t param)
{
    uint8_t i;
    for (i = 0; i < 6; i++) {
        void **obj = *(void ***)(*(char **)(self + 0xc4 + i * 4) + 0x98);
        void **vt = (void **)*obj;
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 2, 0);
    }
    {
        void **obj = *(void ***)(*(char **)(self + 0xc4 + param * 4) + 0x98);
        void **vt = (void **)*obj;
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 3, 0);
    }
    func_02036b54(*(uint32_t *)(self + 0xec), *(uint32_t *)(self + 0xf4), param);
    func_0201f1a8(data_020b93b8, *(uint8_t *)(self + 0xf0), *(uint32_t *)(self + 0xec));
}
