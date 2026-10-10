#include "ffc/types.h"

extern void *func_02056dd4(void *p);
extern void func_0206047c(void *v);
extern void *func_ov007_021a8f78(void *object);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov007_021c466c[];
extern uint8_t data_ov007_021c4688[];

void *func_ov007_021a7a0c(void *self) {
    uint8_t *obj = (uint8_t *)self;
    *(void **)obj = data_ov007_021c466c;
    *(void **)(obj + 0x80) = data_ov007_021c4688;
    func_0206047c(((void **)func_02056dd4(self))[8]);
    func_ov007_021a8f78(obj + 0xf8);
    func_020558d8(obj + 0x80);
    func_02056db0(obj);
    func_02056844(obj);
    return obj;
}
