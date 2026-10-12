#include "ffc/types.h"

typedef struct {
    int32_t a, b, c, d;
} Q;

extern void func_020209a8(void *p, Q q);

int32_t func_020204e0(uint8_t *self)
{
    Q arr[3];
    int32_t v2 = *(int32_t *)(self + 0x80);
    int32_t v0 = *(int32_t *)(self + 0x78);
    int32_t v1 = *(int32_t *)(self + 0x7c);
    int32_t v3 = *(int32_t *)(self + 0x84);
    arr[1].a = v0;
    arr[1].a = v0 + 1;
    arr[1].b = v1;
    arr[1].b = v1 + 1;
    arr[1].c = v2;
    arr[1].c = v2 - 1;
    arr[1].d = v3;
    arr[1].d = v3 - 1;
    arr[0] = arr[1];
    arr[2].a = 0;
    arr[2].b = 0;
    arr[2].c = 1;
    arr[2].d = 1;
    func_020209a8(self, arr[2]);
    return 0;
}
