#include "ffc/types.h"

struct Elem {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
};

struct Outer {
    uint8_t pad[0x14];
    struct Elem *arr;
};

int func_020711ac(struct Outer *p, int idx) {
    if (p->arr[idx].f8) {
        return 1;
    }
    return 0;
}
