#include "ffc/types.h"

extern void func_02057be4(void *a, void *b, uint32_t c, uint32_t d);
extern uint8_t data_020b112c[];

typedef struct {
    uint32_t w;
    uint16_t h;
    uint16_t pad;
} Ent;

void *func_0205fe8c(void **p, Ent *q, uint32_t c) {
    uint32_t i;
    func_02057be4(p, q, c, 0x14);
    *p = data_020b112c;
    for (i = 0; i < 0x80; i++) {
        q[i].w = 0;
        q[i].h = 0;
        q[i].w = (q[i].w & 0xfffffcff) | 0x200;
    }
    return p;
}
