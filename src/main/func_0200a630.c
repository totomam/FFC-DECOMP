#include "ffc/types.h"

typedef struct { uint8_t b; } S;
extern uint32_t func_02093bb4(const uint16_t *text);
extern void func_0200a690(void *obj, uint32_t n);
extern void func_0200a82c(void *obj, uint32_t a, uint32_t b, const uint16_t *text, const uint16_t *end, S c);

void *func_0200a630(uint32_t *obj, const uint16_t *text)
{
    uint32_t i;
    uint32_t n;
    S c;

    for (i = 0; i < 3; i++) {
        obj[i] = 0;
    }
    n = func_02093bb4(text);
    func_0200a690(obj, n);
    func_0200a82c(obj, 0, 0, text, text + n, c);
    return obj;
}
