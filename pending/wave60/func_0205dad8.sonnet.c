#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; uint8_t c; } O;
extern void func_02052be0(uint32_t a);
extern void func_02052d10(uint32_t a, uint32_t b);
void func_0205dad8(O *o, uint8_t *p)
{
    uint32_t a = *(uint32_t *)(p + 0x1c);
    uint32_t b = *(uint32_t *)(p + 0x20);
    uint8_t c = p[0x24];
    o->a = a;
    o->b = b;
    o->c = c;
    if (a != 0) {
        func_02052be0(a);
        if (o->c != 0) {
            func_02052d10(o->a, o->b);
        }
    }
}
