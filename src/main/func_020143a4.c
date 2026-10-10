#include "ffc/types.h"

extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void (*f)(void));
extern void func_02056844(void *p);

void *func_020143a4(uint8_t *p) {
    func_0209d02c(p + 0x1c, 4, 0x30, (void (*)(void))0x021c9055);
    func_02056844(p);
    return p;
}
