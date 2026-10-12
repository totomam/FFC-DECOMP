#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t v);

typedef struct {
    int32_t f0[7];
    int32_t n0;
    int32_t d0;
    int32_t q0;
    int32_t n1;
    int32_t d1;
    int32_t q2;
    uint16_t flag;
} Data;

extern Data data_021434e4;

typedef struct {
    int16_t a;
    int16_t b;
    int16_t c;
    int16_t d;
} Args;

void func_0208a8d4(Args *s)
{
    uint32_t r6;
    int32_t q;

    if (s == 0) {
        data_021434e4.flag = 0;
        return;
    }

    r6 = func_02088978();

    if (s->c != 0) {
        int16_t c = s->c;
        *(volatile uint16_t *)0x4000280 = 0;
        *(volatile uint32_t *)0x4000290 = 1U << 28;
        *(volatile int32_t *)0x4000298 = c;
        *(volatile int32_t *)0x400029c = 0;
        data_021434e4.n0 = s->a;
        data_021434e4.d0 = c;
        while (*(volatile uint16_t *)0x4000280 & 0x8000) {
        }
        q = *(volatile int32_t *)0x40002a0;
    } else {
        data_021434e4.n0 = 0;
        data_021434e4.d0 = 0;
        q = 0;
    }
    data_021434e4.q0 = q;

    if (s->d != 0) {
        int16_t d = s->d;
        *(volatile uint16_t *)0x4000280 = 0;
        *(volatile uint32_t *)0x4000290 = 1U << 28;
        *(volatile int32_t *)0x4000298 = d;
        *(volatile int32_t *)0x400029c = 0;
        data_021434e4.n1 = s->b;
        data_021434e4.d1 = d;
        while (*(volatile uint16_t *)0x4000280 & 0x8000) {
        }
        q = *(volatile int32_t *)0x40002a0;
    } else {
        data_021434e4.n1 = 0;
        data_021434e4.d1 = 0;
        q = 0;
    }
    data_021434e4.q2 = q;

    func_0208898c(r6);
    data_021434e4.flag = 1;
}
