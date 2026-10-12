#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *obj);
extern uint32_t *func_ov000_0216876c(void *obj, int32_t idx);
extern void func_ov001_02186cc0(void *self, uint32_t val);
extern void func_ov000_02168950(void *obj);
extern void func_ov001_02186d30(void *self);

void func_ov001_02186d68(void *p)
{
    int32_t i;
    int32_t n;
    uint32_t *e;

    n = func_ov000_02168768(((void **)p)[1]);
    for (i = 0; i < n; i++) {
        e = func_ov000_0216876c(((void **)p)[1], i);
        func_ov001_02186cc0(p, *e);
    }
    func_ov000_02168950(((void **)p)[1]);
    func_ov001_02186d30(p);
}
