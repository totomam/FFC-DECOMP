#include "ffc/types.h"

extern void *data_020b93b8;

extern void func_0201e954(void *a, int b, void *c);
extern int func_0201f154(void *a);
extern void func_02036f08(void *a, int b);
extern int func_0201f164(void *a);
extern void func_0201f0cc(void *a, int b, void *c);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_0201e92c(void *a, int b, void *c);
extern void func_0201e9e4(void *a);
extern int func_0201e97c(void *a);
extern void func_ov005_02198ad0(void *p);
extern void func_ov005_02196144(void *p, uint8_t v);
extern void func_ov005_021981b8(void *p);
extern void func_ov005_021987ac(void *p);
extern void func_ov005_02198828(void *p);
extern void func_ov005_02198ab0(void *p);
extern void func_ov005_021985f8(void *p);

void func_ov008_021a10a8(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint8_t local[0x18];
    int i;
    uint32_t r1;

    if (*(int32_t *)(s + 0x154) != 1) {
        return;
    }
    for (i = 0; i < 0x40; i++) {
        if (s[0xbc + i]) {
            s[0xbc + i] = 0;
            func_0201e954(data_020b93b8, i, local);
            if (func_0201f154(data_020b93b8) == 0) {
                func_02036f08(local, 0);
                func_0201f0cc(data_020b93b8, func_0201f164(data_020b93b8), local);
                func_02084b2c(local, 0, 0x18);
                func_0201e92c(data_020b93b8, i, local);
            }
        }
    }
    i = 0;
    s[0x104] = (uint8_t)i;
    func_0201e9e4(data_020b93b8);
    if (*(int32_t *)(s + 0x100) > 0) {
        if ((uint32_t)func_0201e97c(data_020b93b8) <= 8) {
            func_ov005_02198ad0(self);
            *(int32_t *)(s + 0xfc) = i;
            func_ov005_02196144(*(void **)(s + 0xb8), (uint8_t)(i + 1));
        } else {
            r1 = ((uint32_t)(func_0201e97c(data_020b93b8) - 1)) >> 3;
            if (*(int32_t *)(s + 0xfc) > (int32_t)r1) {
                *(uint32_t *)(s + 0xfc) = r1;
                func_ov005_02196144(*(void **)(s + 0xb8), (uint8_t)(r1 + 1));
            }
        }
    }
    func_ov005_021981b8(self);
    func_ov005_021987ac(self);
    func_ov005_02198828(self);
    func_ov005_02198ab0(self);
    func_ov005_021985f8(self);
}
