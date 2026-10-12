#include "ffc/types.h"

extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern void func_ov001_02171cb8(void *obj, int32_t c);
extern void func_ov001_02171ac0(void *obj, uint8_t *buf, uint32_t n);
extern uint32_t func_ov001_021721f8(void *b, uint8_t *s);
extern uint32_t func_ov001_02171d60(void *b);
extern void func_ov001_02171d4c(void *b);
extern uint8_t data_ov001_0218efd8[];
extern uint8_t data_ov001_0218fb1c[];
extern int8_t data_ov001_0218fc48[];

int func_ov001_02173ab4(void **a, void *b) {
    uint8_t *A = (uint8_t *)*a;
    uint8_t *C;
    uint8_t *s;
    uint8_t *r5;
    uint8_t buf[4];
    int32_t c;
    int i;

    if (*(uint32_t *)(A + 0xc) == 0) {
        return 1;
    }
    C = *(uint8_t **)((uint8_t *)b + 0x164);
    if (*(uint32_t *)(C + 0xc) == 0 && *(uint32_t *)(C + 0x10) == 0 &&
        *(uint32_t *)(A + 0x10) != 0) {
        s = *(uint8_t **)(A + 8);
        buf[0] = data_ov001_0218efd8[0];
        buf[1] = data_ov001_0218efd8[1];
        buf[2] = data_ov001_0218efd8[2];
        buf[3] = data_ov001_0218efd8[3];
        if (*(void **)((uint8_t *)b + 0x198) != 0) {
            r5 = (uint8_t *)b + 0x7c;
        } else {
            r5 = (uint8_t *)b + 0x58;
        }
        for (i = 0; (c = (int8_t)s[i]) != 0; i++) {
            if (func_02092a2c(data_ov001_0218fb1c, c) != 0) {
                func_ov001_02171cb8(r5, c);
            } else if (c == 0x20) {
                func_ov001_02171cb8(r5, 0x2b);
            } else {
                buf[1] = data_ov001_0218fc48[c / 16];
                buf[2] = data_ov001_0218fc48[c % 16];
                func_ov001_02171ac0(r5, buf, 3);
            }
        }
    } else {
        return func_ov001_021721f8(b, *(uint8_t **)(A + 8)) ? 1 : 0;
    }
    if (*(void **)((uint8_t *)b + 0x198) != 0) {
        return 1;
    }
    if (func_ov001_02171d60(b) == 0) {
        return 0;
    }
    if (*(uint32_t *)((uint8_t *)b + 0x68) == *(uint32_t *)((uint8_t *)b + 0x64)) {
        b = (uint8_t *)b + 0x58;
        func_ov001_02171d4c(b);
    }
    return 1;
}
