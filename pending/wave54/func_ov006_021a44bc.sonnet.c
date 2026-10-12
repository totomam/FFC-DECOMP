#include "ffc/types.h"

extern int func_ov006_021b4d94(void *p);
extern void func_ov006_021b46cc(void *a, void *b, void *c);
extern void func_ov006_021b0600(uint32_t v);
extern uint8_t data_ov006_021b8acc[];
extern uint8_t *data_ov006_021bc6fc;
extern uint32_t data_ov006_021b8148[];
extern uint8_t data_ov006_021b80fe[];
extern uint32_t data_ov006_021b8110[];
extern uint32_t data_ov006_021b8120[];
extern uint32_t data_ov006_021b8eec[];
extern uint32_t data_ov006_021b8108[];
extern uint8_t data_ov006_021b80fa[];

void func_ov006_021a44bc(void)
{
    uint32_t local[2];
    int i;
    int j;

    if (!func_ov006_021b4d94(data_ov006_021b8acc)) {
        return;
    }
    {
        uint8_t *g = data_ov006_021bc6fc;
        uint32_t z = 0;
        g[0x11e] = (uint8_t)~z;
    }
    for (i = 0; i < 0x2f; i++) {
        func_ov006_021b46cc(&data_ov006_021b8148[i], data_ov006_021b80fe, local);
        if (func_ov006_021b4d94(local)) {
            if (data_ov006_021bc6fc[0x124] == 0) {
                func_ov006_021b0600(9);
                return;
            }
            func_ov006_021b0600(0);
            data_ov006_021bc6fc[0x11e] = i;
            return;
        }
    }
    for (j = 0; j < 4; j++) {
        func_ov006_021b46cc(&data_ov006_021b8110[j], &data_ov006_021b8120[j], local);
        if (func_ov006_021b4d94(local)) {
            if ((j == 3 && data_ov006_021bc6fc[0x123] == 0) ||
                (j == 2 && data_ov006_021bc6fc[0x124] == 0)) {
                func_ov006_021b0600(9);
                return;
            }
            func_ov006_021b0600(data_ov006_021b8eec[j]);
            data_ov006_021bc6fc[0x11e] = j + 0x2f;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(&data_ov006_021b8108[i], data_ov006_021b80fa, local);
        if (func_ov006_021b4d94(local)) {
            func_ov006_021b0600(0);
            data_ov006_021bc6fc[0x11e] = i + 0x33;
            return;
        }
    }
}
