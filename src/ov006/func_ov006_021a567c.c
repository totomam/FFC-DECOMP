#include "ffc/types.h"

extern int func_ov006_021b4d94(void *p);
extern void func_ov006_021b46cc(void *a, void *b, void *c);
extern void func_ov006_021b0600(int x);
extern uint8_t data_ov006_021b8acc[];
extern int8_t *data_ov006_021bc700;
extern uint32_t data_ov006_021b8400[];
extern uint8_t data_ov006_021b83ba[];
extern uint32_t data_ov006_021b83ca[];
extern uint8_t data_ov006_021b83c2[];
extern uint32_t data_ov006_021b83d2[];
extern uint8_t data_ov006_021b83c6[];

void func_ov006_021a567c(void)
{
    uint32_t buf[2];
    int i;

    if (!func_ov006_021b4d94(data_ov006_021b8acc)) {
        return;
    }
    data_ov006_021bc700[0x61] = -1;
    for (i = 0; i < 10; i++) {
        func_ov006_021b46cc(&data_ov006_021b8400[i], data_ov006_021b83ba, buf);
        if (func_ov006_021b4d94(buf)) {
            if (((uint8_t *)data_ov006_021bc700)[0x67] == 0) {
                func_ov006_021b0600(9);
                return;
            }
            func_ov006_021b0600(0);
            data_ov006_021bc700[0x61] = (int8_t)i;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(&data_ov006_021b83ca[i], data_ov006_021b83c2, buf);
        if (func_ov006_021b4d94(buf)) {
            if ((i == 0 && ((uint8_t *)data_ov006_021bc700)[0x66] == 0) ||
                (i == 1 && ((uint8_t *)data_ov006_021bc700)[0x68] == 0)) {
                func_ov006_021b0600(9);
                return;
            }
            func_ov006_021b0600(0);
            data_ov006_021bc700[0x61] = (int8_t)(i + 10);
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(&data_ov006_021b83d2[i], data_ov006_021b83c6, buf);
        if (func_ov006_021b4d94(buf)) {
            func_ov006_021b0600(0);
            data_ov006_021bc700[0x61] = (int8_t)(i + 12);
            return;
        }
    }
}
