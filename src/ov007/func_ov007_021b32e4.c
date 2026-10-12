#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void *func_0203b708(uint32_t arg);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b32e4(void *self, uint32_t val)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t v;
    void *node;
    void *tmp;

    if (val == *(uint32_t *)(p + 0xc4)) {
        v = 3;
    } else if (val == *(uint32_t *)(p + 0xc8)) {
        v = 4;
    } else if (val == *(uint32_t *)(p + 0xb8)) {
        v = 1;
    } else if (val == *(uint32_t *)(p + 0xbc)) {
        v = 2;
    } else if (val == *(uint32_t *)(p + 0xc0)) {
        v = 5;
    } else if (val == *(uint32_t *)(p + 0xcc)) {
        v = 6;
    } else if (val == *(uint32_t *)(p + 0xd0)) {
        v = 0;
    } else {
        goto skip;
    }
    *(uint32_t *)(*(void **)(p + 0xd4)) = v;

skip:
    node = func_02056aec(self);
    tmp = func_0203b708(0x1e);
    self = p + 0x14;
    func_02056bc0(self, tmp);
    func_02056bc0(self, node);
}
