#include "ffc/types.h"

extern int func_020692e8(void *p);

typedef struct {
    uint32_t flag : 1;
} FlagW;

void func_ov013_021c35fc(uint8_t *p)
{
    uint32_t x;
    void *obj;
    void **vt;

    if (((FlagW *)(p + 0xac))->flag == 0) {
        x = ((uint32_t)*(uint8_t *)(p + 0xac) << 24) >> 25;
    } else {
        x = *(uint32_t *)(p + 0xb0);
    }

    if (x == 0) {
        if (func_020692e8(p)) {
            obj = *(void **)(p + 0xa4);
            vt = *(void ***)obj;
            ((void (*)(void *, int, int))vt[14])(obj, 1, 0);
        } else {
            obj = *(void **)(p + 0xa4);
            vt = *(void ***)obj;
            ((void (*)(void *, int, int))vt[14])(obj, 2, 0);
        }
    } else {
        if (func_020692e8(p)) {
            obj = *(void **)(p + 0xa4);
            vt = *(void ***)obj;
            ((void (*)(void *, int, int))vt[14])(obj, 3, 0);
        } else {
            obj = *(void **)(p + 0xa4);
            vt = *(void ***)obj;
            ((void (*)(void *, int, int))vt[14])(obj, 4, 0);
        }
    }
}
