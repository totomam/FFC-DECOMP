#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_020059e4(uint32_t *arr, uint32_t n);
extern void func_02005af4(uint32_t *arr, uint32_t off, uint32_t zero, const uint8_t *begin, const uint8_t *end, uint8_t c);

typedef struct {
    union {
        struct { uint32_t isLong : 1; } w;
        struct { uint8_t f : 1; uint8_t sl : 7; uint8_t d[3]; } b;
    } u;
    uint32_t len;
    const uint8_t *ptr;
} StrRef;

void func_02009130(uint32_t *arr, const uint8_t *text, const StrRef *src)
{
    uint32_t i;
    uint32_t len1, len2;
    const uint8_t *p2;
    uint8_t c[2];

    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }

    len1 = func_02092864(text);

    if (src->u.w.isLong == 0) {
        len2 = src->u.b.sl;
        p2 = (const uint8_t *)src + 1;
    } else {
        p2 = src->ptr;
        len2 = src->len;
    }

    func_020059e4(arr, len1 + len2);

    func_02005af4(arr, 0, 0, text, text + len1, c[1]);
    func_02005af4(arr, len1, 0, p2, p2 + len2, c[0]);
}
