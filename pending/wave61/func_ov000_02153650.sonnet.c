#include "ffc/types.h"
typedef struct { uint8_t a, b, c, d; uint8_t rest[32]; } E;
typedef struct { uint8_t lo : 4; uint8_t hi : 4; } B;
typedef struct { uint8_t pad[0x900]; E ents[1]; } S;
extern uint8_t func_ov000_0215370c(S *p);
extern void func_02084ca4(void *d, void *s, int n);
extern uint8_t data_ov000_02169644[];
uint8_t func_ov000_02153650(S *p)
{
    E *arr = p->ents;
    uint8_t n = func_ov000_0215370c(p);
    E *e = arr + n;
    uint32_t m = ((B *)((uint8_t *)p + 0x14bc))->lo;
    if (m == 0 || m == 6) {
        func_02084ca4(data_ov000_02169644, e->rest, 8);
        e->d = 8;
        e->b = 0x14;
        n = n + 1;
    }
    return n;
}
