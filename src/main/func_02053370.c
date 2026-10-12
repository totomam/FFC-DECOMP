#include "ffc/types.h"

typedef struct { uint8_t v; } Ch;
typedef struct { uint32_t f:1; uint32_t r:31; uint32_t len; const uint8_t *p; } S;
typedef struct { uint32_t f:1; uint32_t r:31; } T;

extern uint32_t func_02092864(const uint8_t *text);
extern void func_020059e4(uint32_t *dst, uint32_t n);
extern uint32_t *func_02005af4(uint32_t *dst, uint32_t a, uint32_t b, const uint8_t *p, uint32_t end, Ch c);

void func_02053370(uint32_t *dst, uint8_t *s, const uint8_t *text)
{
    uint32_t i;
    uint32_t t;
    uint32_t n;
    const uint8_t *data;
    volatile uint8_t c[2];
    Ch x;

    for (i = 0; i < 3; i++) {
        dst[i] = 0;
    }
    t = func_02092864(text);
    if (((S *)s)->f == 0) {
        data = s + 1;
        n = ((uint32_t)s[0] << 24) >> 25;
    } else {
        data = ((S *)s)->p;
        n = ((S *)s)->len;
    }
    func_020059e4(dst, n + t);
    x = *(Ch *)&c[1];
    dst = func_02005af4(dst, 0, 0, data, (uint32_t)(data + n), x);
    x = *(Ch *)&c[0];
    func_02005af4(dst, n, 0, text, (uint32_t)(text + t), x);
}
