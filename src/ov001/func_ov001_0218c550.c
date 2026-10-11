#include "ffc/types.h"

extern void func_0201f1a8(uint32_t a, uint8_t b, uint8_t *c);
extern uint8_t *data_020b8e44;
extern uint32_t data_020b93b8;

void func_ov001_0218c550(uint8_t *p) {
    if (p[0xe94]) {
        func_0201f1a8(data_020b93b8, data_020b8e44[0xc], p + 0x67c);
        p[0xe94] = 0;
    }
}
