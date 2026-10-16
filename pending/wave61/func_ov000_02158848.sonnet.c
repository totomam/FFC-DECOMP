#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
typedef union { Pair s; uint64_t v; } U;
extern void func_02084ca4(void *a, void *b, int n);
extern uint8_t data_ov000_0217000c[];
extern uint8_t data_ov000_02170008[];
extern uint8_t data_ov000_02170012[];
extern uint8_t data_ov000_02170018[];
void *func_ov000_02158848(uint8_t *p)
{
    U u;
    uint16_t h;
    uint32_t t;
    u.s.a = *(uint32_t *)(p + 8); u.s.b = *(uint32_t *)(p + 12);
    func_02084ca4(p, data_ov000_0217000c, 5);
    data_ov000_02170008[9] = (uint8_t)(((*(uint32_t *)(p + 4) >> 8) & 7) | ((u.v & 0x1f) << 3));
    u.v >>= 5;
    func_02084ca4(&u, data_ov000_02170012, 4);
    t = (u.v >> 32) & 0x3f;
    h = *(uint16_t *)(p + 0x10);
    data_ov000_02170008[0xe] = (uint8_t)(t | ((h & 3) << 6));
    data_ov000_02170008[0xf] = (uint8_t)(h >> 2);
    func_02084ca4(p + 0x12, data_ov000_02170018, 2);
    return data_ov000_0217000c;
}
