#include "ffc/types.h"

extern void *func_ov007_021c0380(void *self, int a, int b, int c, int d);
extern void func_ov007_021c03dc(void *obj);

int func_ov007_021c014c(uint8_t *self, int a, int b, int c, int d, int (*fn)(void *))
{
    void *obj = func_ov007_021c0380(self, d, a, b, c);
    if (obj == 0) {
        return 0;
    }
    *(int *)(self + 0x48) = fn(obj);
    if (*(int *)(self + 0x48) != 0) {
        func_ov007_021c03dc(obj);
        return 0;
    }
    return (int)obj;
}
