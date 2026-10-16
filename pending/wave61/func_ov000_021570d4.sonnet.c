#include "ffc/types.h"
extern int func_02092948(uint32_t a);
typedef struct { uint32_t a; uint32_t b; } E;
typedef struct { uint8_t pad[0x1a74]; E e[32]; } S;
uint32_t func_ov000_021570d4(S *p, uint32_t s) {
    int i;
    for (i = 0; i < 0x20; i++) {
        if (p->e[i].a == 0) break;
        if (func_02092948(s) == 0) return p->e[i].b;
    }
    return 0;
}
