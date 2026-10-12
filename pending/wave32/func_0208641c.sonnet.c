/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern void func_02087024(void *p);
extern uint8_t data_02fe0000[];
extern uint8_t data_02fe0544[];

void func_0208641c(uint32_t a, uint32_t b) {
    func_02088978();
    if (a != 0) {
        volatile uint32_t *f = (volatile uint32_t *)data_02fe0000;
        uint32_t m = ~b;
        f = (volatile uint32_t *)((uint8_t *)f + 0x3000);
        f[0x3fe] = f[0x3fe] & m;
    }
    func_0208898c();
    {
        volatile uint32_t *f = (volatile uint32_t *)data_02fe0000;
        f = (volatile uint32_t *)((uint8_t *)f + 0x3000);
        if (b & f[0x3fe]) {
            return;
        }
    }
    {
        volatile uint32_t *q = (volatile uint32_t *)data_02fe0000;
        q = (volatile uint32_t *)((uint8_t *)q + 0x3f8);
        q = (volatile uint32_t *)((uint8_t *)q + 0x3c00);
        do {
            func_02087024(data_02fe0544);
        } while (!(b & *q));
    }
}
