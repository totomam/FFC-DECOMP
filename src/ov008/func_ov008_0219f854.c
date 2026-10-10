#include "ffc/types.h"

typedef void (*vfn_t)(void);
#define VCALL(obj, off) (((vfn_t *)(*(void **)(obj)))[(off) / 4])

void func_ov008_0219f854(uint8_t *self, int flag) {
    if (flag) {
        void *p = *(void **)(self + 0xa4);
        ((void (*)(void *, int, int))VCALL(p, 0x38))(p, 1, 0);
        void *q = *(void **)(self + 0xa4);
        ((void (*)(void *))VCALL(q, 0x28))(q);
    } else {
        void *p = *(void **)(self + 0xa4);
        ((void (*)(void *, int, int))VCALL(p, 0x38))(p, 1, 0);
        void *q = *(void **)(self + 0xa4);
        ((void (*)(void *))VCALL(q, 0x2c))(q);
    }
}
