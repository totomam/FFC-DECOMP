#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Elem;

typedef struct {
    uint8_t pad[0x70];
    Elem cur;
    Elem nxt;
} Pair;

void func_ov000_02146ce8(uint8_t *p)
{
    int i;
    for (i = 0; i < 3; i++) {
        Pair *q = (Pair *)(p + i * 12);
        if (q->cur.a == 0) {
            q->cur = q->nxt;
            q->nxt.a = 0;
        }
    }
}
