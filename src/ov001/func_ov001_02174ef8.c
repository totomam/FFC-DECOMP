#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, void *d);
extern int func_ov001_02171ff0(uint8_t *self, uint8_t *buf, uint32_t *size);
extern int func_ov001_02171ac0(uint8_t *p, uint8_t *buf, uint32_t size);
extern int func_ov001_02171ee8(uint8_t *self);
extern uint8_t *func_02092b00(uint8_t *a, void *b);
extern int func_ov001_02174e48(uint8_t *self);
extern void func_ov001_02171d4c(uint8_t *p);
extern void func_ov001_02171e6c(uint8_t *self, int a, int b);
extern uint32_t func_ov000_021655a0(uint32_t x);
extern uint8_t data_ov001_0218ffb4[];
extern uint8_t data_ov001_0218ff28[];
extern uint8_t data_ov001_0218ffc8[];

void func_ov001_02174ef8(uint8_t *self) {
    uint8_t buf[0x400];
    uint32_t size;
    uint8_t *q;
    uint32_t r;

    func_ov000_021652a8(8, 3, 0x10, data_ov001_0218ffb4);
    size = 0x400;
    r = func_ov001_02171ff0(self, buf, &size);
    if (r == 3 || r == 1) {
        return;
    }
    if (r == 0) {
        if (*(uint32_t *)(self + 0x198) != 0 && *(uint32_t *)(self + 0x1a8) == 1) {
            if (func_ov001_02171ac0(self + 0xc4, buf, size) == 0) {
                return;
            }
            if (func_ov001_02171ee8(self) == 0) {
                *(uint32_t *)(self + 0x124) = 1;
                *(uint32_t *)(self + 0x40) = 0x11;
                return;
            }
        } else {
            if (func_ov001_02171ac0(self + 0xa0, buf, size) == 0) {
                return;
            }
        }
    }
    q = func_02092b00(*(uint8_t **)(self + 0xa4), data_ov001_0218ff28);
    if (q != 0) {
        uint32_t off;
        *q = 0;
        off = (uint32_t)(q - *(uint8_t **)(self + 0xa4));
        if (func_ov001_02174e48(self) == 0) {
            return;
        }
        *(uint32_t *)(self + 0x120) = off + 2;
        if (*(uint32_t *)(self + 0x118) == 0x64 && *(uint32_t *)(self + 0x180) != 0) {
            *(uint32_t *)(self + 0x180) = 0;
            func_ov001_02171d4c(self + 0xa0);
            *(uint32_t *)(self + 0x10) = 6;
            func_ov001_02171e6c(self, 0, 0);
            func_ov000_021652a8(8, 0, 0x10, data_ov001_0218ffc8);
            return;
        }
        *(uint32_t *)(self + 0x10) = 9;
        func_ov001_02171e6c(self, 0, 0);
        return;
    }
    if (r == 2) {
        *(uint32_t *)(self + 0x124) = 1;
        *(uint32_t *)(self + 0x40) = 7;
        *(uint32_t *)(self + 0x54) = func_ov000_021655a0(*(uint32_t *)(self + 0x50));
    }
}
