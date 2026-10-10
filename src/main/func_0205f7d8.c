#include "ffc/types.h"

extern uint8_t data_020b10c4[];
extern void func_02056858(void *p);
extern void func_0209d06c(void *p, uint32_t a, uint32_t b, void *fn);
extern void func_0205f750(void);
extern void func_0205ff30(void *a, void *b);

void *func_0205f7d8(void *p0)
{
    uint8_t *s = (uint8_t *)p0;
    void *obj;

    *(uint8_t **)s = data_020b10c4;
    obj = *(void **)(s + 0x28);
    if (obj != 0) {
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[1])(obj);
    }
    func_02056858(*(void **)(s + 0x30));
    func_0209d06c(*(void **)(s + 0x2c), 0x28, 8, (void *)func_0205f750);
    func_0205ff30(*(void **)(*(uint8_t **)(*(uint8_t **)(s + 0x14) + 0x18) + 0x14), *(void **)(s + 0x24));
    return p0;
}
