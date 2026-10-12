#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055914(void *p);
extern void *func_0203bfa4(uint32_t id);
extern void *func_0203bfb8(uint32_t id);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020ab2b8[];
extern uint32_t data_ov002_021d47d8[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov002_021961f4(void *p)
{
    uint8_t *s = (uint8_t *)p;
    uint32_t *o;

    if (s[0x358] != 0) {
        void *raw = func_0205681c(0x10);
        o = (uint32_t *)raw;
        if (o != 0) {
            o[2] = 0;
            o[3] = 0x100e6;
            o[0] = (uint32_t)data_020ab2b8;
        }
        func_02055914((void *)(*(uint32_t *)(s + 0x3d0) + 0x80));
    }

    if (*(uint32_t *)(s + 0x388) != 1) {
        func_02056bc0(s + 0x48, func_0203bfa4(0x1e));
        func_02056bc0(s + 0x48, func_0203bfb8(0x1e));
    }

    *(Pair *)(s + 0x3c0) = *(Pair *)data_ov002_021d47d8;
}
