#include "ffc/types.h"

extern void func_02060548(void *obj, int a);
extern void func_02060564(void *obj, int a, int b);
extern void func_02060574(void *obj, int a);
extern void func_02060584(void *obj, int a);
extern void *func_02060634(void *obj, uint32_t old, uint32_t a2, uint32_t a3, uint32_t a5, int a6);
extern void func_02056bc0(void *object, void *node);

void func_ov002_0219f2a8(uint8_t *self, int idx, uint32_t a2, uint32_t a3, uint32_t a5)
{
    void *dev;
    uint32_t off;
    uint8_t *arr;
    void *node;

    if (idx != 0) {
        off = idx << 2;
        dev = *(void **)(*(uint8_t **)(self + off + 0x84) + 0x20);
        func_02060548(dev, 3);
        func_02060564(dev, 0x10, 0);
        func_02060574(dev, 0x39);
        func_02060584(dev, 0x3f);
        arr = self + 0x8c;
        node = func_02060634(dev, *(uint32_t *)(arr + off), a2, a3, a5, 0);
        func_02056bc0(self + 0x48, node);
        *(uint32_t *)(arr + off) = a2;
    }
}
