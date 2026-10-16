/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { volatile uint16_t a[3]; volatile uint16_t vc; } T;
void func_02087904(void) {
    volatile uint32_t *r = (volatile uint32_t *)0x4000000;
    volatile uint32_t *q = r + 0x82;
    uint32_t old = *q;
    *q = (uint32_t)r;
    while (((volatile uint16_t *)r)[3] != 0) {}
    *q = old;
}
