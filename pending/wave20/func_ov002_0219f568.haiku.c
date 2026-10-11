#include "ffc/types.h"

void func_ov002_0219f568(void *self, int flag) {
    if (flag) {
        void *obj = *(void **)((uint8_t *)self + 0x13c);
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[10])(obj);
        return;
    }
    {
        void *obj = *(void **)((uint8_t *)self + 0x13c);
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[11])(obj);
    }
}
