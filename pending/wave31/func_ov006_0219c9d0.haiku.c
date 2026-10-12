#include "ffc/types.h"

extern uint32_t func_02088978(void *p);
extern void func_02088f30(void);
extern void func_0208898c(uint32_t v);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
} Slot;

void func_ov006_0219c9d0(uint8_t *a, uint32_t x, uint32_t y, uint32_t z, uint32_t w)
{
    Slot *p;
    Slot *end;
    uint32_t t;

    t = func_02088978(a);
    p = (Slot *)(a + 0x30);
    end = (Slot *)(a + 0x70);
    for (;;) {
        if (p >= end) {
            func_02088f30();
        }
        if (p->fc == 0) {
            p->f0 = x;
            p->f4 = y;
            p->f8 = z;
            p->fc = w;
            break;
        }
        p++;
    }
    func_0208898c(t);
}
