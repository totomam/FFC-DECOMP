#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Elem;
typedef struct { Elem *base; uint32_t count; } Arr;

extern char data_020aec94;
extern void func_02046f28(void *p, void *r1, int n, uint32_t b);
extern void func_0203b0a8(void *dst, Elem *begin, Elem *end, uint32_t b);

void *func_0203d11c(void *p, void *r1, uint32_t a, uint32_t b, Arr *arr)
{
    uint32_t *z;
    uint8_t c;
    uint32_t t;
    func_02046f28(p, r1, 2, b);
    *(void **)p = (void *)&data_020aec94;
    *(uint32_t *)((char *)p + 0x90) = a;
    *(uint32_t *)((char *)p + 0x94) = b;
    z = (uint32_t *)((char *)p + 0x98);
    z[0] = 0;
    z[1] = 0;
    z[2] = 0;
    c = (uint8_t)b;
    t = *(uint32_t *)&c;
    func_0203b0a8(z, arr->base, arr->base + arr->count, t);
    return p;
}
