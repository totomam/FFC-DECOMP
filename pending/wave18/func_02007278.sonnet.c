#include "ffc/types.h"
typedef struct { int32_t pad[5]; int32_t a, b, c, d, e; } E;
void func_02007278(E *base, int32_t idx) {
    if (idx > 1 && idx < 0x12) {
        E *p = (E*)((uint8_t*)base + (idx<<2) + (idx<<4));
        p->a = 0; p->b = 0; p->c = 0; p->e = -1; p->d = -1;
    }
}
