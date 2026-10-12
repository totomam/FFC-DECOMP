#include "ffc/types.h"

#define LD(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))

extern int32_t func_020249a4(void *self, uint32_t x);
extern void func_0202447c(void *self, uint32_t a, uint32_t b, uint32_t c);
extern void func_02081c54(void *p);
extern void func_020878ac(uint32_t a, uint32_t b);
extern int32_t func_01ff8fc0(int32_t a, uint32_t b, uint32_t c);

extern uint32_t data_020b2948;

int32_t func_020243bc(uint8_t *self, uint32_t arg) {
    if (LD(LD(self, 0xe8), 0xc) != 0 && LD(LD(self, 0xe4), 0x14) != 0) {
        LD(self, 0x174) = func_020249a4(self, 0);
    } else {
        LD(self, 0x174) = 0;
    }
    func_0202447c(self, LD(self, 0x1b4), LD(self, 0x1bc), arg);
    *(uint8_t *)(self + 0x1d1) = 1;
    *(volatile uint32_t *)0x4000440 = 2;
    *(volatile uint32_t *)0x4000444 = 0;
    func_02081c54(self + 0xa0);
    func_0202447c(self, LD(self, 0x1b0), LD(self, 0x1b8), arg);
    func_020878ac(LD(self, 0x1a0), LD(self, 0x1a4));
    int32_t v = (data_020b2948 > 3) ? -1 : (int32_t)data_020b2948;
    return func_01ff8fc0(v, LD(self, 0x1a0), LD(self, 0x1a4));
}
