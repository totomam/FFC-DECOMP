#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_02005af4(void *a, void *b, uint32_t c, const uint8_t *text, uint32_t end, int8_t f);

void func_02005f3c(void *a, void *b, uint32_t c, const uint8_t *text) {
    uint8_t x;
    uint32_t n = (uint32_t)text + func_02092864(text);
    func_02005af4(a, b, c, text, n, *(uint8_t *)&x);
}
