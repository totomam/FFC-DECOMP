#include "ffc/types.h"

extern void *func_0203c304(void);
extern void func_020591f4(void *a, int b);
extern void func_02056db0(void *a);
extern void func_02056844(void *a);
extern uint8_t data_ov003_0217bb40[];

void *func_ov003_021770ac(void *p)
{
    void **obj = (void **)p;
    *obj = data_ov003_0217bb40;
    func_020591f4(func_0203c304(), 0);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
