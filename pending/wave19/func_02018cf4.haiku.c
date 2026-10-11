#include "ffc/types.h"

extern void func_020095b8(void *buf, uint32_t v);
extern void func_02018c48(void *obj, void *buf);
extern void *func_020059cc(void *object);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Buf;

void *func_02018cf4(void *p0, uint32_t unused, uint32_t p2)
{
    Buf buf;
    func_020095b8(&buf, p2);
    func_02018c48(p0, &buf);
    return func_020059cc(&buf);
}
