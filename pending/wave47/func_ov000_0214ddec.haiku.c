#include "ffc/types.h"

typedef uint32_t (*fn18_t)(uint32_t);

extern uint32_t func_02088978(void *p);
extern void func_02084e04(void *a, void *dst, uint32_t b);
extern void func_02087058(void *p);
extern void func_0208898c(uint32_t x);
extern uint8_t *data_ov000_02169a34;
extern uint32_t data_ov000_0216e070[];

uint32_t func_ov000_0214ddec(void *a, uint32_t b, uint8_t *c)
{
    uint8_t *s = *(uint8_t **)(c + 0xa0);
    uint32_t h = func_02088978(c + 0xa0);
    uint8_t *e;

    if (*(uint16_t *)(s + 0x10a) < *(uint16_t *)(s + 0x108) + b) {
        data_ov000_0216e070[1]++;
    } else {
        fn18_t f = *(fn18_t *)(data_ov000_02169a34 + 0x18);
        e = (uint8_t *)f(b + 0xc);
        if (e == 0) {
            data_ov000_0216e070[0]++;
        } else {
            *(uint16_t *)(s + 0x108) += (uint16_t)b;
            *(uint32_t *)e = 0;
            *(uint16_t *)(e + 4) = (uint16_t)b;
            *(uint16_t *)(e + 6) = *(uint16_t *)(c + 0x18);
            *(uint32_t *)(e + 8) = *(uint32_t *)(c + 0x1c);
            func_02084e04(a, e + 0xc, b);
            if (*(uint8_t **)(s + 0x100) != 0) {
                **(uint8_t ***)(s + 0x100) = e;
            }
            *(uint8_t **)(s + 0x100) = e;
            if (*(uint8_t **)(s + 0x104) == 0) {
                *(uint8_t **)(s + 0x104) = e;
            }
        }
    }

    if (*(uint16_t *)(c + 0xb0) == 0) {
        *(uint16_t *)(c + 0xb0) = *(uint16_t *)(c + 0xa);
    }
    *(uint16_t *)(c + 0x18) = *(uint16_t *)(c + 0x1a);
    *(uint32_t *)(c + 0x1c) = *(uint32_t *)(c + 0x20);
    func_02087058(s + 0x10c);
    func_0208898c(h);
    return 1;
}
