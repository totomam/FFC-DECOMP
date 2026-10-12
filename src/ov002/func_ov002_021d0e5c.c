#include "ffc/types.h"
typedef struct { uint32_t a; volatile uint32_t n; } Obj;
typedef struct { uint32_t pad[5]; uint32_t v[6]; } Rec;
extern Rec *func_ov002_021d2aa0(Obj *p, uint32_t idx);
int func_ov002_021d0e5c(int x, Obj *p) {
    int ret = 1;
    uint32_t i;
    for (i = 0; i < p->n; i++) {
        if (i + 1 < p->n) {
            Rec *q = func_ov002_021d2aa0(p, i);
            uint32_t s1 = 0;
            int j;
            for (j = 0; j < 6; j++) s1 += q->v[j];
            {
            Rec *r = func_ov002_021d2aa0(p, i + 1);
            int k;
            uint32_t s2 = 0;
            for (k = 0; k < 6; k++) s2 += r->v[k];
            if (s1 != s2) ret++;
            }
        }
    }
    return ret;
}
