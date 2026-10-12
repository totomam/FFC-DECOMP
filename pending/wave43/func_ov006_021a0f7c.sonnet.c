#include "ffc/types.h"

extern int func_ov006_021a0dd0(int a, int b, uint8_t *c, int d);
extern int func_ov006_021a0d0c(int a, int b, void *c, int d, int e);
extern uint8_t data_ov006_021b5818[];
extern int data_ov006_021b8bc4;
extern uint8_t data_ov006_021bb170[];
extern uint8_t data_ov006_021bb618[];
extern uint8_t data_ov006_021bb6a4[];

int func_ov006_021a0f7c(int a)
{
    uint8_t buf[9];
    uint32_t n;
    uint8_t *d;
    uint8_t *s;
    uint8_t v;
    int r0;
    int r3;

    *(uint16_t *)buf = 0x100;
    for (n = 0; n < 7; n++) buf[n + 2] = data_ov006_021b5818[n];

    r0 = func_ov006_021a0dd0(data_ov006_021b8bc4, 1, buf, 2);
    r0 = func_ov006_021a0dd0(r0, 2, buf, 2);
    if (*(int *)(data_ov006_021bb170 + 0x50) != 0) {
        r0 = func_ov006_021a0dd0(r0, 5, buf, 2);
    }
    r0 = func_ov006_021a0dd0(r0, 3, buf + 2, 7);
    r3 = r0;
    if (*(int *)(data_ov006_021bb170 + 0x50) != 0) {
        r0 = func_ov006_021a0dd0(r0, 4, data_ov006_021bb618, 6);
        r3 = r0;
    }
    return func_ov006_021a0d0c(a, 2, data_ov006_021bb6a4, r3 - data_ov006_021b8bc4 + 8, 0);
}
