/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern void func_02021338(int a);
typedef void (*Fn)(void*, int, int);
void func_ov003_021504a4(uint8_t *p)
{
    uint8_t z;
    if (*(int*)(p + 0x498) == 1) return;
    if (*(uint8_t*)(p + 0x4b8) != 0) return;
    func_02021338(0xad);
    *(uint8_t*)(p + 0x4b8) = 1;
    z = 0;
    *(int*)(p + 0x4b4) = z;
    {
        void *o = *(void**)(p + 0x98);
        (*(Fn**)o)[14](o, 1, 1);
    }
    {
        uint8_t *q = p + 0x4dc;
        int i;
        for (i = 0; i < 0x1c; i++) q[i] = z;
    }
}
