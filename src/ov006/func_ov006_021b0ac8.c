#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
} Ent;

extern uint32_t *data_ov006_021bc7ec[];
extern Ent data_ov006_021b8982[];

extern void func_ov006_021b3dc8(uint32_t p, int z, int *x, int *y);
extern void func_ov006_021b3cec(uint32_t p, int idx, int x, uint16_t v);
extern void func_ov006_021b5770(uint32_t a, void *fn);
extern void func_ov006_021b0b44(void);

void func_ov006_021b0ac8(uint32_t a) {
    int x;
    int y;
    int i;

    func_ov006_021b3dc8(data_ov006_021bc7ec[1][3], 0, &x, &y);
    x -= 8;
    if (x > 0x68) {
        for (i = 3; i < 5; i++) {
            func_ov006_021b3cec(data_ov006_021bc7ec[1][i], -1, x, data_ov006_021b8982[i].b);
        }
        return;
    }
    x = 0x68;
    for (i = 3; i < 5; i++) {
        func_ov006_021b3cec(data_ov006_021bc7ec[1][i], -1, x, data_ov006_021b8982[i].b);
    }
    func_ov006_021b5770(a, (void *)func_ov006_021b0b44);
}
