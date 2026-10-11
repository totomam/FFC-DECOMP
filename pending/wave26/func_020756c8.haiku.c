#include "ffc/types.h"

extern uint8_t data_020b2634[];
extern uint8_t data_020b2648[];
extern uint32_t data_0213e1f8;
extern void func_02055abc(void *p);
extern void func_02056844(void *p);

void *func_020756c8(void *a)
{
    uint8_t *p = (uint8_t *)a;
    void *obj;

    *(void **)p = data_020b2634;
    *(void **)(p + 0x14) = data_020b2648;
    obj = *(void **)(p + 0x40);
    if (obj != 0) {
        ((void (*)(void *))((void **)*(void **)obj)[1])(obj);
    }
    *(void **)(p + 0x40) = 0;
    data_0213e1f8 = 0;
    func_02055abc(p + 0x14);
    func_02056844(p);
    return p;
}
