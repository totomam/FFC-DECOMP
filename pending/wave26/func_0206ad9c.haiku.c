#include "ffc/types.h"

extern void func_020878ac(uint32_t a, uint32_t b);

typedef struct {
    uint8_t pad[0x28];
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
} S;

void func_0206ad9c(S *p) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint8_t s;
    uint8_t v;
    uint16_t old;
    uint32_t a;
    uint32_t b;

    old = *ime;
    *ime = 0;
    v = 0;
    if (old != 0) {
        v = 1;
    }
    s = v;
    a = p->f34;
    b = p->f38;
    p->f38 = a;
    p->f34 = b;
    func_020878ac(b, p->f30 * 0xc1);
    p->f28 = p->f34;
    (void)*ime;
    *ime = s;
}
