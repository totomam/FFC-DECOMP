#include "ffc/types.h"

typedef struct {
    uint8_t v;
} Byte;

extern uint32_t func_02092864(const uint8_t *text);
extern void func_020059e4(void *self, uint32_t n);
extern void func_02005af4(void *self, uint32_t a, uint32_t b, const uint8_t *start, const uint8_t *end, Byte c);

void *func_02005988(void *self, const uint8_t *text) {
    volatile Byte c;
    uint32_t *arr = (uint32_t *)self;
    uint32_t i;
    uint32_t len;
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    len = func_02092864(text);
    func_020059e4(self, len);
    func_02005af4(self, 0, 0, text, text + len, c);
    return self;
}
