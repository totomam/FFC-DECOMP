#include "ffc/types.h"

extern void func_02069694(void *p, void *a, int b);
extern void func_02069600(void *p, void *e);

typedef void (*vfn_t)(void *);

void func_ov008_0219a238(uint8_t *p)
{
    uint32_t i;
    uint32_t n;

    func_02069694(p, *(void **)(p + 0xc4), 4);
    n = *(uint32_t *)(p + 0xd0);
    for (i = 0; i < n; i++) {
        void *e;
        func_02069600(p, (*(void ***)(p + 0xcc))[i]);
        e = (*(void ***)(p + 0xcc))[i];
        if (e != 0) {
            if (e != 0) {
                vfn_t f = (*(vfn_t **)e)[1];
                f(e);
            }
            (*(void ***)(p + 0xcc))[i] = 0;
        }
        n = *(uint32_t *)(p + 0xd0);
    }
}
