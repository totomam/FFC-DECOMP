#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef struct { uint8_t pad[0x10]; Pair v; } Blob;

extern void func_02056c9c(void *p, int x);
extern uint8_t data_020ae9e0[];
extern Blob data_020ae77c;

void *func_020396c4(void *a) {
    uint8_t *p = (uint8_t *)a;
    func_02056c9c(a, 0);
    *(void **)p = data_020ae9e0;
    *(Pair *)(p + 0x80) = data_020ae77c.v;
    return a;
}
