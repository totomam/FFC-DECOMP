#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void func_02084b2c(void *dst, int val, int size);
extern void func_ov003_0214e1f8(void *p);
extern void *func_ov003_02153470(void *p);
extern void func_ov003_021534e4(void *p);
extern int func_020192f4(void *a, uint32_t b);
extern void func_0201cf34(void *a, uint32_t *b);
extern void *data_020b8e44;
extern void *data_020b93b8;

void func_ov003_021489d8(uint8_t *self, uint32_t arg)
{
    uint32_t tmp[0x26];
    int i;
    int j;
    uint8_t *arr;
    void **vt;
    void *obj;

    func_02056c4c(*(void **)(self + 0x334));
    func_02056c4c(*(void **)(self + 0x338));
    func_02056c4c(*(void **)(self + 0x18c));
    func_02056c4c(*(void **)(self + 0x190));

    arr = self + 0x26c;
    for (i = 0; i < 5; i++) {
        j = i;
        func_02084b2c(arr + i * 0x14, j, 0x14);
    }
    func_ov003_0214e1f8(self + 0x3d4);

    for (; j < 5; j++) {
        func_02084b2c(self + 0x2d0 + j * 0x14, 0, 0x14);
    }
    func_ov003_0214e1f8(self + 0x3e0);

    *(uint32_t *)(self + 0x33c) = 0;
    *(uint32_t *)(self + 0x340) = 1;
    *(uint32_t *)(self + 0x408) = 0;

    *(uint32_t *)func_ov003_02153470(*(void **)(self + 0x9c)) = arg;
    func_ov003_021534e4(*(void **)(self + 0x9c));

    obj = *(void **)(self + 0x20c);
    if (func_020192f4(data_020b8e44, arg) != 0) {
        vt = *(void ***)obj;
        ((void (*)(void *))vt[0x28 / 4])(obj);
        return;
    }
    vt = *(void ***)obj;
    ((void (*)(void *))vt[0x2c / 4])(obj);
    func_0201cf34(data_020b93b8, tmp);
    if ((tmp[7] >> 4) & 1) {
        vt = *(void ***)obj;
        ((void (*)(void *, int, int))vt[0x38 / 4])(obj, 4, 0);
    } else {
        vt = *(void ***)obj;
        ((void (*)(void *, int, int))vt[0x38 / 4])(obj, 5, 0);
    }
}
