#include "ffc/types.h"

extern char data_ov011_021cac80[];
extern void func_02062868(void *p);
extern void func_02056844(void *p);

void *func_ov011_021bd6f4(void *p)
{
    uint8_t *s = (uint8_t *)p;
    void *obj;
    typedef void (*vfn)(void *);

    *(char **)s = data_ov011_021cac80;
    obj = *(void **)(s + 0x14);
    if (obj != 0) {
        if (obj != 0) {
            vfn f = (vfn)((void **)(*(void ***)obj))[1];
            f(obj);
        }
        *(void **)(s + 0x14) = 0;
    }
    func_02062868(p);
    func_02056844(p);
    return p;
}
