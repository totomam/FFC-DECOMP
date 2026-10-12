#include "ffc/types.h"

typedef void (*fn_t)(int);

extern void func_ov006_021b2e80(void *p);
extern void func_ov006_021b30e8(uint8_t *a, uint8_t *b);
extern void *func_ov006_021b3120(void);
extern void func_020849c4(void *dst, void *src, int n);
extern void func_ov006_021b5774(int a, void *b);
extern void func_ov006_021b49fc(void *p);
extern uint8_t *data_ov006_021bc730;

void func_ov006_021a6760(void *p) {
    uint8_t buf[4];
    uint8_t *b;
    void *ret;

    func_ov006_021b2e80(p);
    if (data_ov006_021bc730[0x1e2a0] != 0 && data_ov006_021bc730[0x1e2a1] == 0) {
        if (*(fn_t *)(data_ov006_021bc730 + 0x1e298) == 0) {
            return;
        }
        (*(fn_t *)(data_ov006_021bc730 + 0x1e298))(0);
        return;
    }

    func_ov006_021b30e8(buf + 1, buf);
    switch (buf[1]) {
    case 0: case 1: case 2: case 3: case 4:
        return;
    case 5:
        if (buf[0] == 0) {
            return;
        }
        b = data_ov006_021bc730;
        ret = func_ov006_021b3120();
        func_020849c4(ret, b + 0x1e280, 0x16);
        if (*(fn_t *)(data_ov006_021bc730 + 0x1e298) == 0) {
            data_ov006_021bc730[0x1e2a0] = 1;
            return;
        }
        (*(fn_t *)(data_ov006_021bc730 + 0x1e298))(0);
        return;
    case 6: case 7: case 8: case 9: case 10: case 11:
        return;
    case 12:
        if (buf[0] == 0) {
            return;
        }
        if (*(fn_t *)(data_ov006_021bc730 + 0x1e298) == 0) {
            data_ov006_021bc730[0x1e2a0] = 1;
            return;
        }
        (*(fn_t *)(data_ov006_021bc730 + 0x1e298))(1);
        return;
    case 13:
        if (buf[0] == 0) {
            return;
        }
        if (*(fn_t *)(data_ov006_021bc730 + 0x1e298) == 0) {
            data_ov006_021bc730[0x1e2a0] = 1;
            return;
        }
        (*(fn_t *)(data_ov006_021bc730 + 0x1e298))(2);
        return;
    case 14: case 15: case 16: case 17: case 18: case 19:
        return;
    case 20:
    case 0x17:
        if (buf[0] == 0) {
            return;
        }
        if (*(fn_t *)(data_ov006_021bc730 + 0x1e298) == 0) {
            data_ov006_021bc730[0x1e2a0] = 1;
            return;
        }
        (*(fn_t *)(data_ov006_021bc730 + 0x1e298))(3);
        return;
    case 0x1a:
    case 0x1d:
        if (buf[0] == 0) {
            return;
        }
        if (*(fn_t *)(data_ov006_021bc730 + 0x1e298) == 0) {
            data_ov006_021bc730[0x1e2a0] = 1;
            return;
        }
        (*(fn_t *)(data_ov006_021bc730 + 0x1e298))(4);
        return;
    case 0x22:
        func_ov006_021b5774(0, p);
        func_ov006_021b49fc(&data_ov006_021bc730);
        return;
    default:
        return;
    }
}
