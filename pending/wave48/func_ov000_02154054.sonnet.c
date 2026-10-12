#include "ffc/types.h"

extern unsigned long long func_020882cc(void);
extern unsigned long long func_0209a6d4(unsigned long long a, unsigned long long b);
extern int func_ov000_0215426c(uint8_t *a, int b);
extern uint32_t func_ov000_0214fa18(void);
extern void func_ov000_0214f600(uint8_t *a, uint8_t *b, uint16_t c);

typedef struct { uint8_t lo:7; uint8_t f:1; uint8_t p[3]; } E;
#define EL(a,i) (*(E *)((a) + 0xbf4 + 3 + ((i) << 2)))

int func_ov000_02154054(uint8_t *a) {
    unsigned long long now = func_020882cc();
    unsigned long long q = func_0209a6d4((now - *(unsigned long long *)(a + 0x1460)) << 6, 0x82ea);
    int lim = *(uint16_t *)(a + 0x14d4);
    if (q >= lim || EL(a, a[0x14bf]).f == 1) {
    EL(a, a[0x14bf]).f = 1;
    while (a[0x14bf] < a[0x14c2]) {
        if (!EL(a, a[0x14bf]).f) break;
        a[0x14bf]++;
    }
    if (a[0x14c2] <= a[0x14bf]) {
    a[0x14bf] = 0;
    return func_ov000_0215426c(a, 4);
    }
    {
        uint32_t i = a[0x14bf];
        uint32_t cnt = *(uint16_t *)(a + i * 0xc0 + 0xc56);
        uint16_t m = (uint16_t)(1u << (cnt - 1));
        int ok = 1;
        if (!(func_ov000_0214fa18() & m)) ok = 0;
        if (ok == 1) {
            *(unsigned long long *)(a + 0x1460) = func_020882cc();
            uint32_t j = a[0x14bf];
            func_ov000_0214f600(a + 0xc24 + j * 0xc0, a + 0xc2c + j * 0xc0,
                                (uint16_t)((*(uint16_t *)(a + j * 0xc0 + 0xc56) - 1) | (0xc0 << 14)));
        } else {
            EL(a, a[0x14bf]).f = 1;
        }
        return 4;
    }
    }
    return 4;
}
