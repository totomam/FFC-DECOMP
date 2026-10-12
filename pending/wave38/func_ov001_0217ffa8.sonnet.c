#include "ffc/types.h"

extern void func_ov001_02181ddc(uint32_t *);

typedef struct Obj Obj;
typedef void (*CbFn)(Obj *, uint32_t, uint32_t);

struct Obj {
    uint32_t pad0[2];
    uint32_t *sub;
    uint32_t pad1[6];
    uint32_t cnt24;
    uint32_t pad2[1];
    CbFn cb;
};

uint32_t func_ov001_0217ffa8(Obj *p, uint32_t a, uint32_t b)
{
    uint32_t *s;
    CbFn f;

    if (p == 0) {
        return 1;
    }
    if (p->cb == 0) {
        return 1;
    }
    if (b == 0 || a == 0) {
        a = 0;
        b = 0;
    }
    p->cnt24++;
    s = p->sub;
    s[7]++;
    f = p->cb;
    f(p, a, b);
    p->cnt24--;
    p->sub[7]--;
    s = p->sub;
    if (s[5] != 0 && s[7] == 0) {
        func_ov001_02181ddc(s);
        return 0;
    }
    return 1;
}
