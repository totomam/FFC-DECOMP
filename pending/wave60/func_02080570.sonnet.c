/* cflags: -nothumb -noO4,p -O4 */
#include "ffc/types.h"
void func_02080570(uint32_t *s, uint32_t *d) {
    uint32_t a=s[0],b=s[1],c=s[2],e=s[3],f=s[4],g=s[5],h=s[6],i=s[7],j=s[8];
    *d++=a; *d++=e; *d++=h;
    *d++=b; *d++=f; *d++=i;
    *d++=c; *d++=g; *d++=j;
    *d++=0; *d++=0; *d=0;
}
