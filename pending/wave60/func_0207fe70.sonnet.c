/* cflags: -nothumb */
#include "ffc/types.h"
void func_0207fe70(uint32_t *p) {
    uint32_t a = 0x1000, b = 0, c = 0, d = 0x1000;
    *(unsigned long long*)p = ((unsigned long long)b << 32) | a;
    *(unsigned long long*)(p+2) = ((unsigned long long)d << 32) | c;
}
