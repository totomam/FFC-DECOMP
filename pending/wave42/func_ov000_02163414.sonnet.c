#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef struct { Pair p[5]; } Ent;
typedef struct { int32_t pad[20]; int32_t count; Ent e[32]; } Mgr;

extern Mgr *func_ov000_02163350(void);

static inline Ent *at(Mgr *m, int i) { return &m->e[i]; }

uint32_t func_ov000_02163414(Ent *src)
{
    int32_t n;
    Mgr *a;
    Mgr *b;
    Ent *d;
    Ent *s;

    if (func_ov000_02163350()->count == 0x20) {
        return 0;
    }
    for (n = func_ov000_02163350()->count; n > 0; n--) {
        a = func_ov000_02163350();
        b = func_ov000_02163350();
        d = at(a, n);
        s = at(b, n - 1);
        *d = *s;
    }
    *at(func_ov000_02163350(), 0) = *src;
    func_ov000_02163350()->count++;
    return 1;
}
