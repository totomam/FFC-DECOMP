#include "ffc/types.h"

extern int func_ov006_021b4d34(void *p);
extern void func_ov006_021b46cc(void *a, void *b, void *c);
extern void func_ov006_021a59f8(int v);
extern void func_ov006_021b0600(int v);
extern uint32_t data_ov006_021b8acc[];
extern uint32_t data_ov006_021b8400[];
extern uint8_t data_ov006_021b83ba[];
extern uint8_t *data_ov006_021bc700;
extern uint32_t data_ov006_021b83ca[];
extern uint8_t data_ov006_021b83c2[];
extern uint32_t data_ov006_021b83d2[];
extern uint8_t data_ov006_021b83c6[];

void func_ov006_021a58c0(void)
{
    uint32_t out[2];
    int i;
    int v;
    int k;

    if (func_ov006_021b4d34(data_ov006_021b8acc) == 0) {
        goto fail;
    }
    for (i = 0; i < 10; i++) {
        func_ov006_021b46cc(&data_ov006_021b8400[i], data_ov006_021b83ba, out);
        if (func_ov006_021b4d34(out) != 0) {
            if ((int8_t)data_ov006_021bc700[0x61] != i) {
                goto fail;
            }
            v = i;
            goto call;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(&data_ov006_021b83ca[i], data_ov006_021b83c2, out);
        if (func_ov006_021b4d34(out) != 0) {
            if ((int8_t)data_ov006_021bc700[0x61] != i + 10) {
                goto fail;
            }
            func_ov006_021a59f8(i + 10);
            if (i == 0) {
                data_ov006_021bc700[0x65]++;
                if (data_ov006_021bc700[0x65] < 0x28) {
                    return;
                }
                if (data_ov006_021bc700[0x66] == 0) {
                    k = 9;
                    func_ov006_021b0600(k);
                    data_ov006_021bc700[0x61] = k - 10;
                } else {
                    data_ov006_021bc700[0x60] = 0x10;
                    data_ov006_021bc700[0x65] -= 7;
                }
                return;
            }
            data_ov006_021bc700[0x65] = 0;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(&data_ov006_021b83d2[i], data_ov006_021b83c6, out);
        if (func_ov006_021b4d34(out) != 0) {
            if ((int8_t)data_ov006_021bc700[0x61] != i + 12) {
                goto fail;
            }
            v = i + 12;
            goto call;
        }
    }
fail:
    v = -1;
call:
    func_ov006_021a59f8(v);
}
