#include "ffc/types.h"

extern void *func_0203c304(void *p);
extern void func_020591f4(void *p, uint32_t v);
extern void func_02056db0(void *p);
extern uint8_t data_ov003_0217bb40[];

void *func_ov003_0217708c(void *p)
{
    *(void **)p = data_ov003_0217bb40;
    {
        void *r = func_0203c304(data_ov003_0217bb40);
        func_020591f4(r, 0);
    }
    func_02056db0(p);
    return p;
}
