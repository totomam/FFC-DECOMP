#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x1d48];
    uint16_t a;
    uint16_t b;
    uint16_t c;
    uint8_t pad1[4];
    uint8_t f;
} S;

extern uint32_t data_ov006_021ba0a0;
extern uint8_t *data_ov006_021ba160;

void func_ov006_0219a314(uint32_t idx)
{
    S *p;
    if (!(data_ov006_021ba0a0 & (1u << idx))) return;
    p = (S *)(idx * 0x5d4 + data_ov006_021ba160);
    if (p->f == 0) return;
    if (p->c == 0) return;
    if (p->b <= p->a && p->a <= p->b + 2) {
        p->a++;
    } else {
        p->a = p->b;
    }
}
