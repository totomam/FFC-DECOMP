#include "ffc/types.h"

extern void func_02075bf4(void *p);
extern void *data_020b8e44;

void func_ov001_0218e6dc(void *p)
{
    uint8_t *b = (uint8_t *)p;
    void *g;
    void *t;
    if (b[0x9c] != 0) {
        return;
    }
    b[0x9c] = 1;
    {
        void (*fn)(void *) = (void (*)(void *))(((void **)(*(void **)p))[8]);
        fn(p);
    }
    g = data_020b8e44;
    t = *(void **)((char *)(*(void **)g) + 0x88);
    if (t != 0) {
        func_02075bf4(t);
    }
}
