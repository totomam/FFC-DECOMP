/* cflags: -nothumb */
#include "ffc/types.h"
void func_ov014_02148fa0(int a, int b, int c, uint32_t *p)
{
    int n = 0x20;
    uint32_t *q = (uint32_t *)((uint8_t *)p + 0x200);
    do { q[0]=0; q[1]=0; q[2]=0; q[3]=0; q+=4; } while (--n != 0);
}
