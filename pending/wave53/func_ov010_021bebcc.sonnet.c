#include "ffc/types.h"

typedef void (*VFn)(void *out, void *self);
typedef struct Obj { VFn *vt; } Obj;
typedef struct Tmp { uint32_t a, b, c, d; } Tmp;

extern void func_0201e954(void *p, uint32_t idx, void *out);
extern void func_ov005_021963cc(void *p, void *a, uint32_t b);
extern void func_ov005_021964c4(void *p);
extern void *data_020b93b8;

void func_ov010_021bebcc(uint8_t *self, Obj *obj)
{
    Tmp tmp;
    uint32_t buf[6];
    uint32_t i, j, x;

    obj->vt[4]((void *)&tmp, obj);
    for (i = 0; i < *(uint32_t *)(self + 0x10c); i++) {
        if ((uint32_t)obj == (*(uint32_t **)(self + 0x108))[i]) {
            tmp.b += 0x10;
            tmp.d += 0x10;
        }
    }

    x = *(uint32_t *)(self + 0xf8);
    if (x == *(uint32_t *)(self + 0xfc)) {
        j = *(uint32_t *)(self + 0x120) - (x << 3);
    } else {
        j = 8;
    }

    for (i = 0; i < j; i++) {
        if ((uint32_t)obj == (*(uint32_t **)(self + 0x108))[i]) {
            func_0201e954(data_020b93b8, i + (x << 3), buf);
            func_ov005_021963cc(*(void **)(self + 0x118), buf, 0);
            return;
        }
    }

    func_ov005_021964c4(*(void **)(self + 0x118));
}
