#include "ffc/types.h"

typedef void (*cb_t)(void);

typedef struct S {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    cb_t *cb_begin;
    cb_t *cb_end;
    uint32_t f18;
    uint32_t f1c;
} S;

extern uintptr_t func_0207eb94(const void *object);
extern int func_02087460(void);
extern uint16_t func_02088a2c(void);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_0207ece8(void *p, uint32_t a, uintptr_t b, uint32_t c);
extern void func_02084b2c(uint32_t a, uint32_t b, uintptr_t c);
extern void func_02088f30(void);
extern void func_02004df4(uintptr_t a);
extern void func_020878ac(uint32_t a, uint32_t b);
extern uint32_t data_021412e0;
extern uint8_t data_020b3ab4[];
extern uint8_t data_020b3938[];

void func_0207ed7c(S *a) {
    uintptr_t r7 = func_0207eb94(a);
    if (a->f4 >= 0x21d7e00 && a->f4 < 0x21dbfa0) {
        if (func_02087460() != 0 && data_021412e0 == 0) {
            data_021412e0 = 1;
        }
    }
    if (func_02088a2c() != 1) {
        uint32_t r6 = 0;
        if (a->f1c >> 24 & 2) {
            uint32_t n = a->f0;
            if (n < func_0209a76c((uintptr_t)data_020b3ab4 - (uintptr_t)data_020b3938, 0x14)) {
                r6 = func_0207ece8(data_020b3938 + n * 0x14, a->f4, r7, r6);
            }
        }
        if (r6 == 0) {
            func_02084b2c(a->f4, 0, r7);
            func_02088f30();
            return;
        }
    }
    if (a->f1c >> 24 & 1) {
        func_02004df4(a->f4 + r7);
    }
    func_020878ac(a->f4, a->f8);
    {
        cb_t *p = a->cb_begin;
        cb_t *end = a->cb_end;
        while (p < end) {
            if (*p) {
                (*p)();
            }
            p++;
        }
    }
}
