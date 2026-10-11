#include "ffc/types.h"

extern void func_02056858(uint32_t value);
extern void *func_020059cc(void *object);

void *func_02052988(uint8_t *self) {
    func_02056858(*(uint32_t *)(self + 0x14));
    func_02056858(*(uint32_t *)(self + 0x18));
    func_02056858(*(uint32_t *)(self + 0x1c));
    func_020059cc(self + 0x38);
    return self;
}
