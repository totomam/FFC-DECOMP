#include "ffc/types.h"

extern void *func_02035e30(void *object);
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *object);

void *func_02048b58(void *object) {
    uint8_t *r4 = (uint8_t *)object + 0xf0;
    func_02035e30(r4 + 0xd4);
    func_02035fd0(r4 + 0x74);
    r4 += 0x14;
    func_02035fd0(r4);
    func_02056db0(object);
    return object;
}
