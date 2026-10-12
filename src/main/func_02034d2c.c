#include "ffc/types.h"

typedef struct {
    uint8_t pad[0xc];
    uint32_t flags;
} Obj;

void func_02034d2c(uint8_t *p) {
    uint32_t i;
    int32_t n = *(int32_t *)(p + 0xe0);
    for (i = 0; i < (uint32_t)n; i++) {
        Obj *o = *(Obj **)(p + 0x8c + i * 4);
        o->flags &= ~0xffu;
        n = *(int32_t *)(p + 0xe0);
    }
}
