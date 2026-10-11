#include "ffc/types.h"

typedef struct {
    uint8_t a;
    uint8_t *p;
} DataG;

extern void func_ov006_0219f2d4(void);
extern void func_ov006_021b028c(uint8_t *p);
extern void func_ov006_021b49fc(void *p);
extern DataG data_ov006_021bc704;
extern uint8_t data_ov006_021bc708[];

void func_ov006_021a6044(void *p)
{
    func_ov006_0219f2d4();
    if (p != 0) {
        uint8_t *q = data_ov006_021bc704.p;
        if (q[0x116] == 0 && data_ov006_021bc704.a == 1) {
            func_ov006_021b028c(q + 0x117);
        }
    }
    func_ov006_021b49fc(data_ov006_021bc708);
}
