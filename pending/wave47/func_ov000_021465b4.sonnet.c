#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02084e04(uint8_t *dst, uint32_t src, uint32_t n);
extern void func_020870a0(void *object);
extern void func_0208898c(uint32_t v);
extern uint8_t data_02141510[];

void func_ov000_021465b4(uint8_t *p, uint8_t *q, uint32_t n)
{
    uint32_t irq;
    uint8_t *m;
    uint8_t *obj;
    uint32_t key;
    uint32_t lim;

    irq = func_02088978();
    m = *(uint8_t **)(data_02141510 + 8);
    while (m != 0) {
        obj = *(uint8_t **)(m + 0xa4);
        if (obj != 0 && *(uint32_t *)obj != 0 && obj[8] == 0xb &&
            (uint16_t)*(uint32_t *)obj == *(uint16_t *)(q + 4) &&
            *(uint16_t *)(obj + 0xa) == *(uint16_t *)(q + 6) &&
            *(uint32_t *)(obj + 0x50) == 0) {
            { uint16_t h0 = *(uint16_t *)(p + 0xc); uint16_t h1 = *(uint16_t *)(p + 0xe);
            uint16_t s0 = (uint16_t)((h0 >> 8) | (h0 << 8)); uint16_t s1 = (uint16_t)((h1 >> 8) | (h1 << 8));
            key = ((uint32_t)s0 << 16) | s1; }
            if (*(uint32_t *)(obj + 0x1c) == key) {
                n -= 8;
                lim = *(uint32_t *)(obj + 0x48);
                if (n > lim) {
                    *(uint32_t *)(obj + 0x50) = lim;
                } else {
                    *(uint32_t *)(obj + 0x50) = n;
                }
                q += 8;
                func_02084e04(q, *(uint32_t *)(obj + 0x4c), *(uint32_t *)(obj + 0x50));
                if (*(uint32_t *)(obj + 4) == 3) {
                    *(uint32_t *)(obj + 4) = 0;
                    func_020870a0(*(void **)obj);
                }
                break;
            }
        }
        m = *(uint8_t **)(m + 0x68);
    }
    func_0208898c(irq);
}
