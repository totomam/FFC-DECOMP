#include "ffc/types.h"

extern void func_020883e4(uint32_t *p);
extern uint32_t func_02088978(void);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void func_020884b4(uint32_t *p, uint64_t v, void (*f)(void), uint32_t *out);
extern void func_02087248(void);
extern void func_02087024(uint32_t x);
extern void func_0208898c(uint32_t x);
extern uint32_t data_021414f4;

void func_020871d8(uint32_t a0)
{
    uint32_t st[11];
    uint32_t obj;
    uint32_t r;
    uint64_t x;

    func_020883e4(st);
    obj = **(uint32_t **)((uint8_t *)&data_021414f4 + 8);
    r = func_02088978();
    *(uint32_t *)(obj + 0xb0) = (uint32_t)st;
    x = func_0209a71c((uint64_t)a0, (uint64_t)0x82ea);
    x = x >> 6;
    func_020884b4(st, x, func_02087248, &obj);
    while (obj != 0) {
        func_02087024(0);
    }
    func_0208898c(r);
}
