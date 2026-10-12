#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern void func_ov005_02196144(uint32_t x, uint8_t y);
extern void func_ov010_021bfab0(void *p, uint32_t a, uint32_t b);
extern void func_02069724(Pair *out, void *p);
extern void func_020697ac(void *p, uint32_t v);
extern void func_02069828(void *p, Pair v);

uint32_t func_ov010_021bf9f8(uint8_t *p)
{
    Pair s;
    uint64_t r = func_0209a978(*(uint32_t *)(p + 0xf8) + 1, *(uint32_t *)(p + 0xfc) + 1);
    *(uint32_t *)(p + 0xf8) = (uint32_t)(r >> 32);
    func_ov005_02196144(*(uint32_t *)(p + 0x11c), (uint8_t)((uint32_t)(r >> 32) + 1));
    func_ov010_021bfab0(p, 0, 0);
    func_02069724(&s, p);
    func_020697ac(p, *(uint32_t *)(p + 0xbc));
    func_02069828(p, s);
    return 1;
}
