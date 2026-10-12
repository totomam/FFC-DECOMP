#include "ffc/types.h"

typedef struct Loc {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Loc;

extern uint32_t func_ov000_02168768(uint32_t v);
extern void *func_ov000_0216876c(void *obj, int idx);
extern void func_ov000_02168784(void *obj, Loc *l);
extern void func_ov000_02168738(void *obj);
extern void *func_ov000_021686f4(uint32_t size, uint32_t count, int zero);
extern uint32_t func_ov001_021738e0(Loc *l);
extern void func_ov001_0217393c(void *p);
extern uint32_t func_ov001_021738bc(void *c);

int func_ov001_0217395c(void *self)
{
    void **v = (void **)self;
    uint32_t *cfg;
    Loc L;
    int i;
    int j;
    int n;
    void *p;

    if (v[0x59] == 0) {
        return 0;
    }
    cfg = (uint32_t *)v[0x59];
    v[0x5b] = 0;
    v[0x5c] = 0;
    v[0x5d] = 0;
    v[0x61] = 0;
    v[0x5e] = (void *)cfg[1];
    v[0x5f] = (void *)cfg[2];

    n = (int)func_ov000_02168768(*(uint32_t *)v[0x59]);
    p = func_ov000_021686f4(0x10, n, 0);
    v[0x5a] = p;
    if (p == 0) {
        return 0;
    }

    if (n > 0) {
        for (i = 0; i < n; i++) {
            L.a = (uint32_t)func_ov000_0216876c(*(void **)v[0x59], i);
            L.b = 0;
            L.c = 0;
            L.d = 0;
            if (func_ov001_021738e0(&L) != 0) {
                func_ov000_02168784(v[0x5a], &L);
            } else {
                for (j = i - 1; j >= 0; j--) {
                    func_ov001_0217393c(func_ov000_0216876c(v[0x5a], j));
                }
                func_ov000_02168738(v[0x5a]);
                v[0x5a] = 0;
                return 0;
            }
        }
    }

    v[0x5d] = (void *)func_ov001_021738bc(self);
    if (cfg[4] == 1) {
        v[0x60] = (void *)1;
    } else {
        v[0x60] = 0;
    }
    return 1;
}
