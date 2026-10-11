#include "ffc/types.h"

extern void func_ov000_021653f4(uint32_t x);
extern void func_ov000_02165428(uint32_t x);
extern void func_ov001_02187484(void *p);
extern void func_ov001_02187450(void *p);

void func_ov001_021874c4(void *self) {
    uint8_t *p = (uint8_t *)self;
    uint32_t v;
    if (*(uint32_t *)(p + 0x7c) != 0) {
        func_ov000_021653f4(*(uint32_t *)(p + 0x7c));
    }
    *(uint32_t *)(p + 0x80) = 0;
    *(uint32_t *)(p + 0x7c) = 0;
    v = *(uint32_t *)(p + 0x6b4);
    if (v != 0xffffffffu) {
        func_ov000_02165428(v);
    }
    *(int32_t *)(p + 0x6b4) = -1;
    *(uint32_t *)(p + 0) = 1;
    func_ov001_02187484(p);
    *(int32_t *)(p + 0x484) = -1;
    func_ov001_02187450(p);
}
