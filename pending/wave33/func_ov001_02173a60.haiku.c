#include "ffc/types.h"

extern int32_t func_ov000_02168768(void);
extern void *func_ov000_0216876c(void *obj, int32_t idx);
extern void func_ov001_0217393c(void *item);
extern void func_ov000_02168738(void *obj);
extern void func_ov001_02173594(void *obj);

void func_ov001_02173a60(uint32_t *self)
{
    int32_t i;
    int32_t n;
    void *p;

    if (self[90] != 0) {
        n = func_ov000_02168768();
        for (i = 0; i < n; i++) {
            func_ov001_0217393c(func_ov000_0216876c((void *)self[90], i));
        }
        func_ov000_02168738((void *)self[90]);
        self[90] = 0;
    }

    p = (void *)self[89];
    if (p != 0 && ((uint32_t *)p)[6] != 0) {
        func_ov001_02173594(p);
        self[89] = 0;
    }
}
