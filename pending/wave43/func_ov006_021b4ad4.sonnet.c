#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x30];
    uint16_t cur;
    uint16_t pressed;
    uint16_t held;
    uint16_t released;
} KeyCtx;
typedef struct { uint32_t a; KeyCtx *s; } Hold;

extern Hold data_ov006_021bc828;
extern uint8_t data_ov006_021bc830[];

void func_ov006_021b4ad4(void)
{
    uint16_t *pp = (uint16_t *)0x2ffffa8;
    uint32_t t;
    Hold *h = &data_ov006_021bc828;
    uint32_t m;
    int32_t x;
    uint32_t i;
    uint16_t bit;
    uint16_t old;

    t = *(volatile uint16_t *)0x4000130;
    t |= *pp;
    m = (uint32_t)pp >> 12;
    t ^= m;
    x = (uint16_t)(t & m);
    {
        int32_t a = (x & 0x40) << 1;
        int32_t b = (x & 0x20) >> 1;
        x = (uint16_t)(~b & (x & ~a));
    }

    old = h->s->cur;
    h->s->pressed = (uint16_t)((x ^ old) & x);
    h->s->released = (uint16_t)(h->s->cur & (x ^ h->s->cur));
    h->s->cur = x;
    h->s->held = h->s->pressed;

    for (i = 0; i < 14; i++) {
        bit = (uint16_t)(1u << i);
        if (x & bit) {
            data_ov006_021bc830[i]++;
            if (data_ov006_021bc830[i] == 0x28) {
                h->s->held |= bit;
            } else if (data_ov006_021bc830[i] == 0x2f) {
                h->s->held |= bit;
                data_ov006_021bc830[i] = 0x28;
            }
        } else {
            data_ov006_021bc830[i] = 0;
        }
    }
}
