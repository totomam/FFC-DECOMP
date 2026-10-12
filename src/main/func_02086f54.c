#include "ffc/types.h"

extern uint32_t func_02088978(void *p);
extern void func_02086f10(void);
extern void func_02087288(void);
extern void func_02087684(void *p);
extern void func_02086fac(void *p);
extern void func_02086bb8(uint32_t a, void *p);
extern void func_02086c4c(void *p);
extern void func_02087058(void *p);
extern void func_020872ac(void);
extern void func_0208898c(uint32_t v);
extern void func_020870d4(void);
extern uint32_t data_021414f4[];

void func_02086f54(void *p) {
    uint32_t r4;
    uint8_t *s = (uint8_t *)p;

    r4 = func_02088978(p);
    if (data_021414f4[8] == (uint32_t)p) {
        func_02086f10();
    }
    func_02087288();
    func_02087684(p);
    func_02086fac(p);
    if (*(uint32_t *)(s + 0x78) != 0) {
        func_02086bb8(*(uint32_t *)(s + 0x78), p);
    }
    func_02086c4c(p);
    *(uint32_t *)(s + 0x64) = 2;
    func_02087058(s + 0x9c);
    func_020872ac();
    func_0208898c(r4);
    func_020870d4();
}
