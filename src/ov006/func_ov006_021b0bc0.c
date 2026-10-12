#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
} Ent;

typedef struct {
    uint32_t a;
    int y;
    int x;
} Frame;

extern uint32_t *data_ov006_021bc7ec[];
extern Ent data_ov006_021b8982[];

extern void func_ov006_021b3dc8(uint32_t p, int z, int *x, int *y);
extern void func_ov006_021b3cec(uint32_t p, int idx, int x, uint16_t v);
extern void func_ov006_021b5770(uint32_t a, void *fn);
extern void func_ov006_021b0c3c(void);

void func_ov006_021b0bc0(uint32_t a) {
    Frame f;
    int i;

    f.a = a;
    func_ov006_021b3dc8(data_ov006_021bc7ec[1][1], 0, &f.x, &f.y);
    f.x -= 8;
    if (f.x > 0x20) {
        for (i = 1; i < 5; i++) {
            func_ov006_021b3cec(data_ov006_021bc7ec[1][i], -1, f.x, data_ov006_021b8982[i].b);
        }
        return;
    }
    f.x = 0x20;
    for (i = 1; i < 5; i++) {
        func_ov006_021b3cec(data_ov006_021bc7ec[1][i], -1, f.x, data_ov006_021b8982[i].b);
    }
    func_ov006_021b5770(f.a, (void *)func_ov006_021b0c3c);
}
