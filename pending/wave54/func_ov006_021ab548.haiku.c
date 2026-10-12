#include "ffc/types.h"

extern int func_ov006_021ab6d0(void);
extern int func_ov006_021b4ca4(int);
extern void func_ov006_021ab72c(uint8_t);
extern void func_ov006_021b0600(int);
extern void func_ov006_021a64c8(void (*)(void));
extern int func_ov006_021b4cd4(int);
extern uint32_t func_ov006_021b570c(int, void (*)(void), int, int);
extern int func_ov006_021b4d04(int);
extern void func_ov006_021ac5f4(int);
extern void func_ov006_021aba04(void);
extern void func_ov006_021ac430(void);
extern void func_ov006_021ac3b8(void);

typedef struct {
    uint8_t a0;
    uint8_t pad1[3];
    uint16_t h4;
    uint16_t pad6;
    void *ptr8;
} Glob;

typedef struct {
    uint8_t pad0[0x38];
    uint32_t f38;
    uint8_t pad3c[4];
    uint8_t f40;
    uint8_t pad41[4];
    uint8_t f45;
    uint8_t pad46;
    uint8_t f47;
} Obj;

extern Glob data_ov006_021bc78c;

void func_ov006_021ab548(void) {
    uint32_t r5;
    uint8_t r6 = 1;
    uint8_t r7 = 2;

    if (((Obj *)data_ov006_021bc78c.ptr8)->f38 != 0) return;
    if (((Obj *)data_ov006_021bc78c.ptr8)->f45 != 0) return;
    if (func_ov006_021ab6d0() != 0) return;
    if (func_ov006_021b4ca4(1)) {
        func_ov006_021ab72c(data_ov006_021bc78c.a0);
        return;
    }
    if (func_ov006_021b4ca4(2)) {
        func_ov006_021b0600(7);
        ((Obj *)data_ov006_021bc78c.ptr8)->f40 = 0xd;
        func_ov006_021a64c8(func_ov006_021aba04);
        return;
    }
    r5 = (uint32_t)r7 << 8;
    if (func_ov006_021b4cd4(r5)) {
        if (data_ov006_021bc78c.h4 == 0x91) {
            if (((Obj *)data_ov006_021bc78c.ptr8)->f47 == 0) {
                func_ov006_021b0600(9);
                ((Obj *)data_ov006_021bc78c.ptr8)->f47 = r6;
            }
            return;
        }
        func_ov006_021b0600(0x13);
        ((Obj *)data_ov006_021bc78c.ptr8)->f38 = func_ov006_021b570c(0, func_ov006_021ac430, 0, 0x78);
        return;
    }
    if (func_ov006_021b4d04(r5)) {
        ((Obj *)data_ov006_021bc78c.ptr8)->f47 = 0;
        return;
    }
    r5 = r7 + 0xfe;
    if (func_ov006_021b4cd4(r5)) {
        if (data_ov006_021bc78c.h4 == 0) {
            if (((Obj *)data_ov006_021bc78c.ptr8)->f47 == 0) {
                func_ov006_021b0600(9);
                ((Obj *)data_ov006_021bc78c.ptr8)->f47 = r6;
            }
            return;
        }
        func_ov006_021b0600(0x13);
        ((Obj *)data_ov006_021bc78c.ptr8)->f38 = func_ov006_021b570c(0, func_ov006_021ac3b8, 0, 0x78);
        return;
    }
    if (func_ov006_021b4d04(r5)) {
        ((Obj *)data_ov006_021bc78c.ptr8)->f47 = 0;
        return;
    }
    if (func_ov006_021b4cd4(0x40)) {
        func_ov006_021ac5f4(r6);
        return;
    }
    if (func_ov006_021b4d04(0x40)) {
        ((Obj *)data_ov006_021bc78c.ptr8)->f47 = 0;
        return;
    }
    if (func_ov006_021b4cd4(0x80)) {
        func_ov006_021ac5f4(3);
        return;
    }
    if (func_ov006_021b4d04(0x80)) {
        ((Obj *)data_ov006_021bc78c.ptr8)->f47 = 0;
        return;
    }
    if (func_ov006_021b4cd4(0x20)) {
        func_ov006_021ac5f4(0);
        return;
    }
    if (func_ov006_021b4cd4(0x10)) {
        func_ov006_021ac5f4(r7);
    }
}
