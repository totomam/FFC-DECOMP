#include "ffc/types.h"

typedef struct { uint8_t c; } Fill;
extern void func_0206f22c(uint32_t *p, uint32_t n, Fill x);
typedef struct { uint8_t *cur; uint32_t b; } It;

static inline int8_t rd(It *i) { return *i->cur++; }

void func_0206e38c(uint32_t *p, It f, It l) {
    It a, b;
    int8_t buf[4];
    int8_t *d;
    Fill *z;
    int n = l.cur - f.cur;
    if (n == 0) return;
    z = (Fill *)&buf[3];
    z->c = 0;
    func_0206f22c(p, n, *z);
    d = (int8_t *)(p[0] + p[1]);
    b = l; a = f;
    while (a.cur != b.cur) {
        buf[2] = rd(&a);
        *d++ = buf[2];
    }
    p[1] += n;
}
