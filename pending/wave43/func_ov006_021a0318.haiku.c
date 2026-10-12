#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t *f8;
    uint32_t fc;
    uint32_t f10[6];
    uint32_t f28;
    int32_t f2c;
    uint32_t f30[3];
    uint32_t f3c;
    uint32_t f40[3];
    uint32_t f4c;
} Data;

extern void *func_02088978(void);
extern void func_0208898c(void *p);
extern int func_ov000_0214f384(uint32_t a, uint32_t b);
extern int func_ov000_0214f4f0(void *a, void (*b)(void));
extern void func_ov006_0219fd64(void);
extern Data data_ov006_021bb170;
extern void *data_ov006_021bb1f0;

int func_ov006_021a0318(void *p0, uint32_t p1, uint32_t p2)
{
    void *h = func_02088978();
    uint32_t base;
    uint32_t r6;

    base = (p1 + 0x63) & ~3u;
    data_ov006_021bb170.f28 = p1;
    data_ov006_021bb170.f8 = (uint32_t *)base;
    r6 = (base + 0x2f) & ~0x1fu;
    data_ov006_021bb170.f3c = r6;
    r6 = (r6 + 0x231f) & ~0x1fu;
    data_ov006_021bb170.f4c = r6;
    r6 = (r6 + 0xdf) & ~0x1fu;
    data_ov006_021bb170.f8[1] = r6;
    p1 += p2;
    data_ov006_021bb170.f8[2] = p1 - data_ov006_021bb170.f8[1];
    data_ov006_021bb170.f8[3] = 0;
    data_ov006_021bb170.f8[0] = 3;
    data_ov006_021bb1f0 = p0;

    if (data_ov006_021bb170.f2c == 0) {
        if (func_ov000_0214f384(data_ov006_021bb170.f3c, 0x2300) != 0) {
            func_0208898c(h);
            return 0;
        }
        data_ov006_021bb170.f2c = 1;
    }

    if (data_ov006_021bb170.f2c == 1) {
        if (func_ov000_0214f4f0(data_ov006_021bb170.f8, func_ov006_0219fd64) == 3) {
            data_ov006_021bb170.f2c = 4;
            func_0208898c(h);
            return 1;
        }
        func_0208898c(h);
        return 0;
    }

    func_0208898c(h);
    return 0;
}
