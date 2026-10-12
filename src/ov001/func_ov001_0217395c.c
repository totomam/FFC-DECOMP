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
    char *s = (char *)self;
    uint32_t *cfg;
    Loc L;
    int i;
    int j;
    uint32_t t;
    int n;
    void *p;

    if (*(void **)(s + 0x164) == 0) {
        return 0;
    }
    cfg = *(uint32_t **)(s + 0x164);
    *(void **)(s + 0x16c) = 0;
    *(void **)(s + 0x170) = 0;
    *(void **)(s + 0x174) = 0;
    *(void **)(s + 0x184) = 0;
    *(uint32_t *)(s + 0x178) = cfg[1];
    *(uint32_t *)(s + 0x17c) = cfg[2];

    n = (int)func_ov000_02168768(cfg[0]);
    p = func_ov000_021686f4(0x10, n, 0);
    *(void **)(s + 0x168) = p;
    if (p == 0) {
        return 0;
    }

    if (n > 0) {
        Loc *lp = &L;
        i = 0;
        do {
            t = (uint32_t)func_ov000_0216876c(*(void **)(*(char **)(s + 0x164)), i);
            lp->a = 0;
            lp->b = 0;
            lp->c = 0;
            lp->d = 0;
            L.a = t;
            if (func_ov001_021738e0(lp) == 0) {
                for (j = i - 1; j >= 0; j--) {
                    func_ov001_0217393c(func_ov000_0216876c(*(void **)(s + 0x168), j));
                }
                func_ov000_02168738(*(void **)(s + 0x168));
                *(void **)(s + 0x168) = 0;
                return 0;
            }
            func_ov000_02168784(*(void **)(s + 0x168), lp);
            i++;
        } while (i < n);
    }

    *(uint32_t *)(s + 0x174) = func_ov001_021738bc(self);
    if (((uint32_t *)*(void **)(s + 0x164))[4] == 1) {
        *(uint32_t *)(s + 0x180) = 1;
    } else {
        *(uint32_t *)(s + 0x180) = 0;
    }
    return 1;
}
