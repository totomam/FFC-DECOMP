#include "ffc/types.h"

extern void func_02088f30(void);
extern void func_0207960c(void *p);
extern void *func_020782e4(void *p, uint32_t id);

int func_020794f4(void *a, void **out) {
    int r4 = 0;
    void *p;

    if (a != 0) {
        if (*(uint32_t *)a == 0x4e465452) {
            if (*(uint16_t *)((uint8_t *)a + 6) >= 0x102) {
                r4 = 1;
            }
        }
    }
    if (r4 == 0) {
        if (a != 0) {
            if (*(uint32_t *)a == 0x4e465452) {
                if (*(uint16_t *)((uint8_t *)a + 6) >= 0x101) {
                    r4 = 1;
                }
            }
        }
        if (r4 == 0) {
            if (a != 0) {
                if (*(uint32_t *)a == 0x4e465452) {
                    if (*(uint16_t *)((uint8_t *)a + 6) >= 0x100) {
                        r4 = 2;
                    }
                }
            }
            if (r4 != 2) {
                func_02088f30();
            }
            r4 = 1;
        }
    }
    func_0207960c(a);
    p = func_020782e4(a, 0x46494e46);
    if (p == 0) {
        *out = 0;
        return 0;
    }
    *out = (uint8_t *)p + 8;
    if (r4 != 0) {
        uint8_t *s = *(uint8_t **)((uint8_t *)p + 16);
        s[7] = 0;
    }
    return 1;
}
