#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *list);
extern uint32_t *func_ov000_0216876c(void *list, int32_t idx);
extern uint32_t func_ov001_02185f1c(uint32_t x);
extern uint32_t func_ov001_02185f38(uint32_t x);

typedef struct {
    uint32_t pad;
    void *list;
} Obj;

int32_t func_ov001_02186c70(Obj *p, uint32_t a, uint32_t b)
{
    uint32_t v;
    int32_t n = func_ov000_02168768(p->list);
    int32_t i;
    for (i = 0; i < n; i++) {
        v = *func_ov000_0216876c(p->list, i);
        if (a == func_ov001_02185f1c(v) && b == func_ov001_02185f38(v)) {
            return i;
        }
    }
    return -1;
}
