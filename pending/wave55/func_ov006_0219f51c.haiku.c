#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_02084ca4(void *a, void *b, uint32_t c);
extern void func_ov000_0214fcbc(void);
extern int func_ov006_0219fa6c(int a, void *b, uint32_t c, uint32_t d);
extern void func_020883e4(void *s);
extern void func_020884b4(void *s, uint32_t a, uint32_t b, void *f, uint32_t c);
extern int func_02087508(void *a, void *b, uint32_t c);
extern void func_02088548(void *s);
extern int func_ov006_0219fa28(void *a, int b);
extern void func_ov006_0219f1b4(void *p, void *q);
extern int func_ov006_0219fc28(void *a, void *b, uint32_t c);
extern void func_ov006_0219f1d8(int a, void *b, int c);
extern void func_ov006_0219f1fc(void);
extern uint8_t data_ov006_021bb0c0[];
extern uint8_t data_ov006_021bafe0[];
extern uint8_t data_ov006_021bb000[];

int func_ov006_0219f51c(uint32_t *p0, int arg1)
{
    int r4 = 1;
    int result = r4 - 2;
    uint32_t *p = p0;
    uint32_t r5;
    uint32_t r6 = 0;
    uint32_t cnt;
    uint32_t v;
    uint32_t v2;
    uint32_t i;
    uint32_t st[10];
    uint8_t *data = data_ov006_021bb0c0;

    if (p[9] == 0) {
        r5 = 1 << 19;
    } else if (p[9] == 1) {
        r5 = 3 << 18;
    }
    r5 |= 3 << 16;

    func_02084b2c(data_ov006_021bb0c0, 0, 0x60);

    switch (p[10]) {
    case 5:
        data[0] = 1;
        break;
    case 0xd:
        data[0] = 2;
        break;
    case 0x10:
        data[0] = 3;
        break;
    default:
        return -1;
    }

    data[1] = 0;
    func_02084ca4((uint8_t *)p + 0x2c, data + 2, p[10]);
    func_ov000_0214fcbc();

    if (func_ov006_0219fa6c(0, &p[1], p[0], 0x30bffe) == 0) {
        goto end;
    }

    cnt = 0;
    func_020883e4(st);
    func_020884b4(st, 0x3fec42, 0, (void *)func_ov006_0219f1fc, 0x12);

    while (r4) {
        func_02087508(data_ov006_021bafe0, &v, 1);
        if (v > 0x13) {
            r4 = 0;
            continue;
        }
        switch (v) {
        case 4:
        case 8:
            break;
        case 5:
            if (r6 != 0) {
                break;
            }
            func_02088548(st);
            if (func_ov006_0219fa28(data_ov006_021bb000, 1) != 1) {
                r4 = 0;
                break;
            }
            func_ov006_0219f1b4(p, data_ov006_021bb000);
            for (i = 0; i < *(uint16_t *)(data_ov006_021bb000 + 0xa); i++) {
            }
            if (func_ov006_0219fc28(data_ov006_021bb000, data_ov006_021bb0c0, r5) == 0) {
                r4 = 0;
            } else {
                r6 = 1;
            }
            break;
        case 10:
            func_ov006_0219f1b4(p, data_ov006_021bb000);
            if (func_ov006_0219fc28(data_ov006_021bb000, data_ov006_021bb0c0, r5) == 0) {
                r4 = 0;
            }
            break;
        case 12:
            r4 = 0;
            result = 0;
            break;
        case 13:
            cnt++;
            if (cnt >= 3) {
                r4 = 0;
                break;
            }
            if (func_ov006_0219fc28(data_ov006_021bb000, data_ov006_021bb0c0, r5) == 0) {
                r4 = 0;
            }
            break;
        case 18:
            if (r6 == 0) {
                r4 = 0;
            }
            break;
        case 19:
            break;
        default:
            r4 = 0;
            break;
        }
    }

    func_02088548(st);
    do {
        v2 = func_02087508(data_ov006_021bafe0, &v, 0);
    } while (v2 == 1);

end:
    func_ov006_0219f1d8(arg1, data_ov006_021bb000, result == 0);
    return result;
}
