#include "ffc/types.h"

extern void func_ov000_0214c434(void *p, uint32_t x);
extern uint32_t func_02088978(void);
extern void func_ov000_0214c46c(void *dst, const void *src, uint32_t n);
extern void func_ov000_0214c4ec(void *a, const void *b);
extern void func_0208898c(uint32_t h);
extern uint8_t data_ov000_0216de88[];
extern uint8_t data_ov000_0216de80[];

void func_ov000_0214b0e0(void *a, uint32_t b)
{
    uint8_t buf[0x5c];
    uint32_t h;

    func_ov000_0214c434(buf, b);
    h = func_02088978();
    func_ov000_0214c46c(buf, data_ov000_0216de88, 0x14);
    func_ov000_0214c46c(buf, a, b);
    func_ov000_0214c4ec(buf, data_ov000_0216de88);
    func_0208898c(h);
    data_ov000_0216de80[0] = 1;
}
