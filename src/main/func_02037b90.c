#include "ffc/types.h"

extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void (*f)(void));
extern void *func_020059cc(void *object);
extern void *func_02035fd0(void *object);

void *func_02037b90(uint8_t *p) {
    func_0209d02c(p + 0x1c, 3, 0x60, (void (*)(void))func_02035fd0);
    func_020059cc(p);
    return p;
}
