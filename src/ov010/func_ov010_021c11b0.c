#include "ffc/types.h"
extern int func_ov010_021c1234(void *c, uint32_t *a, uint32_t *b);
typedef struct { uint32_t *p; } It;
void func_ov010_021c11b0(It first, It last, void *c)
{
    It i;
    uint32_t *k;
    uint32_t *j;
    uint32_t tmp;
    int go;
    if (first.p == last.p) return;
    i.p = first.p + 1;
    for (; i.p != last.p; i.p++) {
        j = i.p - 1;
        if (func_ov010_021c1234(c, i.p, j)) {
            tmp = *i.p;
            k = i.p - 1;
            *i.p = *j;
            goto test;
            for (;;) {
                *k = *j;
                k--;
            test:
                go = 0;
                if (j != first.p) {
                    j--;
                    if (func_ov010_021c1234(c, &tmp, j)) go = 1;
                }
                if (!go) break;
            }
            *k = tmp;
        }
    }
}
