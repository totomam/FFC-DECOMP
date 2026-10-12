#include "ffc/types.h"

extern void func_0207c9b8(void);
extern uint32_t func_02086a4c(void);
extern void func_0207e4ac(void *object);
extern void *func_0207e4c0(void *object, void *a, uint32_t b);
extern int func_02088a2c(void *object);
extern uintptr_t func_0207caac(void);
extern void func_0207fad4(void *object, uint32_t first, uint32_t second);
extern void func_0207fa34(void *object, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_0207fd2c(void *object);
extern void func_0207e220(void *object);
extern void func_0207fca0(void);
extern void func_0207fc74(void);
extern void func_0207fd14(void);
extern void func_0207fd24(void);
extern void func_0207fd28(void);

extern uint32_t data_02141300[2];
extern uint8_t data_02141308[];
extern uint8_t data_020b2938[];
extern uint8_t data_020b293c[];

void func_0207fd30(uint32_t a) {
    uint32_t n = 3;
    uint8_t *p7;
    uint32_t *p4;
    uint32_t v;
    uint8_t *q5;

    func_0207c9b8();
    data_02141300[0] = a;
    data_02141300[1] = func_02086a4c();
    func_0207e4ac(data_02141308);
    if (func_02088a2c(func_0207e4c0(data_02141308, data_020b2938, n)) == 1) {
        p7 = (uint8_t *)func_0207caac();
        p4 = (uint32_t *)(p7 + 0x40);
        q5 = (uint8_t *)func_0207caac() + 0x48;
        func_0207fad4(data_02141308, (uint32_t)func_0207fca0, 0x682);
        v = *(uint32_t *)(p7 + 0x40);
        if (v != n - 4 && v != 0 && *(uint32_t *)q5 != n - 4 && *(uint32_t *)q5 != 0) {
            func_0207fa34(data_02141308, 0, *(uint32_t *)q5, *(uint32_t *)(q5 + 4),
                          v, p4[1], (uint32_t)func_0207fc74, 0);
        }
    } else {
        func_0207fd2c(data_02141308);
    }
    int b;
    if (*(uint32_t *)(data_02141308 + 0x14) & 2) b = 1; else b = 0;
    if (b == 0) {
        func_0207fad4(data_02141308, (uint32_t)func_0207fd14, 0xFFFFFFFFu);
        func_0207fa34(data_02141308, 0, 0, 0, 0, 0,
                      (uint32_t)func_0207fd24, (uint32_t)func_0207fd28);
    }
    func_0207e220(data_020b293c);
}
