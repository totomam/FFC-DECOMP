#include "ffc/types.h"

extern uint32_t data_ov006_021bb170[];
extern uint32_t data_ov006_021b8bc4[];
extern uint32_t data_ov006_021b8bd8[];

extern int32_t func_ov006_021a0294(void *p, uint32_t a, uint32_t b);
extern void func_020883e4(void *p);
extern void func_020884b4(void *p, uint32_t a, uint32_t b, void *fn, uint32_t c);
extern uint32_t func_ov006_021a32b0(void);
extern void func_020871d8(uint32_t a);
extern int32_t func_ov006_021a0460(void);
extern void func_02088548(void *p);
extern int32_t func_ov000_0214f044(void *p);
extern int32_t func_ov006_021a04c8(void);

int32_t func_ov006_021a05d0(void)
{
    uint32_t buf[10];
    uint32_t r7;
    int32_t r4 = 1;
    int32_t r5 = r4 - 3;
    uint8_t *r6;
    int32_t r0;
    uint32_t v;

    r6 = (uint8_t *)data_ov006_021bb170[0x17] + data_ov006_021bb170[6] * 0xc0;
    if (r5 == 0) {
        return 0;
    }
    if (func_ov006_021a0294(r6, 0, 0x30000) == 0) {
        return r4 - 3;
    }
    func_020883e4(buf);
    func_020884b4(buf, 0x3fec42, 0, (void *)func_ov006_021a04c8, 0x12);
    r7 = 0;
    do {
        v = func_ov006_021a32b0();
        if (v >= data_ov006_021b8bc4[3]) {
            r5 = -3;
            break;
        }
        if (data_ov006_021bb170[4] != 0) {
            r5 = -8;
            break;
        }
        func_020871d8(10);
        r0 = func_ov006_021a0460();
        while (r0 != 0) {
            if (r0 == 12) {
                r4 = r7;
                r5 = 1;
            } else if (r0 == 4 || r0 == 5 || r0 == 18 || r0 == 19) {
                /* nothing */
            } else if (r0 == 13) {
                if (data_ov006_021bb170[4] != 0) {
                    r4 = 0;
                    r5 = -8;
                } else {
                    if (func_ov006_021a0294(r6, 0, 0x30000) == 0) {
                        return r5;
                    }
                }
            } else {
                r4 = 0;
            }
            r0 = func_ov006_021a0460();
        }
    } while (r4 != 0);

    func_02088548(buf);
    while (func_ov006_021a0460() != 0) {
    }
    if (r5 > 0) {
        data_ov006_021bb170[8] = 1;
        if (func_ov000_0214f044(data_ov006_021b8bd8) < 0) {
            r5 = -2;
        } else {
            data_ov006_021bb170[9] = 1;
        }
    }
    return r5;
}
