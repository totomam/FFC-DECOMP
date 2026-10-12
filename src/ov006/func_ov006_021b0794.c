#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
} Ent;

extern uint32_t data_ov006_021bc7ec[];
extern Ent data_ov006_021b8982[];
extern void func_ov006_021b3dc8(uint32_t a, uint32_t b, int32_t *c, int32_t *d);
extern void func_ov006_021b3cec(uint32_t a, int32_t b, int32_t c, uint32_t d);
extern void func_ov006_021b081c(void);
extern void func_ov006_021b5770(uint32_t a, void (*f)(void));

void func_ov006_021b0794(uint32_t a0)
{
    int32_t buf[3];
    int32_t i;

    buf[0] = a0;
    func_ov006_021b3dc8(((uint32_t *)data_ov006_021bc7ec[1])[1], 0, &buf[2], &buf[1]);
    buf[2] += 8;
    if (buf[2] < 0x50 || buf[2] > 0x100) {
        for (i = 1; i < 5; i++) {
            func_ov006_021b3cec(((uint32_t *)data_ov006_021bc7ec[1])[i], -1, buf[2], data_ov006_021b8982[i].b);
        }
        return;
    }
    buf[2] = 0x50;
    for (i = 1; i < 5; i++) {
        func_ov006_021b3cec(((uint32_t *)data_ov006_021bc7ec[1])[i], -1, buf[2], data_ov006_021b8982[i].b);
    }
    func_ov006_021b5770(buf[0], func_ov006_021b081c);
}
