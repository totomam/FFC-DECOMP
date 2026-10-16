#include "ffc/types.h"
extern uint32_t data_ov007_021c3e38;
extern uint32_t data_ov007_021c3e54;
extern uint8_t *func_02056dd4(void *p);
extern void func_0206047c(uint32_t v);
extern void func_ov007_021a6c80(void *p);
extern void func_ov007_021a6cb4(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
void *func_ov007_021a4990(uint8_t *p) {
    *(uint32_t **)p = &data_ov007_021c3e38;
    *(uint32_t **)(p + 0x80) = &data_ov007_021c3e54;
    func_0206047c(*(uint32_t *)(func_02056dd4(p) + 0x20));
    func_ov007_021a6c80(p + 0x128);
    func_ov007_021a6cb4(p + 0x11c);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
