#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_020703cc(void *self, Pair v);

void func_020704f8(void *p) {
    uint8_t *b = (uint8_t *)p;
    while (*(uint32_t *)(b + 0x58) != 0) {
        func_020703cc(p, *(Pair *)(*(uint8_t **)(b + 0x64) + 0xc));
    }
}
