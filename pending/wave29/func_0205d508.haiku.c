#include "ffc/types.h"

extern void func_020095b8(void *buf, uint32_t a, uint32_t b);
extern void func_0205d54c(void *obj, void *buf);
extern void *func_020059cc(void *object);
extern void func_0205d6a0(void *obj, uint32_t b);

void *func_0205d508(uint8_t *p, uint32_t a, uint32_t b) {
    uint32_t buf[3];
    func_020095b8(buf, a, b);
    func_0205d54c(p, buf);
    func_020059cc(buf);
    *(uint8_t *)(p + 0x24) = 0;
    *(uint8_t *)(p + 0x30) = 0;
    *(uint32_t *)(p + 0x10) = 0;
    *(uint8_t *)(p + 0x18) = 0;
    *(uint32_t *)(p + 0x1c) = 0;
    *(uint32_t *)(p + 0x28) = 0;
    *(uint32_t *)(p + 0x34) = 0;
    func_0205d6a0(p, b);
    return p;
}
