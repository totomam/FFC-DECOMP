#include "ffc/types.h"

extern void func_0207e890(void *object);
extern void func_0207f4bc(void *obj, int a, int b);

void func_0207f81c(void *object) {
    uint8_t buf[0x48];

    func_0207e890(buf);
    *(void **)(buf + 8) = object;
    func_0207f4bc(buf, 12, 0);
}
