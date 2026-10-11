#include "ffc/types.h"

typedef struct { int32_t v[4]; } Buf;
typedef Buf (*VFn)(void *obj);

void func_02069338(int32_t *dst, void *obj)
{
    Buf b; b = ((VFn *)(*(void **)obj))[4](obj);
    int32_t y = (b.v[1] + b.v[3]) >> 1;
    dst[0] = (b.v[0] + b.v[2]) >> 1;
    dst[1] = y;
}
