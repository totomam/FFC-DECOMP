#include "ffc/types.h"

extern int func_ov001_02176320(void *p);
extern int func_ov001_0217ef6c(void *p, void *d);
extern void func_ov001_0217ec78(void *dst, void *src, uint32_t n);
extern void func_ov000_021658e8(void *p);
extern void *func_ov000_021653d4(uint32_t n);
extern void *func_020903cc(void *o, int c, uint32_t n);
extern int func_ov001_0217b738(void *p, int a, void *obj, void *out, void *a4, void *a5, void *a6);
extern void *func_ov001_02178c14(void *p, void *x);
extern void func_ov001_0217b51c(void *p, void *x);
extern void func_ov001_02179b10(void *p, int a);
extern int func_ov001_021768a0(void *p, void *x);
extern char data_ov001_021908f4[];
extern char data_ov001_02190908[];

int func_ov001_02178e90(void *p, void *q, void *r2, void *r3, void *a5, int8_t *a6, int8_t *a7, void *a8, void *a9, void *a10, void *a11, void *a12, void *a13)
{
    uint8_t *obj = *(uint8_t **)p;
    uint8_t *m;
    void *local;
    int ret;
    void *x;

    if (*(uint32_t *)(obj + 0x1f4) == 4) {
        ret = func_ov001_02176320(p);
        if (ret != 0) {
            return ret;
        }
    }
    if (*(uint32_t *)(obj + 0x1f4) != 0) {
        func_ov001_0217ef6c(p, data_ov001_021908f4);
        return 2;
    }
    *(uint32_t *)(obj + 0x10c) = 1;
    func_ov001_0217ec78(obj + 0x110, q, 0x1f);
    func_ov001_0217ec78(obj + 0x12f, r2, 0x15);
    func_ov001_0217ec78(obj + 0x144, r3, 0x33);
    func_ov001_0217ec78(obj + 0x177, a5, 0x1f);
    func_ov000_021658e8(obj + 0x144);

    m = func_ov000_021653d4(0x308);
    if (m == 0) {
        func_ov001_0217ef6c(p, data_ov001_02190908);
        return 1;
    }
    func_020903cc(m, 0, 0x308);
    *(void **)(m + 0x304) = a10;
    if (*a6 != 0 && *a7 != 0) {
        func_ov001_0217ec78(m + 0xc2, a6, 0x100);
        func_ov001_0217ec78(m + 0x1c2, a7, 0x100);
    }
    if (a8 != 0) {
        func_ov001_0217ec78(m + 0x2c2, a8, 0x41);
    }
    ret = func_ov001_0217b738(p, 0, m, &local, a11, a12, a13);
    if (ret != 0) {
        return ret;
    }
    x = func_ov001_02178c14(p, local);
    if (x != 0) {
        *(void **)((uint8_t *)local + 0x1c) = x;
        func_ov001_0217b51c(p, local);
        func_ov001_02179b10(p, 0);
        return (int)x;
    }
    if (*(void **)((uint8_t *)local + 8) != 0) {
        ret = func_ov001_021768a0(p, *(void **)((uint8_t *)local + 0x18));
        if (ret != 0) {
            return ret;
        }
    }
    return 0;
}
