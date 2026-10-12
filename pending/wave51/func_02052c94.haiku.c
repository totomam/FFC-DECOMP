#include "ffc/types.h"

extern void func_0208763c(void);
extern uint32_t func_02056830(uint32_t p);
extern void func_02052d98(void *a, uint32_t idx, uint32_t z, uint32_t v, uint32_t p, uint32_t q);
extern void func_02087678(void *p);

typedef struct Entry {
    uint32_t x;
    uint32_t y;
} Entry;

void func_02052c94(uint8_t *a, uint32_t idx) {
    uint8_t *q = a + 0x20;
    volatile uint8_t flag = 1;
    uint32_t i = idx;

    if (flag) {
        func_0208763c();
    }
    if (((uint32_t *)(*(uint32_t *)(a + 0x1c)))[i] == 0) {
        uint32_t r7 = ((Entry *)(*(uint32_t *)(a + 0x14)))[i].y;
        uint32_t v = func_02056830(r7);
        ((uint32_t *)(*(uint32_t *)(a + 0x18)))[i] = v;
        func_02052d98(a, i, 0, v, r7, 0);
    }
    {
        volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
        uint16_t old = *ime;
        *ime = 0;
        ((uint32_t *)(*(uint32_t *)(a + 0x1c)))[i] += 1;
        (void)*ime;
        *ime = (old != 0) ? 1 : 0;
    }
    if (flag) {
        func_02087678(q);
    }
}
