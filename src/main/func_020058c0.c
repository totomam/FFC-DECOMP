#include "ffc/types.h"

extern char data_020a7dd0[];
extern void func_0205f7d8(void *p);
extern void func_02056844(void *p);

void *func_020058c0(void *p)
{
    uint8_t *s = (uint8_t *)p;
    void *obj;
    typedef void (*vfn)(void *);

    *(char **)s = data_020a7dd0;
    obj = *(void **)(s + 0x50);
    if (obj != 0) {
        if (obj != 0) {
            vfn f = (vfn)((void **)(*(void ***)obj))[1];
            f(obj);
        }
        *(void **)(s + 0x50) = 0;
    }
    func_0205f7d8(p);
    func_02056844(p);
    return p;
}
