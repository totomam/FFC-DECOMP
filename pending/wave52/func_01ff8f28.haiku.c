#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);

void func_01ff8f28(uint32_t ch, uint32_t src, uint32_t dst, uint32_t cnt, uint32_t flags)
{
    uint32_t ip;
    uint32_t f1 = flags & 1;
    uint32_t f2;
    uint32_t base = 0x40000b0;
    uint32_t sad = src;
    volatile uint32_t *r2;

    if (f1 == 0) {
        ip = func_02088978();
    }
    r2 = (volatile uint32_t *)(base + ch * 12);
    if (flags & 0x10) {
        *(volatile uint32_t *)(base + 0x30 + ch * 4) = src;
        sad = base + 0x30 + ch * 4;
    } else if (flags & 0x20) {
        *(volatile uint16_t *)(base + 0x30 + ch * 4) = (uint16_t)src;
        sad = base + 0x30 + ch * 4;
    }
    r2[0] = sad;
    r2[1] = dst;
    r2[2] = cnt;
    f2 = flags & 2;
    if (f2 != 0) {
        (void)*(volatile uint32_t *)base;
        (void)*(volatile uint32_t *)base;
        if (!(flags & 4) && ch == 0) {
            r2[0] = 0;
            r2[1] = 0;
            r2[2] = 0x81400001;
        }
    }
    if (f1 == 0) {
        func_0208898c(ip);
    }
    if (f2 != 0) {
        (void)*(volatile uint32_t *)base;
        (void)*(volatile uint32_t *)base;
    }
}
