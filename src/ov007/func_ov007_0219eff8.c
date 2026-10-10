#include "ffc/types.h"

extern void func_ov007_0219eaf0(void *p);

typedef void (*VFn)(void *, int, int);

void func_ov007_0219eff8(uint8_t *p) {
    void *obj = *(void **)(p + 0x98);
    VFn *vt = *(VFn **)obj;
    vt[14](obj, 3, 1);
    func_ov007_0219eaf0(*(void **)(p + 0x94));
}
