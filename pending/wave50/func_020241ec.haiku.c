#include "ffc/types.h"

extern void func_02024254(void);
extern int func_02081fe4(volatile uint32_t *p);

uint32_t func_020241ec(uint32_t *s) {
    volatile uint32_t local;
    uint32_t k = 1u << 8;
    uint8_t *p = (uint8_t *)s;
    uint32_t v;
    if (s[2] & k) {
        v = (k << 4) << *(uint32_t *)(p + (k + 0xcc));
        *(volatile uint32_t *)0x0400046c = v;
        *(volatile uint32_t *)0x0400046c = v;
        *(volatile uint32_t *)0x0400046c = v;
        *(volatile uint32_t *)0x040005c0 = *(uint32_t *)(p + (k + 0xc0));
        *(volatile uint32_t *)0x040005c0 = *(uint32_t *)(p + (k + 0xc4));
        *(volatile uint32_t *)0x040005c0 = *(uint32_t *)(p + (k + 0xc8));
        func_02024254();
        do {
        } while (func_02081fe4(&local) != 0);
        if (local == 0) {
            return 0;
        }
    } else {
        func_02024254();
    }
    return 1;
}
