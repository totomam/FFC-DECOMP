#include "ffc/types.h"

extern char data_020b19d4[];
extern void func_02061344(void *arg);
extern void *func_0200a678(void *object);
extern void func_02062868(void *object);

void *func_02068494(void *object)
{
    uint8_t *p = (uint8_t *)object;
    void *a;

    *(char **)p = data_020b19d4;
    func_02061344(*(void **)(p + 0x20));

    a = *(void **)(p + 0x1c);
    if (a != 0) {
        void **vt = *(void ***)a;
        ((void (*)(void *))vt[1])(a);
    }

    a = *(void **)(p + 0x58);
    if (a != 0) {
        void **vt = *(void ***)a;
        ((void (*)(void *))vt[1])(a);
    }

    func_0200a678(p + 0x4c);
    func_02062868(p);
    return p;
}
