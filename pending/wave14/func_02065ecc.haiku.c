#include "ffc/types.h"

typedef int (*VFn)(void *, int, int);

int func_02065ecc(uint8_t *p, int x, int y) {
    void *obj = *(void **)(p + 0x1c);
    void **vt = *(void ***)obj;
    int dx = x + *(int *)(p + 0x20);
    int dy = y + *(int *)(p + 0x24);
    return ((VFn)vt[0x4c / 4])(obj, dx, dy);
}
