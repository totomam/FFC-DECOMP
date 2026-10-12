#include "ffc/types.h"

extern uint8_t *func_ov006_021a674c(void);
extern void *func_ov006_021b42f8(int a, int b);
extern void func_ov006_021a8728(void);
extern void func_020849ac(int a, void *b, int c);
extern void func_020849c4(void *a, void *b, int c);
extern void func_ov006_021b45b0(void *p, int a, int b, int c, int d, int e, int f, void *g);
extern void func_ov006_021b4690(void *p);
extern void func_ov006_021a6730(void (*f)(void));
extern void func_ov006_021b11fc(int a, int b, int c, int d, int e);
extern void func_ov006_021a64c8(void (*f)(void));
extern uint8_t data_ov006_021bc764[];
extern void func_ov006_021a8920(void);
extern void func_ov006_021a8778(void);

void func_ov006_021a86a4(void) {
    uint8_t buf[0x16];
    uint8_t *p = func_ov006_021a674c();
    void *r4 = func_ov006_021b42f8(0, 0);
    data_ov006_021bc764[1] = 0;
    data_ov006_021bc764[0] = 0;
    func_ov006_021a8728();
    func_020849ac(0, buf, 0x16);
    func_020849c4(p + 2, buf, p[1] << 1);
    func_ov006_021b45b0(r4, 8, 0x35, 0xf0, 0x1c, 2, 0x480, buf);
    func_ov006_021b4690(r4);
    func_ov006_021a6730(func_ov006_021a8920);
    func_ov006_021b11fc(0x1d, 4, 0, -1, 0);
    func_ov006_021a64c8(func_ov006_021a8778);
}
