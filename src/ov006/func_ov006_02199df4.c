#include "ffc/types.h"

extern uint8_t *data_ov006_021ba160;
extern uint32_t data_ov006_021ba0a0;
extern uint16_t *func_0208d4e4(void *p, int n);
extern void func_ov006_02199ae4(uint16_t *p, int n);

void func_ov006_02199df4(void *arg0)
{
    uint16_t i;
    uint16_t j;
    uint8_t *base;
    uint16_t *p;
    uint16_t v;

    for (i = 0; i < 0x10; i++) {
        base = data_ov006_021ba160 + i * 0x5d4;
        if (base[0x1d52] != 0) {
            *(uint16_t *)(base + 0x1d4a) = 0;
        }
    }

    data_ov006_021ba0a0 = 0;

    for (j = 1; j <= 0xf; j++) {
        p = func_0208d4e4(arg0, j);
        if (p) {
            v = *p;
            if (v != 0xffff && v != 0) {
                func_ov006_02199ae4(p, j);
            }
        }
    }
}
