#include "ffc/types.h"

extern void func_ov006_021b5774(uint32_t, uint32_t);
extern void func_ov006_021b42d8(uint32_t);
extern void func_ov006_021b3b9c(uint32_t);
extern void func_ov006_021b51a8(uint32_t);
extern void func_ov006_021b49fc(uint32_t **);
extern uint8_t *data_ov006_021bc6fc;

#define WORD(off) (*(uint32_t *)(data_ov006_021bc6fc + (off)))

void func_ov006_021a51f8(uint32_t a) {
    int j, i, k;

    func_ov006_021b5774(0, a);
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 4; i++) {
            func_ov006_021b42d8(WORD(j * 16 + i * 4));
            if (j == 0) {
                func_ov006_021b3b9c(WORD(0x104 + i * 4));
            }
        }
    }
    for (k = 0; k < 2; k++) {
        func_ov006_021b3b9c(WORD(0xfc + k * 4));
    }
    for (k = 0; k < 4; k++) {
        func_ov006_021b51a8(WORD(0xec + k * 4));
    }
    for (k = 0; k < 0x2f; k++) {
        func_ov006_021b51a8(WORD(0x30 + k * 4));
    }
    func_ov006_021b49fc((uint32_t **)&data_ov006_021bc6fc);
}
