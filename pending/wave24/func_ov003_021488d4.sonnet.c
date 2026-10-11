#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0214ed00(void *a, void *b, void *c, uint32_t d);
extern void func_02056bc0(void *object, void *node);

void func_ov003_021488d4(uint8_t *p, uint32_t idx)
{
    void *n = func_0205681c(0xa8);
    uint32_t o = 0x218;
    if (n != 0) {
        n = func_ov003_0214ed00(n, p, *(void **)(p + 0x178), idx);
    }
    *(void **)(p + o + idx * 4) = n;
    o += 0x50;
    func_02056bc0(*(void **)(p + o), n);
}
