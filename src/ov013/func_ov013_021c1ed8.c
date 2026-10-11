#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_ov013_021c1eac(void *object);
extern void func_020558d8(void *object);
extern void func_02056db0(void *object);

void *func_ov013_021c1ed8(uint8_t *p) {
    func_020059cc(p + 0x104);
    func_ov013_021c1eac(p + 0xf4);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    return p;
}
