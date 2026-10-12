#include "ffc/types.h"

extern uint32_t data_ov006_021bc828[];
extern uint8_t data_ov006_021bc830[];

typedef struct {
    uint8_t pad[0x30];
    uint16_t cur;
    uint16_t pressed;
    uint16_t held;
    uint16_t released;
} KeyCtx;

void func_ov006_021b4ad4(void)
{
    KeyCtx *s;
    uint16_t *pp;
    uint32_t m;
    uint32_t t;
    uint32_t x;
    uint16_t old;
    uint16_t rel;
    uint32_t i;
    uint16_t bit;
    uint8_t *cnt;

    pp = (uint16_t *)0x2ffffa8;
    t = (uint32_t)(*(uint16_t *)0x4000130);
    t |= *pp;
    m = (uint32_t)pp >> 12;
    t ^= m;
    x = (uint16_t)(t & m);

    x &= ~((x & 0x40) << 1);
    x &= ~((x & 0x20) >> 1);

    s = (KeyCtx *)data_ov006_021bc828[1];
    old = s->cur;
    s->pressed = (uint16_t)((x ^ old) & x);
    rel = (uint16_t)(old ^ x);
    s->released = (uint16_t)(old & rel);
    s->cur = x;
    s->held = s->pressed;

    cnt = data_ov006_021bc830;
    for (i = 0; i < 14; i++) {
        bit = (uint16_t)(1u << i);
        if (x & bit) {
            cnt[i]++;
            if (cnt[i] == 0x28) {
                s->held |= bit;
            } else if (cnt[i] == 0x2f) {
                s->held |= bit;
                cnt[i] = 0x28;
            }
        } else {
            cnt[i] = 0;
        }
    }
}
