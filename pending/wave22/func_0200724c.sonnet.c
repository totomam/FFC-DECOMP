#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d, e; } E;
typedef struct { uint8_t pad[0x20]; E e[1]; } S;
extern void func_02007278(S *p, int i);
void func_0200724c(S *p, int i) {
    if (i > 1 && i < 0x12) {
        uint32_t a = p->e[i].a;
        uint32_t b = p->e[i].b;
        p->e[a].b = b;
        p->e[b].a = a;
        func_02007278(p, i);
    }
}
