#include "ffc/types.h"
typedef struct { uint32_t x, y; } S;
typedef struct { uint8_t v; } B;

extern void func_0200acb8(void *a, uint32_t b, uint32_t c, B d);

void func_0200ac64(uint8_t *p, uint32_t a, S s, uint32_t *q, uint32_t d)
{
    *(uint32_t *)(p + 0xa8) = a;
    *(uint32_t *)(p + 0xac) = s.x;
    *(uint32_t *)(p + 0xb0) = s.y;
    if ((void *)(p + 0xb4) != (void *)q) {
        B z;
        z.v = 0;
        func_0200acb8(p + 0xb4, q[0], q[0] + (q[1] << 4), z);
    }
    *(uint32_t *)(p + 0x12c) = d;
    *(uint32_t *)(p + 0x150) = 0;
}
