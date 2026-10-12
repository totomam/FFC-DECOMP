#include "ffc/types.h"

extern void func_020694ac(void *obj, uint32_t a, uint32_t b);
extern void *func_0200a678(void *object);
extern void func_0209cf5c(void *arr, uint32_t count, uint32_t size, void *ctor, void *dtor);
extern void func_ov012_021ce4c4(void);
extern uint8_t data_ov012_021d3f74[];

void *func_ov012_021ce3ec(void *self, uint32_t a, uint32_t b, uint8_t c, uint32_t d, uint8_t e, uint32_t f)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t i;
    uint32_t v;
    uint32_t *arr1;
    uint32_t *arr2;
    uint32_t *arr3;

    func_020694ac(self, 0, 0);
    *(uint8_t **)p = data_ov012_021d3f74;
    *(uint32_t *)(p + 0x2ac) = 0;
    *(uint32_t *)(p + 0x2b4) = 0;
    *(uint32_t *)(p + 0x2d4) = a;
    *(uint32_t *)(p + 0x2d8) = b;
    *(uint32_t *)(p + 0x2dc) = 2;
    *(uint8_t *)(p + 0x2e4) = 0;
    arr1 = (uint32_t *)(p + 0x2ec);
    *(uint8_t *)(p + 0x2e5) = 0;
    for (i = 0; i < 3; i++) {
        v = i;
        arr1[i] = v;
    }
    arr2 = (uint32_t *)(p + 0x2f8);
    v = i - 1;
    do {
        arr2[v] = 0;
        v++;
    } while (v < 3);
    func_0209cf5c(p + 0x304, 3, 0xc, func_ov012_021ce4c4, func_0200a678);
    arr3 = (uint32_t *)(p + 0x328);
    for (i = 0; i < 3; i++) {
        arr3[i] = 0;
    }
    *(uint8_t *)(p + 0x33b) = c;
    *(uint8_t *)(p + 0x33c) = 1;
    *(uint32_t *)(p + 0x340) = d;
    *(uint8_t *)(p + 0x344) = e;
    *(uint32_t *)(p + 0x348) = f;
    *(uint32_t *)(p + 0x34c) = 0;
    *(uint32_t *)(p + 0x350) = 0;
    *(uint8_t *)(p + 0x354) = 1;
    return self;
}
