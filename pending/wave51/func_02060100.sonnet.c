#include "ffc/types.h"

extern uint8_t data_020b055c;
extern uint8_t data_0213e018[];

extern void func_020849c4(uint32_t a, uint32_t b);
extern void func_02084a58(uint32_t a, uint32_t b);
extern void func_020878ac(uint32_t a, uint32_t b);
extern void func_020845a8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_020844ec(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

typedef struct {
    uint8_t pad[0x1c];
    uint32_t lo;
    uint32_t hi;
} Pair;

void func_02060100(Pair *s)
{
    uint32_t r4, r5, bit;
    r5 = s->hi;
    r4 = s->lo;
    bit = 0x400;

    if (data_020b055c == 0 || data_0213e018[3] != 0) {
        if ((3 & (r4 | r5 | bit)) != 0) {
            func_020849c4(r4, r5);
        } else {
            func_02084a58(r4, r5);
        }
        return;
    }
    func_020878ac(r4, bit);
    func_020878ac(r5, bit);
    if (((r4 | r5 | bit) & 3) != 0) {
        func_020845a8(r4, r5, bit, 1, 1);
    } else {
        func_020844ec(r4, r5, bit, 1, 1);
    }
}
