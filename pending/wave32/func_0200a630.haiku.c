#include "ffc/types.h"

extern uint32_t func_02093bb4(const uint16_t *text);
extern void func_0200a690(void *obj, uint32_t n);
extern void func_0200a82c(void *obj, uint32_t a, uint32_t b, const uint16_t *text, const uint16_t *end);

void *func_0200a630(uint32_t *obj, const uint16_t *text)
{
    uint32_t i;
    uint32_t n;
    const uint16_t *end;
    volatile uint32_t lo;
    volatile uint32_t hi;

    for (i = 0; i < 3; i++) {
        obj[i] = 0;
    }
    n = func_02093bb4(text);
    func_0200a690(obj, n);
    end = text + n;
    *(volatile uint8_t *)&hi = *(volatile uint8_t *)&lo;
    func_0200a82c(obj, 0, 0, text, end);
    return obj;
}
