#include "ffc/types.h"

struct S {
    int x;
    int idx;
    int val;
    int y;
};

extern int func_ov000_021649dc(struct S *s, int *out);
extern void func_02089334(void);
extern void func_020893bc(struct S *s);
extern const int32_t data_ov001_0218f230[];
extern const uint8_t data_ov001_0218f1fc[];
extern const uint8_t data_ov001_0218f1f4[];
extern const uint8_t data_ov001_0218f204[];

void func_ov001_0218d988(int32_t *a, int32_t *b, int32_t *c, int32_t *d,
                         uint8_t *e, uint8_t *f, int32_t *g)
{
    struct S s;
    int32_t t1[3];
    uint32_t t;
    int32_t cnt;

    if (func_ov000_021649dc(&s, &t1[0]) == 0) {
        func_02089334();
        func_020893bc(&s);
    }

    t = (uint32_t)(s.val + data_ov001_0218f230[s.idx]) - 1;
    *e = data_ov001_0218f1fc[(t >> 3) & 7];
    *f = data_ov001_0218f1f4[t & 7];
    cnt = data_ov001_0218f204[t >> 3] + 1;
    *g = cnt;

    *a = (cnt == 1) ? 0x47 : 0x79;
    *b = (*g == 1) ? 0x79 : 0xc8;
    *c = -2;
    *d = (*g == 1) ? 4 : 7;
}
