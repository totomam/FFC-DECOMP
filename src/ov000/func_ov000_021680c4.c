#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *p);
extern uint32_t func_ov000_0216876c(void *p, int32_t i);
extern int32_t func_ov000_021684f8(void *a, uint32_t b);

typedef struct {
    void *list;
    int32_t pad4;
    int32_t idx;
    int32_t c;
    int32_t d;
} S;

int32_t func_ov000_021680c4(S *s, void *x) {
    int32_t i = s->idx + 1;
    if (i < func_ov000_02168768(s->list)) {
        do {
            uint32_t e = func_ov000_0216876c(s->list, i);
            if (func_ov000_021684f8(x, e)) {
                s->idx = i;
                s->c = -1;
                s->d = -1;
                return 1;
            }
            i++;
        } while (i < func_ov000_02168768(s->list));
    }
    return 0;
}
