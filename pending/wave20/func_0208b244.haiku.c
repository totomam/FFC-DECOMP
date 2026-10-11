#include "ffc/types.h"

void func_0208b244(void) {
    volatile uint32_t *p = (volatile uint32_t *)0x02fffc3c;
    volatile uint32_t v = *p;
    uint32_t t;
    while (v == (t = *p)) {
    }
}
