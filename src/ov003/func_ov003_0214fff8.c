#include "ffc/types.h"

extern uint8_t data_ov003_02179b50[];
extern void *func_02056dd4(void *p);
extern void func_0205ffd0(void *a, uint32_t b);
extern void func_ov003_02151074(void *p);
extern void func_02056db0(void *p);

void *func_ov003_0214fff8(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    *(void **)obj = data_ov003_02179b50;
    {
        uint8_t *t = (uint8_t *)func_02056dd4(obj);
        void *a = *(void **)(t + 0x18);
        a = *(void **)((uint8_t *)a + 0x18);
        func_0205ffd0(a, *(uint32_t *)(obj + 0xa8));
    }
    func_ov003_02151074(obj + 0x4bc);
    func_02056db0(obj);
    return obj;
}
