#include "ffc/types.h"

extern void func_ov000_02146940(void *p, int v);
extern uint32_t func_02088978(void);
extern void func_02087024(uint32_t v);
extern void func_0208898c(uint32_t v);
extern void func_020870e8(void);

uint32_t func_ov000_02147a14(uint32_t *out, uint8_t *s)
{
    uint32_t h;
    uint32_t i;
    uint32_t r;

    if (s[8] == 4) {
        func_ov000_02146940(s, 1);
    }
    if (*(uint32_t *)(s + 0x50) == 0 && s[8] == 4) {
        h = func_02088978();
        i = 0;
        while (*(uint32_t *)(s + 0x50) == 0 && s[8] == 4) {
            *(uint32_t *)(s + 4) = 2;
            func_02087024(i);
        }
        func_0208898c(h);
    } else {
        func_020870e8();
    }
    r = *(uint32_t *)(s + 0x50);
    *out = r;
    if (r != 0) {
        return *(uint32_t *)(s + 0x4c);
    }
    return 0;
}
