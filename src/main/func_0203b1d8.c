#include "ffc/types.h"

extern void *func_02035fd0(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_0203b1d8(void *p) {
    func_02035fd0((uint8_t *)p + 0x15c);
    func_02035fd0((uint8_t *)p + 0xfc);
    func_02035fd0((uint8_t *)p + 0x90);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
