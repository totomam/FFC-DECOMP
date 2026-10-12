#include "ffc/types.h"

typedef struct G {
    uint8_t x0;
    uint8_t cnt;
    uint16_t x2;
    uint8_t *p;
} G;

typedef struct Fl {
    uint8_t b0 : 1;
    uint8_t b1 : 1;
    uint8_t b2 : 1;
    uint8_t b3 : 1;
    uint8_t rest : 4;
} Fl;

extern G data_ov006_021bc828;

extern uint32_t func_0208ac34(void);
extern void func_0208adc4(uint16_t *out, void *entry);
extern void func_ov006_021b46b4(uint16_t a, uint16_t b, void *c);
extern uint32_t func_02081334(uint32_t a, uint32_t b);

void func_ov006_021b4b7c(void)
{
    uint16_t sp[2];
    uint32_t r5, r7, i, idx;

    if (((Fl *)(data_ov006_021bc828.p + 0x38))->b0) {
        r7 = 1;
    } else {
        r7 = 0;
    }
    r5 = 0;
    idx = func_0208ac34();
    for (i = 0; i < 4; i++) {
        *(uint16_t *)(data_ov006_021bc828.p + 0x2c) = *(uint16_t *)(data_ov006_021bc828.p + 0x28);
        *(uint16_t *)(data_ov006_021bc828.p + 0x2e) = *(uint16_t *)(data_ov006_021bc828.p + 0x2a);
        if (*(uint16_t *)(data_ov006_021bc828.p + idx * 8 + 4) == 1 &&
            *(uint16_t *)(data_ov006_021bc828.p + idx * 8 + 6) == 0) {
            func_0208adc4(sp, data_ov006_021bc828.p + idx * 8);
            r5 = 1;
            func_ov006_021b46b4(sp[0], sp[1], data_ov006_021bc828.p + 0x28);
            break;
        }
        idx = func_02081334(idx + 4, 5);
    }

    ((Fl *)(data_ov006_021bc828.p + 0x38))->b1 = r5 & (r5 ^ r7);
    ((Fl *)(data_ov006_021bc828.p + 0x38))->b3 = (r5 ^ r7) & r7;
    ((Fl *)(data_ov006_021bc828.p + 0x38))->b0 = r5;
    ((Fl *)(data_ov006_021bc828.p + 0x38))->b2 = ((Fl *)(data_ov006_021bc828.p + 0x38))->b1;

    if (r5 == 0) {
        data_ov006_021bc828.cnt = 0;
        return;
    }
    data_ov006_021bc828.cnt++;
    if (data_ov006_021bc828.cnt == 0x28) {
        ((Fl *)(data_ov006_021bc828.p + 0x38))->b2 = 1;
        return;
    }
    if (data_ov006_021bc828.cnt == 0x2f) {
        ((Fl *)(data_ov006_021bc828.p + 0x38))->b2 = 1;
        data_ov006_021bc828.cnt = 0x28;
    }
}
