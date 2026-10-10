#include "ffc/types.h"

extern uint8_t data_020b1854[];
extern void func_0205ff30(void *a, uint32_t b);
extern void func_0205fd04(void *a, uint32_t b);
extern void func_0205847c(void *a, uint32_t b);
extern void *func_02053d78(void *object);
extern void func_02067f9c(void *object);
extern void func_02065f84(void *object);
extern void func_02056844(void *object);

void *func_020666fc(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    uint8_t *a, *b;

    *(uint8_t **)p = data_020b1854;
    func_0205ff30(*(void **)(p + 0x20), *(uint32_t *)(p + 0x4c));

    a = *(uint8_t **)(p + 0x1c);
    b = *(uint8_t **)(a + 0x18);
    func_0205fd04(*(void **)(b + 8), *(uint32_t *)(p + 0x48));

    a = *(uint8_t **)(p + 0x1c);
    b = *(uint8_t **)(a + 0x18);
    func_0205847c(*(void **)(b + 0xc), *(uint32_t *)(p + 0x44));

    func_02053d78(p + 0x38);
    func_02067f9c(p + 0x2c);
    func_02065f84(obj);
    func_02056844(obj);
    return obj;
}
