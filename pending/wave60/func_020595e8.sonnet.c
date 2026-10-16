#include "ffc/types.h"
typedef struct { uint32_t p; volatile uint8_t f; } Lk;
extern void func_0208763c(uint32_t);
extern void func_02088f30(void);
extern uint32_t func_0205ce70(uint32_t);
extern uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void *func_0205681c(uint32_t);
extern void *func_0205ce88(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_02087678(uint32_t);
void *func_020595e8(uint32_t *self, uint32_t a, uint32_t b) {
    Lk lk;
    uint32_t i, n, r, *info;
    void *o;
    lk.p = self[4] + 0x20;
    lk.f = 1;
    if (lk.f) func_0208763c(lk.p);
    info = (uint32_t *)self[2];
    n = info[5];
    for (i = 0; i < ((uint32_t *)self[2])[5]; i++) {
        if (self[info[4] + i + 5] == 0) break;
    }
    if (i >= n) func_02088f30();
    i += ((uint32_t *)self[2])[4];
    r = func_0205816c((void *)self[4], func_0205ce70(a), b, 0x4000, 0, 0, 0x80000);
    {
        uint32_t t = (r - ((uint32_t *)self[4])[1]) >> 14;
        o = func_0205681c(0x44);
        if (o) o = func_0205ce88(o, self[3], t, r, a, i);
    }
    self[i + 5] = (uint32_t)o;
    if (lk.f) func_02087678(lk.p);
    return o;
}
