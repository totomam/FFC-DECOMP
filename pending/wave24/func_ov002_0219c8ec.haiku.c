#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02055a5c(void *p);
extern void *func_020059cc(void *object);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);

void *func_ov002_0219c8ec(uint8_t *p) {
    func_0200d5ec(p + 0x10C);
    func_02055a5c(p + 0xE0);
    func_020059cc(p + 0xD0);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    return p;
}
