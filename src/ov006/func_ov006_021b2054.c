#include "ffc/types.h"

typedef struct { uint8_t id[6]; uint16_t v; uint8_t pad[22]; } E;
typedef struct { uint16_t a; uint16_t flags; uint8_t pad[32]; E e[1]; } B;
extern B *data_ov006_021bc7fc;

uint16_t func_ov006_021b2054(uint8_t *p)
{
    uint16_t i;
    for (i = 1; i < 2; i++) {
        B *b = data_ov006_021bc7fc;
        if (b->flags & (1 << i)) {
            E *e = &b->e[i - 1];
            if (p[0] == e->id[0] && p[1] == e->id[1] && p[2] == e->id[2] &&
                p[3] == e->id[3] && p[4] == e->id[4] && p[5] == e->id[5]) {
                return b->e[i - 1].v;
            }
        }
    }
    return 0;
}
