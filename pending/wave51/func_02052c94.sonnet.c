#include "ffc/types.h"

extern void func_0208763c(void);
extern uint32_t func_02056830(uint32_t p);
extern void func_02052d98(void *a, uint32_t idx, uint32_t z, uint32_t v, uint32_t p, uint32_t q);
extern void func_02087678(void *p);

void func_02052c94(uint8_t *a, uint32_t idx) {
    struct { uint32_t pad; uint8_t *q; volatile uint8_t flag; } L;
    uint32_t off;
    L.q = a + 0x20;
    L.flag = 1;
    if (L.flag) {
        func_0208763c();
    }
    off = idx << 2;
    if (*(uint32_t *)(*(uint8_t **)(a + 0x1c) + off) == 0) {
        uint32_t r7 = *(uint32_t *)(*(uint8_t **)(a + 0x14) + idx * 8 + 4);
        *(uint32_t *)(*(uint8_t **)(a + 0x18) + off) = func_02056830(r7);
        func_02052d98(a, idx, 0, *(uint32_t *)(*(uint8_t **)(a + 0x18) + off), r7, 0);
    }
    {
        volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
        uint16_t old = *ime;
        *ime = 0;
        *(uint32_t *)(*(uint8_t **)(a + 0x1c) + off) += 1;
        (void)*ime;
        *ime = (old != 0) ? 1 : 0;
    }
    if (L.flag) {
        func_02087678(L.q);
    }
}
