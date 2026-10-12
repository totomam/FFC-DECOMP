#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_0202d574(void *p);

void func_0202d5c0(uint8_t *a) {
    struct { void *p; volatile uint8_t f; } s;
    int32_t c;
    int32_t n;
    int32_t *q;

    s.p = a + 0x1F4;
    s.f = 1;
    if (s.f) {
        func_0208763c(s.p);
    }
    if (*(int32_t *)(a + 0x20C) != 0) {
        if (s.f) {
            func_02087678(s.p);
        }
        return;
    }
    c = *(int32_t *)(a + 0xC0);
    if (c >= *(int32_t *)(a + 0xBC)) {
        func_0202d574(a);
        if (s.f) {
            func_02087678(s.p);
        }
        return;
    }
    n = c + 1;
    *(int32_t *)(a + 0xC0) = n;
    q = (n <= *(int32_t *)(a + 0xBC)) ? (int32_t *)(a + 0xC0) : (int32_t *)(a + 0xBC);
    *(int32_t *)(a + 0xC0) = *q;
    if (s.f) {
        func_02087678(s.p);
    }
}
