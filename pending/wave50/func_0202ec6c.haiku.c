#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02030dbc(void *a, void *b, void *c, void *d);
extern void func_02087678(void *x);

typedef struct {
    uint32_t a;
    uint8_t *p;
    uint8_t *q;
    uint8_t flag;
    uint32_t n;
    uint32_t v[3];
    uint32_t pad;
} L;

void func_0202ec6c(uint8_t *self, uint32_t *src) {
    L l;
    l.q = self + 0x4d0;
    l.flag = 1;
    if (l.flag) {
        func_0208763c();
    }
    l.n = 1;
    l.v[0] = src[0];
    l.v[1] = src[1];
    l.v[2] = src[2];
    l.p = self + 0x488;
    func_02030dbc(&l, self + 0x484, &l.p, &l.n);
    if (l.flag) {
        func_02087678(l.q);
    }
}
