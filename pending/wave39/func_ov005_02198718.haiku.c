#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S8;

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov005_021987ac(void *p);
extern void func_ov005_02196144(void *p, uint8_t v);
extern void func_ov005_02198828(void *p);
extern void func_02069724(S8 *out, void *p);
extern void func_02069828(void *p, S8 s);

uint32_t func_ov005_02198718(void *p)
{
    S8 s;
    uint32_t v;
    uint64_t r;

    v = *(uint32_t *)((uint8_t *)p + 0x100);
    r = func_0209a76c(*(uint32_t *)((uint8_t *)p + 0xfc) + v, v + 1);
    *(uint32_t *)((uint8_t *)p + 0xfc) = (uint32_t)(r >> 32);
    func_ov005_021987ac(p);
    if (*(uint32_t *)((uint8_t *)p + 0xb8) != 0) {
        func_ov005_02196144(*(void **)((uint8_t *)p + 0xb8),
                            (uint8_t)(*(uint32_t *)((uint8_t *)p + 0xfc) + 1));
    }
    func_ov005_02198828(p);
    func_02069724(&s, p);
    func_02069828(p, s);
    return 1;
}
