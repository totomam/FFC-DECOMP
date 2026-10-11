#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void func_ov002_0219f8b8(void *p);
extern void func_ov002_0219f8fc(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern uint8_t data_ov002_021d4ec4[];
extern uint8_t data_ov002_021d4ee0[];

void *func_ov002_0219dad8(void *param_0) {
    uint8_t *s = (uint8_t *)param_0;
    *(void **)s = data_ov002_021d4ec4;
    *(void **)(s + 0x80) = data_ov002_021d4ee0;
    func_02056c4c(s + 0x48);
    func_02056c4c(s + 0x14);
    func_ov002_0219f8b8(s + 0x120);
    func_ov002_0219f8fc(s + 0x114);
    func_020558d8(s + 0x80);
    func_02056db0(s);
    return s;
}
