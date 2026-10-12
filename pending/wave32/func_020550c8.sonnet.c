#include "ffc/types.h"
extern void func_0208763c(void);
extern void func_02087678(void *p);
typedef struct O { void (**vt)(struct O *); int32_t a, b, f; } O;
void func_020550c8(uint8_t *p) {
    struct { void *q; uint8_t f; } s;
    s.q = p + 0x150;
    ((uint8_t *)&s)[4] = 1;
    if (((uint8_t *)&s)[4]) func_0208763c();
    {
        O *o = (O *)(p + 0x118);
        if ((int8_t)o->f == 0) o->vt[2](o);
    }
    if (((uint8_t *)&s)[4]) func_02087678(s.q);
}
