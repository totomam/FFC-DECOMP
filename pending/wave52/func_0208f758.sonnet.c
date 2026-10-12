#include "ffc/types.h"

extern int func_0208f6b8(void *p, uint32_t a, uint32_t b);

typedef struct S {
    uint32_t w0;
    uint32_t p0 : 2;
    uint32_t x : 3;
    uint32_t p1 : 2;
    uint32_t y : 3;
    uint32_t p2 : 22;
    uint32_t m : 3;
    uint32_t p3 : 29;
    uint8_t c;
    uint8_t d;
    uint8_t pad[4];
    uint8_t data[0x12];
    uint8_t *ptr;
    int cnt;
    int pad2;
    int v;
} S;

int func_0208f758(S *s) {
    int m;
    int r;
    s->cnt = 0;
    if (s->d != 0 || s->y == 0) return ~0;
    m = s->m;
    if (m == 1 || !(s->x & 1)) {
        s->d = 1;
        s->cnt = 0;
        return ~0;
    }
    if (m >= 3) {
        s->m = m - 1;
        if (m == 3) s->cnt = s->v;
        return s->data[m - 3];
    }
    s->m = 2;
    r = func_0208f6b8(s, 0, 0);
    if (r != 0 || s->cnt == 0) {
        if (r == 1) s->d = 1;
        else { s->m = 0; s->c = 1; }
        s->cnt = 0;
        return ~0;
    } else {
        uint8_t *q = s->ptr;
        s->cnt = s->cnt - 1;
        s->ptr = q + 1;
        return *q;
    }
}
