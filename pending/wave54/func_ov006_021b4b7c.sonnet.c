#include "ffc/types.h"

typedef struct Fl {
    uint8_t b0 : 1;
    uint8_t b1 : 1;
    uint8_t b2 : 1;
    uint8_t b3 : 1;
    uint8_t rest : 4;
} Fl;

typedef struct E { uint32_t a; uint16_t f4; uint16_t f6; } E;
typedef struct P {
    E e[5];
    uint16_t s28, s2a, s2c, s2e;
    uint8_t pad[8];
    Fl fl;
} P;

typedef struct G {
    uint8_t x0;
    uint8_t cnt;
    uint16_t x2;
    P *p;
} G;

extern G data_ov006_021bc828;

extern uint32_t func_0208ac34(void);
extern void func_0208adc4(uint16_t *out, void *entry);
extern void func_ov006_021b46b4(uint16_t a, uint16_t b, void *c);
extern uint32_t func_02081334(uint32_t a, uint32_t b);

void func_ov006_021b4b7c(void)
{
    uint16_t sp[4];
    int i;
    uint32_t r5, r7, idx;
    G *g = &data_ov006_021bc828;

    r7 = g->p->fl.b0 ? 1 : 0;
    r5 = 0;
    idx = func_0208ac34();
    g = &data_ov006_021bc828;
    for (i = 0; i < 4;) {
        P *q = g->p;
        q->s2c = q->s28;
        q->s2e = q->s2a;
        if (g->p->e[idx].f4 == 1 && g->p->e[idx].f6 == 0) {
            r5 = 1;
            func_0208adc4(sp, &g->p->e[idx]);
            func_ov006_021b46b4(sp[0], sp[1], &data_ov006_021bc828.p->s28);
            break;
        }
        i++;
        idx = func_02081334(idx + 4, 5);
    }

    data_ov006_021bc828.p->fl.b1 = r5 & (r5 ^ r7);
    data_ov006_021bc828.p->fl.b3 = (r5 ^ r7) & r7;
    data_ov006_021bc828.p->fl.b0 = r5;
    data_ov006_021bc828.p->fl.b2 = data_ov006_021bc828.p->fl.b1;

    if (r5 == 0) {
        data_ov006_021bc828.cnt = 0;
        return;
    }
    data_ov006_021bc828.cnt++;
    if (data_ov006_021bc828.cnt == 0x28) {
        data_ov006_021bc828.p->fl.b2 = 1;
        return;
    }
    if (data_ov006_021bc828.cnt == 0x2f) {
        data_ov006_021bc828.p->fl.b2 = 1;
        data_ov006_021bc828.cnt = 0x28;
    }
}
