#include "ffc/types.h"

extern uint32_t data_ov006_021bc7ec[];
extern uint8_t data_ov006_021b8982[];
extern uint32_t data_ov006_021bc7f0[];
extern void func_ov006_021b3dc8(void *p, int z, int *a, int *b);
extern void func_ov006_021b3cec(void *p, int m, int v, uint16_t h);
extern void func_ov006_021b5774(int z, int a);
extern void func_ov006_021b3b9c(void *p);
extern void func_ov006_021b49fc(void *p);

void func_ov006_021b0c3c(int a)
{
    uint8_t *tbl;
    int i = 0;
    int v8;
    int v4;
    int m1;

    func_ov006_021b3dc8((void *)((uint32_t *)data_ov006_021bc7ec[1])[0], 0, &v8, &v4);
    v8 -= 8;
    m1 = i - 1;
    tbl = data_ov006_021b8982;

    do {
        func_ov006_021b3cec((void *)((uint32_t *)data_ov006_021bc7ec[1])[i], m1, v8,
                            *(uint16_t *)(tbl + i * 4 + 2));
        i++;
    } while (i < 5);

    if (v8 <= 0x1d6 && v8 >= 0x100) {
        func_ov006_021b5774(0, a);
        for (i = 0; i < 5; i++) {
            func_ov006_021b3b9c((void *)((uint32_t *)data_ov006_021bc7ec[1])[i]);
        }
        func_ov006_021b49fc(data_ov006_021bc7f0);
    }
}
