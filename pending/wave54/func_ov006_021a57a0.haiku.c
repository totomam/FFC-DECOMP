#include "ffc/types.h"

extern int32_t func_ov006_021b4e54(void *p);
extern void func_ov006_021b46cc(void *a, void *b, void *c);
extern void func_ov006_021a5d44(void);
extern uint8_t *data_ov006_021bc700;
extern uint8_t data_ov006_021b8acc[];
extern uint32_t data_ov006_021b8400[];
extern uint8_t data_ov006_021b83ba[];
extern uint8_t data_ov006_021b83da[];
extern uint32_t data_ov006_021b83ca[];
extern uint8_t data_ov006_021b83c2[];
extern uint8_t data_ov006_021b83b7[];
extern uint32_t data_ov006_021b83d2[];
extern uint8_t data_ov006_021b83c6[];
extern uint8_t data_ov006_021b83b4[];

void func_ov006_021a57a0(void)
{
    uint32_t buf[2];
    int32_t i;

    data_ov006_021bc700[0x60] = 0;
    if (func_ov006_021b4e54(data_ov006_021b8acc) == 0) {
        return;
    }
    for (i = 0; i < 10; i++) {
        func_ov006_021b46cc(&data_ov006_021b8400[i], data_ov006_021b83ba, buf);
        if (func_ov006_021b4e54(buf) != 0) {
            if ((int8_t)data_ov006_021bc700[0x61] != i) {
                return;
            }
            data_ov006_021bc700[0x60] = data_ov006_021b83da[i];
            data_ov006_021bc700[0x63] = (uint8_t)i;
            func_ov006_021a5d44();
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(&data_ov006_021b83ca[i], data_ov006_021b83c2, buf);
        if (func_ov006_021b4e54(buf) != 0) {
            if ((int8_t)data_ov006_021bc700[0x61] != i + 10) {
                return;
            }
            data_ov006_021bc700[0x60] = data_ov006_021b83b7[i];
            data_ov006_021bc700[0x63] = (uint8_t)(i + 10);
            func_ov006_021a5d44();
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(&data_ov006_021b83d2[i], data_ov006_021b83c6, buf);
        if (func_ov006_021b4e54(buf) != 0) {
            if ((int8_t)data_ov006_021bc700[0x61] != i + 12) {
                return;
            }
            data_ov006_021bc700[0x60] = data_ov006_021b83b4[i];
            data_ov006_021bc700[0x63] = (uint8_t)(i + 12);
            func_ov006_021a5d44();
            return;
        }
    }
}
