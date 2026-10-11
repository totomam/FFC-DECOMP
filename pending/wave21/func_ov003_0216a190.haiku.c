#include "ffc/types.h"

extern uint8_t data_ov003_0217b094[];
extern void func_0206ab18(void *object);
extern void *func_020059cc(void *object);
extern void func_0206aaf0(void *object);
extern void func_02056844(void *object);

void *func_ov003_0216a190(void *object)
{
    *(void **)object = data_ov003_0217b094;
    func_0206ab18(object);
    func_020059cc((uint8_t *)object + 0x40);
    func_0206aaf0(object);
    func_02056844(object);
    return object;
}
