#include "ffc/types.h"

extern void *func_0207e2d4(uint32_t a, uint32_t *b, uint8_t *c, uint32_t d, uint32_t e);
extern void func_0207e890(void *object);
extern uint32_t func_0207e0f4(void *object, uint32_t size, uint32_t count);

typedef struct {
    uint32_t x;
    uint32_t val;
    uint8_t *bufp;
    uint32_t out;
    uint32_t zero;
    uint8_t obj[0x48];
    uint8_t buf[0x118];
} Frame;

uint32_t func_0207e920(uint32_t *out, uint32_t p1, uint32_t p2, uint32_t p3)
{
    Frame f;
    void *h;

    h = func_0207e2d4(p1, &f.x, f.buf, p3, 0);
    if (h == 0) {
        return 0;
    }
    func_0207e890(f.obj);
    *(uint32_t **)(f.obj + 0x0c) = &f.val;
    f.val = f.x;
    f.bufp = f.buf;
    f.zero = 0;
    *(void **)(f.obj + 0x08) = h;
    if (func_0207e0f4(f.obj, 4, 1) == 0) {
        return 0;
    }
    out[0] = (uint32_t)h;
    out[1] = f.out;
    return 1;
}
