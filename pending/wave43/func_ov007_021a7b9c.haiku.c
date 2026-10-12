#include "ffc/types.h"

extern void func_02055980(void *object);
extern uint32_t func_02015938(uint32_t x);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void *func_0206cd68(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void *func_0206d120(uint32_t a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void *func_0206d3b4(uint32_t a);
extern uint32_t data_020b8e44;

void func_ov007_021a7b9c(uint8_t *p)
{
    uint32_t *dp = &data_020b8e44;
    uint32_t k;
    uint32_t r;
    void *node;

    func_02055980(p + 0x80);
    r = func_02015938(*dp);
    k = 0x3c;
    *(uint32_t *)(p + 0xf4) = func_0206c184(r, k) + k;
    r = func_02015938(*dp);
    *(uint32_t *)(p + 0xf0) = func_0206c184(r, 2);
    node = func_0206cd68(*(uint32_t *)(p + 0xc8));
    func_02056bc0(p + 0x14, node);
    if (*(uint32_t *)(p + 0xf0) == 1) {
        node = func_0206d120(*(uint32_t *)(p + 0xc8), p + (k + 0xd0), 0x18, 0, 0);
        func_02056bc0(p + 0x14, node);
    } else {
        node = func_0206d3b4(*(uint32_t *)(p + 0xc8));
        func_02056bc0(p + 0x14, node);
    }
}
