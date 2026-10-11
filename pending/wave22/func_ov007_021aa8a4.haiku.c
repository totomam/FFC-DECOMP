#include "ffc/types.h"

extern void func_ov007_021ae9a4(void *obj, int a, int b);
extern void *func_02056aec(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021aa8a4(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    if (p[0x8c] != 0) {
        func_ov007_021ae9a4(obj, 0, 0);
    }
    {
        void *node = func_02056aec(obj);
        func_02056bc0((uint8_t *)obj + 0x14, node);
    }
}
