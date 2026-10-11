#include "ffc/types.h"

extern uint32_t func_02058294(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02055110(uint32_t a, uint32_t b);
extern uint32_t data_0213e098;

void func_02058318(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f) {
    uint32_t r = func_02058294(a, b, c, d, e, f);
    func_02055110(data_0213e098, r);
}
