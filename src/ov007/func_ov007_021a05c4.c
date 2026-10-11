#include "ffc/types.h"

extern void func_0201b8ec(void *a, uint8_t b);
extern void func_ov007_021a0638(void *p, int x);
extern void *data_020b93b8;

typedef struct Obj {
    void **vt;
} Obj;

void func_ov007_021a05c4(void *p, uint32_t idx)
{
    uint8_t *s = (uint8_t *)p;
    if (idx >= 0xb) {
        return;
    }
    {
        Obj *obj = *(Obj **)(s + 0x160);
        void (*fn)(Obj *, int, int) = (void (*)(Obj *, int, int))obj->vt[0x38 / 4];
        fn(obj, idx + 1, 0);
    }
    s[0x16a] = (uint8_t)idx;
    func_0201b8ec(*(void **)&data_020b93b8, s[0x16a]);
    func_ov007_021a0638(p, 0);
}
