/* cflags: -nothumb */
#include "ffc/types.h"
void func_02004ed4(uint32_t *d, uint32_t *s, uint32_t n)
{
    uint32_t big = n & ~0x1f;
    if (big != 0) {
        uint32_t *e = (uint32_t*)((uint8_t*)d + big);
        do {
            uint32_t a=s[0],b=s[1],c=s[2],f=s[3],g=s[4],h=s[5],i=s[6],j=s[7];
            s += 8;
            d[0]=a;d[1]=b;d[2]=c;d[3]=f;d[4]=g;d[5]=h;d[6]=i;d[7]=j;
            d += 8;
        } while (e > d);
    }
    if (n & 0x10) { uint32_t a=s[0],b=s[1],c=s[2],f=s[3]; s+=4; d[0]=a;d[1]=b;d[2]=c;d[3]=f; d+=4; }
    if (n & 8) { uint32_t a=s[0],b=s[1]; s+=2; d[0]=a;d[1]=b; d+=2; }
    if (n & 4) { uint32_t a=s[0]; s+=1; d[0]=a; d+=1; }
}
