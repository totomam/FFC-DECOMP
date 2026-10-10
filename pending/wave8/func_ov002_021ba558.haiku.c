#include "ffc/types.h"

typedef int (*VFn)(void *self, int a, int b);

int func_ov002_021ba558(void *p, int a) {
    void *obj = *(void **)((char *)p + 0x80);
    VFn f = *(VFn *)(*(char **)obj + 0x38);
    return f(obj, a, 0);
}
