#include "ffc/types.h"

extern void func_0201b87c(void *a, uint8_t b);
extern void func_ov007_021a0638(void *self, uint32_t x);
extern void *data_020b93b8;

struct Obj;
typedef void (*VFn)(struct Obj *);
typedef struct Obj {
    VFn *vt;
} Obj;

void func_ov007_021a051c(uint8_t *self, uint32_t n)
{
    if (n < 3) {
        Obj **arr = (Obj **)self;
        int i;
        Obj *o;
        for (i = 0; i < 3; i++) {
            o = arr[0x53 + i];
            o->vt[11](o);
        }
        o = *(Obj **)(self + n * 4 + 0x14C);
        o->vt[10](o);
        *(self + 0x14C + 0x1c) = (uint8_t)n;
        func_0201b87c(data_020b93b8, *(self + 0x14C + 0x1c));
        func_ov007_021a0638(self, 0);
    }
}
