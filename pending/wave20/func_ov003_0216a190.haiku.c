#include "ffc/types.h"

extern void func_0206ab18(void *obj);
extern void *func_020059cc(void *object);
extern void func_0206aaf0(void *obj);
extern void func_02056844(void *obj);
extern uint32_t data_ov003_0217b094;

void *func_ov003_0216a190(void *p) {
    *(void **)p = (void *)&data_ov003_0217b094;
    func_0206ab18(p);
    func_020059cc((uint8_t *)p + 0x40);
    func_0206aaf0(p);
    func_02056844(p);
    return p;
}
