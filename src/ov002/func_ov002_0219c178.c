#include "ffc/types.h"

extern int32_t func_ov002_0219c60c(void *p);
extern void func_ov002_0219b848(void *p);
extern uint8_t *func_ov002_02198e58(void);
extern int32_t func_ov002_0219c654(void *p, int32_t v);

int32_t func_ov002_0219c178(void *a, void *b)
{
    int32_t st;
    uint8_t *s;

    if (func_ov002_0219c60c(b) != 1) {
        return 0;
    }
    func_ov002_0219b848(a);
    s = func_ov002_02198e58();
    st = *(int32_t *)(s + 0x31c);
    switch (st) {
    case 1:
        return 1;
    case 2:
        if (func_ov002_0219c654(b, 0) == 2) {
            return 1;
        }
        break;
    default:
        break;
    }
    return 0;
}
