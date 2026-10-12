#include "ffc/types.h"

extern void func_0206854c(uint32_t *out);
extern void func_02021338(uint32_t x);
extern uint32_t func_02068680(uint32_t x);
extern uint32_t func_02068b30(uint32_t x);
extern uint32_t func_0200ba90(uint32_t x);
extern void func_0200ba88(uint32_t x, uint32_t y);
extern void func_02034fb4(void *self, uint32_t a, uint32_t b);
extern void func_0203504c(void *self, uint32_t a, uint32_t b);
extern void func_020350f4(void *self, uint32_t a);
extern void func_02035100(void *self, uint32_t a);
extern uint32_t func_020370bc(uint32_t a);
extern void func_0200c810(uint32_t a, uint32_t b);
extern void func_02032630(uint32_t a, uint32_t b);
extern void func_0200c820(uint32_t a, uint32_t b);
extern void func_0200c7bc(uint32_t a);
extern uint32_t func_0201c218(uint32_t a, uint32_t b);
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_0203511c(void *self, uint32_t a, uint32_t b);
extern void func_0203710c(uint32_t *out, uint32_t a);
extern void func_0200c66c(uint32_t a, uint32_t b);
extern void func_0200c68c(uint32_t a, uint32_t b);
extern void func_0203514c(void *self, uint32_t a);
extern void func_0203519c(void *self, uint32_t a);
extern void func_020371dc(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t *data_020b93b8;

int func_020352b8(uint8_t *self, uint32_t arg, uint32_t mode)
{
    uint32_t buf[5];
    uint32_t v;
    uint32_t r;

    if (mode != 0x24) {
        if (self[0x1c] != 0) {
            arg = 0;
            func_0206854c(buf+4);
            if (buf[4] != arg) {
                func_02021338(*(uint32_t *)(self + 0x18));
            }
        }
        return 0;
    }
    if (func_02068680(arg) != 0) {
        return 1;
    }
    switch (func_02068b30(arg)) {
    case 0x4e:
        if (*(uint32_t *)(self + 8) != 0) {
            func_0203504c(self, arg, func_0200ba90(*(uint32_t *)(self + 8)));
            func_0200ba88(*(uint32_t *)(self + 8), 0);
        } else {
            func_0203504c(self, arg, 0);
        }
        break;
    case 0x70:
        if (*(uint32_t *)(self + 8) != 0) {
            func_02034fb4(self, arg, func_0200ba90(*(uint32_t *)(self + 8)));
            func_0200ba88(*(uint32_t *)(self + 8), 0);
        } else {
            func_02034fb4(self, arg, 0);
        }
        break;
    case 0x66: func_020350f4(self, arg); break;
    case 0x6e: func_02035100(self, arg); break;
    case 0x61:
        if (self[0x1c] != 0) {
            func_0200c810(*(uint32_t *)(self + 0x10), func_020370bc(arg) != 0);
        } else if (*(uint32_t *)(self + 0x14) != 0) {
            func_02032630(*(uint32_t *)(self + 0x14), func_020370bc(arg));
        }
        break;
    case 0x74:
        if (self[0x1c] != 0) func_0200c820(*(uint32_t *)(self + 0x10), func_020370bc(arg));
        break;
    case 0x65:
        if (self[0x1c] != 0) func_0200c7bc(*(uint32_t *)(self + 0x10));
        break;
    case 0x76:
        r = func_0201c218(*data_020b93b8, func_020370bc(arg));
        func_0203511c(self, arg, r);
        break;
    case 0x56:
        r = func_0201c9ac(*data_020b93b8, func_020370bc(arg));
        func_0203511c(self, arg, r);
        break;
    case 0x75:
        v = func_020370bc(arg);
        r = 0;
        if (v == 1) r = 0x3f;
        else if (v == 2) r = 0x40;
        else if (v == 3) r = 0x41;
        else if (v == 4) r = 0x42;
        else if (v == 5) r = 0x43;
        else if (v == 6) r = 0x44;
        r = func_0201c9ac(*data_020b93b8, r);
        func_0203511c(self, arg, r);
        break;
    case 0x77:
        if (self[0x1c] != 0) {
            func_0203710c(buf+2, arg);
            func_0200c66c(*(uint32_t *)(self + 0x10), buf[2]);
        }
        break;
    case 0x71:
        if (self[0x1c] != 0) func_0200c68c(*(uint32_t *)(self + 0x10), func_020370bc(arg));
        break;
    case 0x63: func_0203514c(self, arg); break;
    case 0x72: func_0203519c(self, arg); break;
    case 0x67:
        func_020371dc(arg, *(uint32_t *)(self + 0xc), *(uint32_t *)(self + 8));
        if (*(uint32_t *)(self + 8) != 0) func_0200ba88(*(uint32_t *)(self + 8), 1);
        break;
    case 0x55:
        if (*(uint32_t *)(self + 8) != 0) func_0200ba88(*(uint32_t *)(self + 8), 1);
        break;
    }
    return 1;
}
