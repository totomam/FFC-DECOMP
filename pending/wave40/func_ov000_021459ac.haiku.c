#include "ffc/types.h"

extern void *func_02088978(void);
extern void func_02087024(uint32_t arg);
extern void func_0208898c(void *base);
extern uint32_t data_02141510[];

typedef struct {
    uint32_t w0[8];
    uint32_t f20;
    uint32_t w24[11];
    uint32_t f50;
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
    uint32_t f60;
    uint32_t f64;
} G;

extern G data_ov000_0216bc60;

uint32_t func_ov000_021459ac(uint32_t *p)
{
    void *base = func_02088978();
    G *g = &data_ov000_0216bc60;
    uint32_t r3;
    uint32_t zero = 0;
    volatile uint32_t tmp;

    if (g->f64 == g->f60) {
        do {
            tmp = data_02141510[1];
            g->f54 = tmp;
            func_02087024(zero);
            g->f54 = zero;
        } while (g->f64 == g->f60);
    }

    func_0208898c(base);

    for (;;) {
        G *h = &data_ov000_0216bc60;
        if (h->f5c - h->f64 < 2) {
            h->f64 = zero;
        }
        r3 = *(uint16_t *)((uint8_t *)h->f20 + h->f64);
        if (r3 == 0) {
            h->f64 = zero;
        }
        if (r3 != 0) {
            break;
        }
    }

    *p = r3 - 2;
    return data_ov000_0216bc60.f20 + data_ov000_0216bc60.f64 + 2;
}
