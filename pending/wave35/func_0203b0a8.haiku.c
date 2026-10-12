#include "ffc/types.h"

extern void *func_0209a76c(int32_t a, int32_t b);
extern void func_0203b534(void *v, void *ptr, uint32_t x);
extern void func_020095b8(void *dst, void *src);

typedef struct {
    uint8_t *base;
    uint32_t count;
} Vec;

void func_0203b0a8(Vec *v, uint8_t *begin, uint8_t *end) {
    void *ptr = func_0209a76c((int32_t)(end - begin), 12);
    if (ptr == 0) return;
    uint8_t tmp = 0;
    uint32_t x = tmp;
    func_0203b534(v, ptr, x);
    if (begin == end) return;
    uint8_t *dst = v->base + v->count * 12;
    do {
        if (dst != 0) func_020095b8(dst, begin);
        v->count++;
        dst += 12;
        begin += 12;
    } while (begin != end);
}
