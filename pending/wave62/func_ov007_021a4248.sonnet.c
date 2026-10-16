#include "ffc/types.h"
extern uint8_t data_ov007_021c3dc0[];
extern uint8_t data_ov007_021c3ddc[];
extern uint8_t *func_02056dd4(void *);
extern void func_0206047c(uint32_t);
extern void func_020558d8(void *);
extern void func_02056db0(void *);
extern void *func_02056844(void *);
void *func_ov007_021a4248(uint8_t *p) {
    *(void **)p = data_ov007_021c3dc0;
    *(void **)(p + 0x80) = data_ov007_021c3ddc;
    func_0206047c(*(uint32_t *)(func_02056dd4(p) + 0x20));
    func_020558d8(p + 0x80);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
