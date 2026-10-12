#include "ffc/types.h"

extern uint8_t func_ov000_0215370c(uint8_t *a);
extern void func_02084ca4(const void *src, void *dst, uint32_t len);
extern uint8_t data_ov000_02169a94[];
extern uint8_t data_ov000_0216964c[];

typedef struct {
    uint8_t lo : 4;
    uint8_t rest : 4;
} Nib;

uint8_t func_ov000_02153698(uint8_t *a)
{
    uint8_t n;
    uint8_t *p;
    uint32_t f;

    p = a + 0x900;
    n = func_ov000_0215370c(a);
    p += n * 0x24;

    f = ((Nib *)&a[0x14bc])->lo;
    if (f == 0 || f == 4) {
        func_02084ca4(data_ov000_02169a94, p + 4, 8);
        p[3] = 8;
        p[1] = 0x12;
        n++;
        p += 0x24;
    }
    f = ((Nib *)&a[0x14bc])->lo;
    if (f == 0 || f == 8) {
        func_02084ca4(data_ov000_0216964c, p + 4, 11);
        p[3] = 11;
        p[1] = 0x16;
        n++;
    }
    return n;
}
