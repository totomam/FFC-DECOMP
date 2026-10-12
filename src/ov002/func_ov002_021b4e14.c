#include "ffc/types.h"

extern void func_ov002_021b3cf0(void *self, int a, int b, int c, int d, int e, int f);
extern void func_ov002_02198db8(void *obj, uint32_t v);
extern uint32_t func_ov002_021ae5f4(void);
extern void func_ov002_02198d14(void *obj, uint32_t v);
extern uint32_t func_ov002_0219b858(void);
extern void func_ov002_02198d08(void *obj, uint32_t v);
extern uint32_t func_ov002_021b3c90(void);
extern uint8_t data_ov002_021d5b4c[];

void *func_ov002_021b4e14(void *self, int a, int b, int c, uint32_t *arr, int count)
{
    uint8_t *p = (uint8_t *)self;
    int32_t s0[2];
    int32_t s1[2];
    int32_t *q;
    int i;
    uint32_t r;

    func_ov002_021b3cf0(self, a, b, c, 2, 1, 1);
    *(void **)p = data_ov002_021d5b4c;
    i = 0;
    *(int *)(p + 0x164) = count;
    if (count > 0) {
        do {
            *(uint32_t *)(p + 0x158 + i * 4) = arr[i];
            i++;
        } while (i < *(int *)(p + 0x164));
    }
    func_ov002_02198db8(*(void **)(p + 0xe0), *(uint32_t *)(p + 0x158));
    r = func_ov002_021ae5f4();
    *(uint32_t *)(p + 0x154) = r;
    *(uint32_t *)(p + 0xd0) = r;
    *(uint32_t *)(p + 0xcc) = r;
    *(uint32_t *)(p + 0xb8) = (r != 0) ? 6 : 5;
    func_ov002_02198d14(*(void **)(p + 0xe0), *(uint32_t *)(p + 0x154));
    r = func_ov002_0219b858();
    func_ov002_02198d08(*(void **)(p + 0xe0), r);
    *(uint32_t *)(p + 0xbc) = func_ov002_021b3c90();
    if (*(uint32_t *)(p + 0x154) != 0) {
        s0[0] = -0x30;
        s0[1] = -0x20;
        q = s0;
    } else {
        s1[0] = 0x30;
        s1[1] = -0x20;
        q = s1;
    }
    *(int32_t *)(p + 0xd4) += q[0];
    *(int32_t *)(p + 0xd8) += q[1];
    return self;
}
