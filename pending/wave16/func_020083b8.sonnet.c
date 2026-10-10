#include "ffc/types.h"
typedef struct { int16_t prev, next; int16_t pad[6]; } E;
typedef struct { uint8_t hdr[0x10]; E e[1]; } S;

void func_020083b8(S *p, int32_t a, int32_t idx) {

    p->e[p->e[idx].prev].next = (int16_t)a;
    p->e[a].prev = p->e[idx].prev;
    p->e[a].next = idx;
    p->e[idx].prev = (int16_t)a;
}
