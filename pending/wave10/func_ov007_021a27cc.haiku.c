#include "ffc/types.h"

extern void *func_02056dd4(void *p);
extern void func_0206047c(void *v);
extern void *func_020059cc(void *object);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov007_021c3de8[];
extern uint8_t data_ov007_021c3e04[];

void *func_ov007_021a27cc(void *self) {
    uint8_t *obj = (uint8_t *)self;
    *(void **)obj = data_ov007_021c3de8;
    *(void **)(obj + 0x80) = data_ov007_021c3e04;
    func_0206047c(((void **)func_02056dd4(self))[8]);
    func_020059cc(obj + 0xe0);
    func_020558d8(obj + 0x80);
    func_02056db0(obj);
    func_02056844(obj);
    return obj;
}
