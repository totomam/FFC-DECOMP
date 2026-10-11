#include "ffc/types.h"

extern void *func_02056aec(void *p);
extern void *func_0205681c(uint32_t id);
extern void *func_ov007_021b2590(void *a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b2f60(uint8_t *p)
{
    void *n;
    void *r;
    uint8_t *obj;

    n = func_02056aec(p);
    r = func_0205681c(0x311c);
    if (r != 0) {
        r = func_ov007_021b2590(r, *(uint32_t *)(p + 0x80), *(uint32_t *)(p + 0x84));
    }
    obj = p + 0x14;
    func_02056bc0(obj, r);
    func_02056bc0(obj, n);
}
