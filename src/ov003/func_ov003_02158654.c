/* cflags: -lang c++ */
#include "ffc/types.h"
struct S { uint32_t v; S() {} };
extern "C" {
extern void func_ov003_02156530(void *p);
extern void func_ov003_0215bad4(void *p);
extern void func_0202d574(void *p);
extern void func_ov003_0215b4f4(void *p);
extern void func_ov003_0215b4cc(void *p);
extern void func_ov003_0215b4e0(void *p);
extern uint32_t func_ov003_0214649c(uint32_t x);
extern S func_ov003_02153e10(uint32_t x);
extern void func_ov003_02157b6c(void *p, int a, int b, S c, int d, int e, int f);
void func_ov003_02158654(void *param_1);
}
void func_ov003_02158654(void *param_1)
{
    uint8_t *p = (uint8_t *)param_1;
    func_ov003_02156530(p);
    func_ov003_0215bad4(p + 0x15C);
    void *obj = *(void **)(p + 0x124);
    if (obj != 0) func_0202d574(obj);
    if (p[0xB1] != 0) {
        func_ov003_0215b4f4(p);
        func_ov003_0215b4cc(p);
        p[0xB1] = 0;
    } else {
        func_ov003_0215b4e0(p);
    }
    *(uint16_t *)(p + 0x314) = 0;
    if (p[0xAF] == 0) {
        S s = func_ov003_02153e10(func_ov003_0214649c(*(uint32_t *)(p + 0x108)));
        func_ov003_02157b6c(p, 1, 1, s, 0, 0, 0);
    }
}
