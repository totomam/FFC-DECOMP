#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_02086b28(void);
extern void func_02086c14(void *obj);
extern void func_020872d8(void *object, uintptr_t buffer, uint32_t size);
extern void func_020849e0(uint32_t a, uintptr_t b, uint32_t c);
extern void func_020872d0(void *object, uint32_t value);
extern void func_0208898c(uint32_t x);
extern void func_02086e94(void);

void func_02086dcc(uint8_t *p, uintptr_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5)
{
    uint32_t c = a3;
    uint32_t t = func_02088978();
    uint32_t r = func_02086b28();
    uint32_t z;
    uint32_t r7;

    z = 0;
    *(uint32_t *)(p + 0x6c) = r;
    *(uint32_t *)(p + 0x70) = a5;
    *(uint32_t *)(p + 0x64) = z;
    *(uint32_t *)(p + 0x74) = z;
    func_02086c14(p);

    *(uint32_t *)(p + 0x94) = c;
    r7 = c - a4;
    *(uint32_t *)(p + 0x90) = r7;
    *(uint32_t *)(p + 0x98) = z;
    *(uint32_t *)(c - 8) = 0xfddb597d;
    *(uint32_t *)(*(uint32_t *)(p + 0x90)) = 0x7bf9dd5b;
    *(uint32_t *)(p + 0xa0) = z;
    *(uint32_t *)(p + 0x9c) = z;

    func_020872d8(p, a1, c - 8);
    *(uintptr_t *)(p + 4) = a2;
    *(uintptr_t *)(p + 0x3c) = (uintptr_t)func_02086e94;
    func_020849e0(0, r7 + 4, a4 - 12);

    *(uint32_t *)(p + 0x84) = z;
    *(uint32_t *)(p + 0x88) = z;
    *(uint32_t *)(p + 0x8c) = z;
    func_020872d0(p, 0);
    *(uint32_t *)(p + 0x80) = z;
    func_020849e0(0, (uintptr_t)(p + 0xa4), 12);
    *(uint32_t *)(p + 0x78) = z;
    *(uint32_t *)(p + 0x7c) = z;
    *(uint32_t *)(p + 0xb0) = z;
    func_0208898c(t);
}
