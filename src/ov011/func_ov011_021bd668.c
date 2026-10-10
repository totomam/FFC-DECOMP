#include "ffc/types.h"

extern void func_020655b8(void *p);

typedef void (*VFn)(void *, int, int);

void func_ov011_021bd668(uint8_t *p) {
    void *obj = *(void **)(p + 0x94);
    VFn *vt = *(VFn **)obj;
    vt[14](obj, 3, 0);
    func_020655b8(*(void **)(p + 0x94));
}
