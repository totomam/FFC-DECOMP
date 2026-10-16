/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
void func_02080cc0(volatile int32_t *p, int32_t b, int32_t a)
{
    p[0] = a;
    p[10] = a;
    p[8] = b;
    p[2] = -b;
    p[1] = 0;
    p += 3;
    *p++ = 0; *p++ = 0; *p++ = 0x1000;
    *p++ = 0; *p++ = 0;
    p[1] = 0;
    p += 3;
    *p++ = 0; *p++ = 0;
    *p++ = 0; *p++ = 0; *p++ = 0x1000;
}
