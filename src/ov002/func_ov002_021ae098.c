#include "ffc/types.h"

typedef struct {
    int32_t v[6];
} Tbl;

extern Tbl data_ov002_021d3b90;

extern int32_t func_ov002_021ae68c(void *p);
extern int32_t func_ov002_021ac9f0(int32_t a, int32_t b);
extern int32_t func_ov002_021ae734(void *p);
extern int32_t func_ov002_0219b858(int32_t v);
extern int32_t func_ov002_021ae5fc(void *p);
extern int32_t func_0208f694(int32_t value);
extern int32_t func_ov002_021ae698(void *p);
extern uint32_t func_ov002_021ac9d8(uint32_t one_based_index, uint32_t row);
extern void func_ov002_021ae088(void *p);

void func_ov002_021ae098(void *self, void *a)
{
    uint32_t *w = (uint32_t *)self;
    Tbl t;
    int32_t x, y, p, q, r6, r7, ip, base, v1, val;

    if (a != 0) {
        x = func_ov002_021ae68c(self);
        y = func_ov002_021ae68c(a);
        w[0x71] = func_ov002_021ac9f0(x, y);

        p = func_ov002_0219b858(func_ov002_021ae734(self));
        q = func_ov002_0219b858(func_ov002_021ae734(a));
        r6 = (p == q) ? 1 : 0;

        r7 = func_ov002_021ae5fc(a);
        ip = func_ov002_021ae5fc(self);

        t = data_ov002_021d3b90;
        base = t.v[ip];
        if (r6 != 0) {
            v1 = t.v[r7];
        } else {
            v1 = 7 - t.v[r7];
        }
        val = func_0208f694(base - v1);
        w[0x73] = func_ov002_021ac9d8(func_ov002_021ae698(a), val);
    } else {
        func_ov002_021ae088(self);
    }
}
