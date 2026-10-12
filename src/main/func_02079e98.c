#include "ffc/types.h"

extern void *func_02077b70(void *a, void *p);
extern void func_02077afc(void *a, void *p, void *b);

void func_02079e98(void *a, void *b)
{
    uint8_t *p = (uint8_t *)func_02077b70(a, 0);
    while (p != 0) {
        if (((uint8_t *)b)[0x3d] < p[0x3d]) {
            break;
        }
        p = (uint8_t *)func_02077b70(a, p);
    }
    func_02077afc(a, p, b);
    *(void **)((uint8_t *)b + 4) = a;
}
