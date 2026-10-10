#include "ffc/types.h"

extern char data_020ae018[];
extern void func_02062868(void *p);
extern void func_02056844(void *p);

void *func_02032308(void *p)
{
    uint8_t *s = (uint8_t *)p;
    void *obj;
    typedef void (*vfn)(void *);

    *(char **)s = data_020ae018;
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
