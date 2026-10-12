#include "ffc/types.h"

extern void func_02057980(void *a, void *b);
extern void func_020578a0(void *a, void *elem, void *c);

void func_02057af4(uint8_t *a) {
    uint32_t buf[3];
    uint32_t i;

    func_02057980(a, buf);
    if (a[0x28]) {
        a[0x28] = 0;
        func_020578a0(a, *(uint8_t **)(a + 0x20), buf);
    }
    func_020578a0(a, *(uint8_t **)(a + 0x20), buf);
    buf[0] = 0;
    buf[1] = 0;
    buf[2] = 0;
    i = 1;
    if (*(uint32_t *)(a + 0x24) > 1) {
        do {
            func_020578a0(a, *(uint8_t **)(a + 0x20) + i * 0x2c, buf);
            i++;
        } while (i < *(uint32_t *)(a + 0x24));
    }
}
