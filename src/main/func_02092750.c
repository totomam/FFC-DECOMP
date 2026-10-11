#include "ffc/types.h"

extern int32_t func_02091f4c(void *fn, void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_0209270c(void);

struct L {
    void *p;
    uint32_t z;
};

int32_t func_02092750(void *p, uint32_t a, uint32_t b) {
    struct L s;
    s.p = p;
    if (p == 0 || *(uint8_t *)p == 0) {
        return -1;
    }
    s.z = 0;
    return func_02091f4c((void *)func_0209270c, &s.p, a, b, 0);
}
