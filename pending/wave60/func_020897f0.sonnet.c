/* cflags: -nothumb */
#include "ffc/types.h"
extern volatile uint32_t data_0214194c;
void func_020897f0(void) {
    volatile uint32_t *p = &data_0214194c;
    while (*p == 1) {}
}
