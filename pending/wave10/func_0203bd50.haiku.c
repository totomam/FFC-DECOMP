#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef struct { uint32_t a, b, c; } Blob;

extern void *func_0205681c(uint32_t size);
extern void func_020095b8(Blob *dst, const Blob *src);
extern void *func_020324d0(void *obj, Pair s, Blob *blob, uint32_t c, uint32_t d, uint8_t e);
extern void *func_020059cc(void *object);

void *func_0203bd50(Pair s, const Blob *p, uint32_t x, uint32_t y, uint8_t z)
{
    Blob local;
    int done = 0;
    void *obj = func_0205681c(0xc0);
    if (obj != 0) {
        func_020095b8(&local, p);
        done = 1;
        obj = func_020324d0(obj, s, &local, x, y, z);
    }
    if (done) {
        func_020059cc(&local);
    }
    return obj;
}
