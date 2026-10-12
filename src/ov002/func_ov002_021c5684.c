#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, int v);
extern void *func_0203b9b4(int v);
extern void func_02057958(void *x);
extern void func_02056bc0(void *object, void *node);
extern char data_ov002_021d7410[];

void *func_ov002_021c5684(void *param)
{
    uint8_t *p = (uint8_t *)func_0205681c(0x8c);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(void **)p = data_ov002_021d7410;
        *(void **)(p + 0x80) = param;
        *(uint32_t *)(p + 0x88) = 0;
        *(void **)(p + 0x84) = func_0203b9b4(1);
        func_02057958(*(void **)(p + 0x84));
        func_02056bc0(p + 0x48, *(void **)(p + 0x84));
    }
    return p;
}
