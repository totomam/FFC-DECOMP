#include "ffc/types.h"

extern int func_ov006_021b4d34(void *p);
extern void func_ov006_021b46cc(void *a, void *b, void *c);
extern void func_ov006_021a59f8(int v);
extern void func_ov006_021b0600(int v);
extern uint32_t data_ov006_021b8acc[];
extern uint32_t data_ov006_021b8400[];
extern uint8_t data_ov006_021b83ba[];
typedef struct S { uint8_t pad[0x60]; int8_t s60; int8_t s61; uint8_t pad2[3]; uint8_t c65; uint8_t c66; } S;
extern S *data_ov006_021bc700;

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
            if (data_ov006_021bc700->s61 != i) {
                goto fail;
            }
            func_ov006_021a59f8(i);
            goto clear;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(&data_ov006_021b83ca[i], data_ov006_021b83c2, out);
        if (func_ov006_021b4d34(out) != 0) {
            if (data_ov006_021bc700->s61 != i + 10) {
                goto fail;
            }
            func_ov006_021a59f8(i + 10);
            if (i == 0) {
                data_ov006_021bc700->c65++;
                if (data_ov006_021bc700->c65 < 0x28) {
                    return;
                }
                if (data_ov006_021bc700->c66 == 0) {
                    i = 9;
                    func_ov006_021b0600(i);
                    i -= 10;
                    data_ov006_021bc700->s61 = i;
                } else {
                    data_ov006_021bc700->s60 = 0x10;
                    data_ov006_021bc700->c65 -= 7;
                }
                return;
            }
            goto clear;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(&data_ov006_021b83d2[i], data_ov006_021b83c6, out);
        if (func_ov006_021b4d34(out) != 0) {
            i += 12;
            if (data_ov006_021bc700->s61 != i) {
                goto fail;
            }
            func_ov006_021a59f8(i);
            goto clear;
        }
    }
fail:
    func_ov006_021a59f8(-1);
clear:
    data_ov006_021bc700->c65 = 0;
}
