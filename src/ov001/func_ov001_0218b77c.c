#include "ffc/types.h"

extern void func_ov001_02189ae4(void *self);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void func_02056bc0(void *object, void *node);
extern char data_ov001_02194784[];
extern char data_ov001_021947f4[];
extern uint8_t *data_020b8e44;
extern char data_020b0b68[];
extern char data_020b0b54[];

void *func_ov001_0218b77c(uint8_t *self)
{
    uint8_t *r4;
    uint32_t t;

    func_ov001_02189ae4(self);
    *(void **)self = data_ov001_02194784;
    *(void **)(self + 0xb0) = data_ov001_021947f4;
    *(uint32_t *)(self + 0x734) = 0;
    *(uint32_t *)(self + 0x738) = 0;
    *(uint32_t *)(self + 0xe8) = 0x1c2;
    *(uint8_t *)(self + 0xec) = 1;
    if (data_020b8e44[4] != 0xff) {
        *(uint32_t *)(self + 0x728) = 2;
    } else {
        *(uint32_t *)(self + 0x728) = 3;
    }

    r4 = func_0205681c(0x34);
    if (r4 != 0) {
        *(uint32_t *)(r4 + 0xc) &= ~0xffu;
        *(void **)r4 = data_020b0b68;
        func_02087620(r4 + 0x1c);
        t = r4[0x10]; t &= ~0xffu; r4[0x10] = (uint8_t)t;
        t = r4[0x11]; t &= ~0xffu; r4[0x11] = (uint8_t)t;
        t = r4[0x12]; t &= ~0xffu; r4[0x12] = (uint8_t)t;
        *(uint32_t *)(r4 + 0x14) = 0;
        *(void **)(r4 + 0x18) = r4 + 0x14;
        *(void **)r4 = data_020b0b54;
        t = r4[0x11]; t &= ~0xffu; r4[0x11] = (uint8_t)t;
    }
    *(void **)(self + 0x730) = r4;
    func_02056bc0(self + 0x48, r4);
    return self;
}
