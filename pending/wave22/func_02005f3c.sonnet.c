#include "ffc/types.h"
typedef struct { uint8_t v; } B;
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02005af4(void *a, void *b, uint32_t c, const uint8_t *text, uint32_t end, B f);
void func_02005f3c(void *a, void *b, uint32_t c, const uint8_t *text) {
    B x;
    func_02005af4(a, b, c, text, (uint32_t)text + func_02092864(text), x);
}
