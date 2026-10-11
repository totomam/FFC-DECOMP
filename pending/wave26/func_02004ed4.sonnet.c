/* cflags: -nothumb */
#include "ffc/types.h"
void func_02004ed4(uint32_t *d, uint32_t *s, uint32_t n) {
    uint32_t big = n & ~0x1fu;
    if (big) {
        uint32_t *end = (uint32_t *)((uint8_t *)d + big);
        do {
            uint32_t a=*s++, b=*s++, c=*s++, e=*s++, f=*s++, g=*s++, h=*s++, i=*s++;
            *d++=a; *d++=b; *d++=c; *d++=e; *d++=f; *d++=g; *d++=h; *d++=i;
        } while ((int32_t)end > (int32_t)d);
    }
    if (n & 0x10) {
        uint32_t a=*s++, b=*s++, c=*s++, e=*s++;
        *d++=a; *d++=b; *d++=c; *d++=e;
    }
    if (n & 8) { uint32_t a=*s++, b=*s++; *d++=a; *d++=b; }
    if (n & 4) { *d++=*s++; }
}
