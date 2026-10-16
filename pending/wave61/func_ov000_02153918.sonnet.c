/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint8_t a, b, c; uint8_t id:7; uint8_t f:1; } E;
uint8_t func_ov000_02153918(uint8_t *p)
{
    uint8_t n = 0;
    int i;
    for (i = 0; i < p[0x14c2]; i++) {
        E *e = (E *)(p + 0xbf4) + i;
        if (e->a == 0 &&
            (uint16_t)(*(uint16_t *)(p + i * 0xc0 + 0xc56) - 1) != e->id) {
            e->f = 0;
            n++;
        } else {
            e->f = 1;
        }
    }
    return n;
}
