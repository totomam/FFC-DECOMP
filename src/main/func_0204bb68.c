#include "ffc/types.h"

extern void func_0204b098(void *p);

void func_0204bb68(void *arg)
{
    uint32_t *p = (uint32_t *)arg;
    if (p != 0) {
        uint32_t zero = 0;
        do {
            uint32_t *n = (uint32_t *)p[0];
            if (p != n) {
                uint32_t nx = n[0];
                func_0204b098(n);
                p[0] = nx;
            } else {
                func_0204b098(p);
                p = (uint32_t *)zero;
            }
        } while (p != 0);
    }
}
