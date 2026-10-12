#include "ffc/types.h"

extern void func_02069694(void *p, void *a, int b);
extern void func_02069600(void *p, void *e);

typedef void (*vfn_t)(void *);

void func_ov013_021c040c(uint8_t *p)
{
    uint32_t i;

    func_02069694(p, *(void **)(p + 0xbc), 2);
    for (i = 0; i < *(uint32_t *)(p + 0xc4); i++) {
        void *e;
        func_02069600(p, (*(void ***)(p + 0xc0))[i]);
        e = (*(void ***)(p + 0xc0))[i];
        if (e != 0) {
            if (e != 0) {
                vfn_t f = (*(vfn_t **)e)[1];
                f(e);
            }
            (*(void ***)(p + 0xc0))[i] = 0;
        }
    }
}
