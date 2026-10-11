#include "ffc/types.h"

extern void func_0204dec8(void);
extern void func_0204ded0(void *p);

int func_0204def8(void *a, uint8_t *b) {
    func_0204dec8();
    *(int32_t *)(b + 0x8048) -= 1;
    func_0204ded0(a);
    return *(int32_t *)(b + 0x8048);
}
