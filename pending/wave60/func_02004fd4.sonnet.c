/* cflags: -nothumb -O4,p */
#include "ffc/types.h"
void func_02004fd4(uint16_t *a, uint16_t *b) {
    int t = *b;
    int x = *a + 1;
    *a = x;
    if (t == *b) return;
    x++;
    *a = x;
}
