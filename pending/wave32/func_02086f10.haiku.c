#include "ffc/types.h"

extern uint8_t data_021414f4[];
extern void func_02087288(void *p);
extern void func_02087684(void *p);
extern void func_02086bb8(void *a, void *b);
extern void func_02086c4c(void *p);
extern void func_02087058(void *p);
extern void func_020872ac(void);
extern void func_020870d4(void);
extern void func_02088f30(void);

void func_02086f10(void) {
    uint8_t *x = *(uint8_t **)(data_021414f4 + 8);
    uint8_t *r4 = *(uint8_t **)x;
    func_02087288(x);
    func_02087684(r4);
    if (*(void **)(r4 + 0x78) != 0) {
        func_02086bb8(*(void **)(r4 + 0x78), r4);
    }
    func_02086c4c(r4);
    *(uint32_t *)(r4 + 0x64) = 2;
    func_02087058(r4 + 0x9c);
    func_020872ac();
    func_020870d4();
    func_02088f30();
}
