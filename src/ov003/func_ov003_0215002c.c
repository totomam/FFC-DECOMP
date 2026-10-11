#include "ffc/types.h"

extern uint32_t data_ov003_02179b50[];
extern void *func_02056dd4(void *p);
extern void func_0205ffd0(void *p, uint32_t v);
extern void func_ov003_02151074(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov003_0215002c(void *p)
{
    uint8_t *s = (uint8_t *)p;
    void *x;

    *(uint32_t **)s = data_ov003_02179b50;
    x = func_02056dd4(s);
    func_0205ffd0(*(void **)((uint8_t *)*(void **)((uint8_t *)x + 0x18) + 0x18),
                  *(uint32_t *)(s + 0xa8));
    func_ov003_02151074(s + 0x4bc);
    func_02056db0(s);
    func_02056844(s);
    return s;
}
