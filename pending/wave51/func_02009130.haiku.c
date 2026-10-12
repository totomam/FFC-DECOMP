#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_020059e4(uint32_t *arr, uint32_t n);
extern void func_02005af4(uint32_t *arr, uint32_t off, uint32_t zero, const uint8_t *begin, const uint8_t *end, uint8_t c);

typedef struct {
    uint32_t flag;
    const uint8_t *ptr;
    uint32_t len;
} StrRef;

void func_02009130(uint32_t *arr, const uint8_t *text, const StrRef *src)
{
    int i;
    uint32_t len1, len2;
    const uint8_t *p2;
    uint16_t tmp;

    for (i = 0; i < 3; i++) {
        arr[i] = i;
    }

    len1 = func_02092864(text);

    if (src->flag & 1) {
        p2 = src->ptr;
        len2 = src->len;
    } else {
        len2 = ((const uint8_t *)src)[0] >> 1;
        p2 = (const uint8_t *)src + 1;
    }

    func_020059e4(arr, len1 + len2);

    func_02005af4(arr, 0, 0, text, text + len1, (uint8_t)(tmp >> 8));
    func_02005af4(arr, len1, 0, p2, p2 + len2, (uint8_t)tmp);
}
