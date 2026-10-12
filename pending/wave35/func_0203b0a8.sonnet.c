#include "ffc/types.h"

typedef struct { uint8_t b[12]; } E;
typedef struct { uint8_t b; } S;
extern void *func_0209a76c(int32_t a, int32_t b);
extern void func_0203b534(void *v, void *ptr, S x);
extern void func_020095b8(void *dst, void *src);

typedef struct {
    E *base;
    uint32_t count;
} Vec;

void func_0203b0a8(Vec *v, E *begin, E *end) {
    void *ptr = func_0209a76c((int32_t)((uint8_t*)end - (uint8_t*)begin), 12);
    if (ptr == 0) return;
    S x; x.b = 0;
    func_0203b534(v, ptr, x);
    E *dst = v->base + v->count;
    if (begin == end) return;
    do {
        if (dst != 0) func_020095b8(dst, begin);
        v->count++;
        dst++;
        begin++;
    } while (begin != end);
}
