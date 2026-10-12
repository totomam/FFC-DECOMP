#include "ffc/types.h"

extern void func_0207e890(void *object);
extern int func_0207e9c0(void *object, void *p, int flag);
extern uint32_t func_0207ea30(void *object);
extern void func_0207ea0c(void *object);
extern void func_0207eab0(void *object, uint32_t v, uint32_t kind);

int func_ov006_0219af04(void *a, uint32_t b, int c)
{
    uint8_t buf[0x48];
    uint32_t kind;

    if (c) {
        kind = 0x200;
    } else {
        kind = 0x20;
    }
    if (c) {
        b += 0x20;
    }
    if (a == 0) {
        return 0;
    }
    func_0207e890(buf);
    if (func_0207e9c0(buf, a, 1) == 0) {
        return 0;
    }
    if (func_0207ea30(buf) != kind) {
        func_0207ea0c(buf);
        return 0;
    }
    func_0207eab0(buf, b, kind);
    func_0207ea0c(buf);
    return 1;
}
