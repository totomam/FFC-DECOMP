#include "ffc/types.h"

extern void func_ov002_021ae088(void *p);
extern void func_ov002_021b1004(void *p, int x);

typedef void (*vfn_t)(void *, int, int);

void func_ov002_021ae760(void *a)
{
    uint8_t *p = (uint8_t *)a;
    func_ov002_021ae088(a);
    if (p[0x1B8] != 0) {
        p[0x1B8] = 0;
        p[0x1B9] = 1;
        func_ov002_021b1004(a, 5);
        {
            void *obj = *(void **)(p + 0x128);
            void *vt = *(void **)obj;
            ((vfn_t)((void **)vt)[14])(obj, 3, 0);
        }
    }
}
