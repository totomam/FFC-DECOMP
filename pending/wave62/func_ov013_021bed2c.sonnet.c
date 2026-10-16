#include "ffc/types.h"
extern void func_02084ca4(uint32_t a, uint32_t b);
typedef struct { uint32_t a; uint32_t b; } E;
void func_ov013_021bed2c(uint8_t *p)
{
    uint8_t *c = *(uint8_t **)(p + 0x1c);
    if (*(uint16_t *)(p + 2) != 0) {
        c[0x13c] = 1;
        return;
    }
    if (*(uint16_t *)(p + 4) == 0x15) {
        E *e = *(E **)(c + 0x12c) + *(uint32_t *)(c + 0x138);
        if (*(uint16_t *)(p + 0x10) != e->b) {
            c[0x13c] = 1;
            return;
        }
        func_02084ca4(*(uint32_t *)(p + 0xc), e->a);
        *(uint32_t *)(c + 0x138) = *(uint32_t *)(c + 0x138) + 1;
    }
}
