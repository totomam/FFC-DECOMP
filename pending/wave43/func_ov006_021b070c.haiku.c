#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
} Entry;

extern void func_ov006_021b3dc8(void *a, int b, int *c, int *d);
extern void func_ov006_021b3cec(void *a, int b, int c, uint16_t d);
extern void func_ov006_021b5770(void *a, void *f);
extern void func_ov006_021b0794(void);
extern void *data_ov006_021bc7ec[];
extern Entry data_ov006_021b8982[];

void func_ov006_021b070c(void *a0)
{
    int x;
    int y;
    int i;

    func_ov006_021b3dc8(((void **)data_ov006_021bc7ec[1])[0], 0, &x, &y);
    x += 8;
    if (x < 0x20 || x > 0x100) {
        for (i = 0; i < 5; i++) {
            func_ov006_021b3cec(((void **)data_ov006_021bc7ec[1])[i], -1, x, data_ov006_021b8982[i].b);
        }
    } else {
        x = 0x20;
        for (i = 0; i < 5; i++) {
            func_ov006_021b3cec(((void **)data_ov006_021bc7ec[1])[i], -1, x, data_ov006_021b8982[i].b);
        }
        func_ov006_021b5770(a0, func_ov006_021b0794);
    }
}
