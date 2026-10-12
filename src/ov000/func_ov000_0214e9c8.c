#include "ffc/types.h"

extern int32_t func_ov000_0214ecc8(void *p);
extern uint32_t func_02088978(void);
extern int32_t func_ov000_0214ea74(void *p);
extern int32_t func_ov000_0214e0a4(void *p);
extern void func_0208898c(uint32_t x);

typedef struct {
    uint8_t pad0[8];
    uint8_t b8;
    uint8_t pad9[0xa3];
    volatile int16_t flags;
    uint8_t padae[1];
    int8_t mode;
} S;

uint32_t func_ov000_0214e9c8(void *p0) {
    S *p = (S *)p0;
    uint32_t r4 = 0;
    uint32_t r6;
    uint32_t x;
    int32_t r1;

    if (func_ov000_0214ecc8(p0) != 0) {
        x = 0x80;
        goto tail;
    }
    if (p->flags & 0x40) {
        r4 |= 0x20;
    }
    if (p->mode == 1 || (p->flags & 4)) {
        r6 = func_02088978();
        if (func_ov000_0214ea74(p0) > 0) {
            r4 |= 1;
        }
        if (func_ov000_0214e0a4(p0) > 0) {
            r4 |= 8;
        }
        func_0208898c(r6);
    }
    r1 = 1;
    if (p->mode != 0 && p->mode != 4) {
        r1 = 0;
    }
    if (r1 == 0) goto end;
    {
        if ((p->flags & 4) && p->b8 != 4 && !(r4 & 1)) {
            p->flags &= ~6;
        }
    }
    if (p->flags & 2) {
        goto end;
    }
    if (p->flags & 4) {
        goto end;
    }
    x = 0x40;
tail:
    r4 |= x;
end:
    return r4;
}
