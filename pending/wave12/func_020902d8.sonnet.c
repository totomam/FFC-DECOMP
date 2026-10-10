#include "ffc/types.h"
typedef struct { void (*fn)(); } V;
typedef struct { uint32_t a; uint32_t b; V *obj; } H;
extern H data_020b2cf8;
void func_020902d8(int a, int b, int c)
{
    data_020b2cf8.obj->fn(a, b, c);
}
