#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_02056bf4(void *p);
extern void func_ov003_021516d4(void *p, uint32_t v);

void func_ov003_0215183c(uint8_t *p)
{
    uint32_t v = func_0201c9ac(data_020b93b8, 0x48);
    uint32_t *obj;
    if (*(uint32_t *)(p + 0xa0) == v) {
        return;
    }
    if (*(uint32_t **)(p + 0x84) != 0) {
        func_02056bf4(p + 0x48);
        obj = *(uint32_t **)(p + 0x84);
        if (obj != 0) {
            if (obj != 0) {
                ((void (*)(void *))((uint32_t *)obj[0])[1])(obj);
            }
        }
        *(uint32_t *)(p + 0x84) = 0;
    }
    func_ov003_021516d4(p, *(uint32_t *)(p + 0x9c));
}
