#include "ffc/types.h"

extern void func_ov008_02199dd8(void *p);
extern void func_ov008_0219a130(void);

typedef void (*VFn)(void *obj, int a, int b);

void func_ov008_0219a6d8(uint8_t *self, int flag)
{
    void *obj;
    VFn *vt;

    func_ov008_02199dd8(*(void **)(self + 0x94));
    if (*(uint8_t *)(*(uint8_t **)(self + 0x94) + 0x142) == 0) {
        obj = *(void **)(self + 0x98);
        vt = *(VFn **)obj;
        vt[14](obj, 1, 0);
        return;
    }
    if (flag != 0) {
        obj = *(void **)(self + 0x98);
        vt = *(VFn **)obj;
        vt[14](obj, 2, 0);
        return;
    }
    func_ov008_0219a130();
}
