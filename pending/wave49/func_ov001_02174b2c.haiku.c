#include "ffc/types.h"

#define W(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define SW(p, o) (*(int32_t *)((uint8_t *)(p) + (o)))
#define H(p, o) (*(uint16_t *)((uint8_t *)(p) + (o)))

extern void func_ov000_021652a8(int a, int b, int c, void *d);
extern void func_ov001_02171ac0(void *obj, void *s, uint32_t a);
extern void func_ov001_02171c60(void *obj, void *s, void *t);
extern void func_ov001_02171cb8(void *obj, uint32_t v);
extern void func_ov001_02171d28(void *obj, uint32_t v);
extern uint32_t func_02092b00(void *a, void *s);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_ov001_021735f0(void *a);
extern uint32_t func_ov001_02171b58(void *a, uint32_t x, uint32_t y);
extern void func_ov001_02171d4c(void *obj);
extern uint32_t func_ov001_02171d60(void *a);
extern void func_ov001_02171e6c(void *a, uint32_t x, uint32_t y);
extern char data_ov001_0218fee0[];
extern char data_ov001_0218fef4[];
extern char data_ov001_0218fefc[];
extern char data_ov001_0218ff04[];
extern uint32_t data_ov001_02194be4;
extern char data_ov001_0218ff0c[];
extern char data_ov001_0218ff18[];
extern char data_ov001_0218ff20[];
extern char data_ov001_0218ff28[];
extern char data_ov001_0218ff2c[];
extern char data_ov001_0218ff38[];
extern char data_ov001_0218ff48[];
extern char data_ov001_0218ff54[];
extern char data_ov001_0218ff60[];
extern char data_ov001_0218ff68[];
extern char data_ov001_0218ff6c[];
extern char data_ov001_0218ff7c[];

void func_ov001_02174b2c(uint8_t *a) {
    uint8_t *r4;
    uint32_t buf[4];
    void *s;
    uint32_t x;

    func_ov000_021652a8(8, 3, 0x10, data_ov001_0218fee0);
    if (W(a, 0x64) != 0) {
        goto L018e;
    }
    if (W(a, 0x198) == 0 || W(a, 0x1a8) == 0) {
        r4 = a + 0x58;
    } else {
        r4 = a + 0x7c;
    }
    if (W(a, 0x164) != 0 && W(a, 0x184) == 0) {
        s = data_ov001_0218fef4;
    } else {
        s = (W(a, 0xc) == 3) ? data_ov001_0218fefc : data_ov001_0218ff04;
    }
    func_ov001_02171ac0(r4, s, 0);
    if (W(a, 0x18c) != 0 || data_ov001_02194be4 != 0) {
        func_ov001_02171ac0(r4, (void *)W(a, 0x14), 0);
    } else {
        func_ov001_02171ac0(r4, (void *)W(a, 0x24), 0);
    }
    func_ov001_02171ac0(r4, data_ov001_0218ff0c, 0);
    if (H(a, 0x20) == 0x50) {
        func_ov001_02171c60(r4, data_ov001_0218ff18, (void *)W(a, 0x18));
    } else {
        func_ov001_02171ac0(r4, data_ov001_0218ff20, 0);
        func_ov001_02171ac0(r4, (void *)W(a, 0x18), 0);
        func_ov001_02171cb8(r4, 0x3a);
        func_ov001_02171d28(r4, H(a, 0x20));
        func_ov001_02171ac0(r4, data_ov001_0218ff28, 2);
    }
    if (W(a, 0x2c) == 0 || func_02092b00((void *)W(a, 0x2c), data_ov001_0218ff2c) == 0) {
        func_ov001_02171c60(r4, data_ov001_0218ff2c, data_ov001_0218ff38);
    }
    if (W(a, 0x3c) != 0) {
        func_ov001_02171c60(r4, data_ov001_0218ff48, data_ov001_0218ff54);
    } else {
        func_ov001_02171c60(r4, data_ov001_0218ff48, data_ov001_0218ff60);
    }
    if (W(a, 0x164) != 0 && W(a, 0x184) == 0) {
        func_02086ad4(buf, (uint32_t)data_ov001_0218ff68, W(a, 0x174));
        func_ov001_02171c60(r4, data_ov001_0218ff6c, buf);
        x = func_ov001_021735f0(a);
        func_ov001_02171c60(r4, data_ov001_0218ff7c, (void *)x);
    }
    if (W(a, 0x2c) != 0) {
        func_ov001_02171ac0(r4, (void *)W(a, 0x2c), 0);
    }
    func_ov001_02171ac0(r4, data_ov001_0218ff28, 2);
    if (W(a, 0x198) != 0 && W(a, 0x1a8) == 1) {
        if (func_ov001_02171b58(a + 0x58, W(r4, 4), W(r4, 0xc)) == 0) {
            W(a, 0x124) = 1;
            W(a, 0x40) = 0x11;
            return;
        }
        func_ov001_02171d4c(r4);
    }
L018e:
    if (func_ov001_02171d60(a) != 0) {
        if (SW(a, 0x68) >= SW(a, 0x64)) {
            func_ov001_02171d4c(a + 0x58);
            if (W(a, 0x164) != 0 && W(a, 0x184) == 0) {
                W(a, 0x10) = 6;
            } else {
                W(a, 0x10) = 7;
            }
            func_ov001_02171e6c(a, 0, 0);
        }
    }
}
