#include "ffc/types.h"

extern unsigned long long func_020882cc(void);
extern unsigned long long func_0209a6d4(unsigned long long a, unsigned long long b);
extern int func_ov000_0215426c(uint8_t *a, int b);
extern uint32_t func_ov000_0214fa18(void);
extern void func_ov000_0214f600(uint8_t *a, uint8_t *b, uint16_t c);

int func_ov000_02154054(uint8_t *a) {
    unsigned long long now = func_020882cc();
    unsigned long long q = func_0209a6d4((now - *(unsigned long long *)(a + 0x1460)) << 6, 0x82ea);
    uint32_t idx = a[0x14bf];
    if (!(q >= (unsigned long long)(long long)(int)*(uint16_t *)(a + 0x14d4) || (a[(idx << 2) + 0xbf7] & 0x80))) {
        return 4;
    }
    a[0xbf7 + (idx << 2)] |= 0x80;
    while (a[0x14bf] < a[0x14c2]) {
        if (!(a[(a[0x14bf] << 2) + 0xbf7] & 0x80)) break;
        a[0x14bf]++;
    }
    if (a[0x14c2] > a[0x14bf]) {
        uint32_t i = a[0x14bf];
        uint32_t cnt = *(uint16_t *)(a + i * 0xc0 + 0xc56);
        uint16_t m = (uint16_t)(1u << (cnt - 1));
        int ok = (func_ov000_0214fa18() & m) != 0;
        if (ok) {
            *(unsigned long long *)(a + 0x1460) = func_020882cc();
            uint32_t j = a[0x14bf];
            func_ov000_0214f600(a + 0xc24 + j * 0xc0, a + 0xc2c + j * 0xc0,
                                (uint16_t)(*(uint16_t *)(a + j * 0xc0 + 0xc56) - 1));
        } else {
            a[0xbf7 + (a[0x14bf] << 2)] |= 0x80;
        }
        return 4;
    }
    a[0x14bf] = 0;
    return func_ov000_0215426c(a, 4);
}
