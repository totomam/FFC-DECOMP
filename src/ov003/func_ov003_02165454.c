#include "ffc/types.h"

extern uint32_t func_02056aec(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02165078(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j, uint32_t k, uint32_t l, uint32_t m);
extern void func_02056bc0(void *object, void *node);

void func_ov003_02165454(uint8_t *p)
{
    uint32_t n = func_02056aec(p);
    void *res = func_0205681c(0x3c);
    if (res != 0) {
        res = func_ov003_02165078(res, *(uint32_t *)(p + 0x80), 0, *(uint32_t *)(p + 0x88),
                                  *(uint32_t *)(p + 0x8c), *(uint32_t *)(p + 0x90), 0, 0, 0,
                                  *(uint16_t *)(p + 0x84), *(uint32_t *)(p + 0x94), 0, 0);
    }
    {
    uint8_t *q = p + 0x14;
    func_02056bc0(q, res);
    func_02056bc0(q, (void *)n);
    }
}
