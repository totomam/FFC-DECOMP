#include "ffc/types.h"

extern void *func_02035fd0(void *object);
extern void func_02056db0(void *object);

void *func_0203b158(uint8_t *p) {
    func_02035fd0(p + 0x15c);
    func_02035fd0(p + 0xfc);
    func_02035fd0(p + 0x90);
    func_02056db0(p);
    return p;
}
