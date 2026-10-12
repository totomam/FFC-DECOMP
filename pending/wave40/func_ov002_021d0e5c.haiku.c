#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t n;
} Obj;

typedef struct {
    uint32_t pad[5];
    uint32_t v[6];
} Rec;

extern Rec *func_ov002_021d2aa0(Obj *p, uint32_t idx);

int func_ov002_021d0e5c(int x, Obj *p) {
    int ret = 1;
    uint32_t i;
    int j;
    uint32_t s1, s2;
    Rec *q;
    for (i = 0; i < p->n; i++) {
        if (i + 1 < p->n) {
            q = func_ov002_021d2aa0(p, i);
            s1 = 0;
            for (j = 0; j < 6; j++) {
                s1 += q->v[j];
            }
            q = func_ov002_021d2aa0(p, i + 1);
            s2 = 0;
            for (j = 0; j < 6; j++) {
                s2 += q->v[j];
            }
            if (s1 != s2) {
                ret++;
            }
        }
    }
    return ret;
}
