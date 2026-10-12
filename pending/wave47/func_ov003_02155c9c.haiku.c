#include "ffc/types.h"

void func_ov003_02155c9c(uint8_t *a, uint8_t v) {
    uint8_t *p;
    a[0x344] = v;
    if (a[0x344] == 0 || *(uint8_t **)(a + 0x120) == 0) {
        p = *(uint8_t **)(a + 0x110);
        if (p != 0) {
            p[0x41] = 0;
        }
        p = *(uint8_t **)(a + 0x114);
        if (p != 0) {
            p[0x41] = 0;
        }
        p = *(uint8_t **)(a + 0x118);
        if (p != 0) {
            p[0x41] = 0;
        }
        p = *(uint8_t **)(a + 0x11c);
        if (p != 0) {
            p[0x41] = 0;
        }
        p = *(uint8_t **)(a + 0x120);
        if (p != 0) {
            p[0x41] = a[0x342];
        }
    } else {
        p = *(uint8_t **)(a + 0x110);
        if (p != 0) {
            p[0x41] = a[0x342];
        }
        p = *(uint8_t **)(a + 0x114);
        if (p != 0) {
            p[0x41] = a[0x342];
        }
        p = *(uint8_t **)(a + 0x118);
        if (p != 0) {
            p[0x41] = a[0x342];
        }
        p = *(uint8_t **)(a + 0x11c);
        if (p != 0) {
            p[0x41] = a[0x342];
        }
        p = *(uint8_t **)(a + 0x120);
        if (p != 0) {
            p[0x41] = 0;
        }
    }
}
