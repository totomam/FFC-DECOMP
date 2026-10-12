#include "ffc/types.h"

extern void func_02069694(void *self, void *a, uint32_t b);
extern void func_02069600(void *self, void *a);

void func_ov008_0219dde4(uint8_t *p)
{
    uint32_t i;
    uint32_t j;
    uint32_t *cnt;
    int32_t *cnt2;

    func_02069694(p, *(void **)(p + 0xc0), 4);
    func_02069694(p, *(void **)(p + 0xbc), 2);

    for (i = 0; i < *(uint32_t *)(p + 0xcc); i++) {
        void *obj;
        j = i;
        func_02069600(p, (*(void ***)(p + 0xc8))[i]);
        obj = (*(void ***)(p + 0xc8))[i];
        if (obj != 0) {
            ((void (*)(void *))((void **)(*(void **)obj))[1])(obj);
            (*(void ***)(p + 0xc8))[i] = (void *)j;
        }
    }
    cnt = (uint32_t *)(p + 0xcc);
    cnt2 = (int32_t *)(p + 0xcc);
    *cnt = *cnt - *cnt2;
}
