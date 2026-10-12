#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x108];
    uint32_t flag;
} Obj;

typedef struct {
    uint32_t pad[2];
    int *f8;
    int *fc;
} Res;

extern int func_ov001_0217c8f0(void *a, int b, void *out);

int func_ov001_02175e40(void **a, int b, int *out)
{
    Res *tmp;
    Obj *obj;
    int v;

    if (a == 0 || (obj = (Obj *)*a) == 0) {
        return 2;
    }
    if (obj->flag != 0) {
        *out = 0;
        return 0;
    }
    int *p;
    if (func_ov001_0217c8f0(a, b, &tmp) != 0 && (p = tmp->f8) != 0) {
        v = *p;
    } else if (func_ov001_0217c8f0(a, b, &tmp) != 0 && (p = tmp->fc) != 0) {
        v = *p;
    } else {
        v = -1;
    }
    *out = v;
    return 0;
}
