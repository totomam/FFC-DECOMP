#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201f0f8(void *a, int b, void *c);
extern int func_0201e9bc(void *a);
extern uint32_t func_0201e9d0(void *a);
extern void func_0201e92c(void *a, uint32_t b, void *c);
extern void func_02084b2c(void *a, int b, uint32_t c);
extern void func_0201f0cc(void *a, int b, void *c);
extern void func_0201f174(void *a);
extern void func_ov005_021981b8(void *p);
extern void func_ov005_021987ac(void *p);
extern void func_ov005_02198828(void *p);
extern void func_ov005_02198ab0(void *p);
extern void func_ov005_021985f8(void *p);

void func_ov008_021a1498(uint8_t *p)
{
    uint8_t buf[0x18];
    uint8_t i;

    if (*(uint32_t *)(p + 0x154) == 1) {
        for (i = 0; i < 8; i++) {
            if (p[0xbc + i]) {
                p[0xbc + i] = 0;
                func_0201f0f8(data_020b93b8, i, buf);
                if (func_0201e9bc(data_020b93b8) == 0) {
                    uint32_t r = func_0201e9d0(data_020b93b8);
                    func_0201e92c(data_020b93b8, r, buf);
                    func_02084b2c(buf, 0, 0x18);
                    func_0201f0cc(data_020b93b8, i, buf);
                }
            }
        }
        p[0x104] = 0;
        func_0201f174(data_020b93b8);
        func_ov005_021981b8(p);
        func_ov005_021987ac(p);
        func_ov005_02198828(p);
        func_ov005_02198ab0(p);
        func_ov005_021985f8(p);
    }
}
