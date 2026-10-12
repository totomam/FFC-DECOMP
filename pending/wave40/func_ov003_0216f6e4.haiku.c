#include "ffc/types.h"

extern int func_ov003_0216f720(void *p, uint32_t a, uint32_t b, int c);
extern int func_ov003_0216fba0(void *p, uint32_t a, uint32_t b, int c);
extern int func_ov003_02170580(void *p, uint32_t a, uint32_t b, int c);
extern int func_ov003_02170e0c(void *p, uint32_t a, uint32_t b, int c);

int func_ov003_0216f6e4(void *p, uint32_t a, uint32_t b)
{
    int ret = 0;
    uint32_t t = *(uint32_t *)((uint8_t *)p + 8);
    switch (t) {
    case 0:
        ret = func_ov003_0216f720(p, a, b, ret);
        break;
    case 1:
        ret = func_ov003_0216fba0(p, a, b, ret);
        break;
    case 2:
        ret = func_ov003_02170580(p, a, b, ret);
        break;
    case 3:
        ret = func_ov003_02170e0c(p, a, b, ret);
        break;
    }
    return ret;
}
