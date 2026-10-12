#include "ffc/types.h"

extern void func_ov006_021a1018(uint8_t *buf);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_ov006_021a3334(uint8_t *dst, uint8_t *src);
extern uint8_t data_ov006_021b8c84[];
extern uint8_t data_ov006_021bb620[];
extern uint8_t data_ov006_021bb618[];
extern uint32_t data_ov006_021b8bc4[];

int func_ov006_021a1024(uint8_t *out)
{
    uint8_t x2[0x20];
    uint8_t x1[0x20];
    uint8_t x0[12];
    uint8_t *m;
    int32_t r;

    out[0xc] = data_ov006_021b8c84[0];
    out[0xd] = data_ov006_021b8c84[1];
    out[0xe] = data_ov006_021b8c84[2];
    out[0xf] = data_ov006_021b8c84[3];

    m = x0 + 4;
    m[2] = data_ov006_021bb620[0];
    m[3] = data_ov006_021bb620[1];
    m[4] = data_ov006_021bb620[2];
    m[5] = data_ov006_021bb620[3];
    m[6] = data_ov006_021bb620[4];
    m[7] = data_ov006_021bb620[5];

    m[2] &= 0xfd;
    func_ov006_021a1018(x0);

    data_ov006_021bb618[0] = x0[0];
    data_ov006_021bb618[1] = x0[1];
    data_ov006_021bb618[2] = x0[2];
    data_ov006_021bb618[3] = x0[3];
    data_ov006_021bb618[4] = x0[4];
    data_ov006_021bb618[5] = x0[5];

    r = func_02090410(m + 2, x0, 6);
    if (r > 0) {
        out[0] = m[2];
        out[1] = m[3];
        out[2] = m[4];
        out[3] = m[5];
        out[4] = m[6];
        out[5] = m[7];
        out[6] = x0[0];
        out[7] = x0[1];
        out[8] = x0[2];
        out[9] = x0[3];
        out[10] = x0[4];
        out[11] = x0[5];
    } else {
        out[0] = x0[0];
        out[1] = x0[1];
        out[2] = x0[2];
        out[3] = x0[3];
        out[4] = x0[4];
        out[5] = x0[5];
        out[6] = m[2];
        out[7] = m[3];
        out[8] = m[4];
        out[9] = m[5];
        out[10] = m[6];
        out[11] = m[7];
    }

    if (data_ov006_021b8bc4[1] != 0) {
        func_ov006_021a3334(x2, x0);
        func_ov006_021a3334(x1, m + 2);
    }
    return 1;
}
