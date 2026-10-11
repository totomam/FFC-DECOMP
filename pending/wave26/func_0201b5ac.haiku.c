#include "ffc/types.h"

extern void func_0201a3c8(void *buf);
extern void func_0201b510(void *obj);
extern void func_0201b4ac(void *obj);
extern void func_0201a3fc(void *buf);

void func_0201b5ac(void *obj) {
    uint8_t buf[0x14];
    if (*(uint32_t *)((uint8_t *)obj + 0x10) != 0) {
        buf[1] = 0;
        func_0201a3c8(buf);
        func_0201b510(obj);
        func_0201b4ac(obj);
        func_0201a3fc(buf);
    }
}
