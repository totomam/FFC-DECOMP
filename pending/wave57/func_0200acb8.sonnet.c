#include "ffc/types.h"

typedef struct Elem {
    uint32_t a;
    uint8_t rest[12];
} Elem;

typedef struct Vec {
    Elem *data;
    uint32_t size;
    uint32_t cap;
} Vec;

extern Elem *func_0200b574(Vec *p, uint32_t n);
extern void func_0200b65c(void *dst, const void *src);
extern void func_0200b5f4(Vec *p, int32_t n, uint8_t v);
extern void func_020095b8(void *dst, const void *src);
extern void func_0200b524(Vec *p, uint32_t n);

void func_0200acb8(Vec *p, Elem *first, Elem *last) {
    uint32_t n = (uint32_t)(last - first);
    uint32_t m;
    int fits = 1;
    Elem *dst;
    Elem *src;
    Elem *end;

    if (n > p->cap) {
        fits = 0;
        last = func_0200b574(p, n - p->cap);
    }
    if (fits) {
        m = *(p->size < n ? &p->size : &n);
        dst = p->data;
        src = first;
        end = first + m;
        while (src < end) {
            dst->a = src->a;
            func_0200b65c(dst->rest, src->rest);
            src++;
            dst++;
        }
        if (n < p->size) {
            volatile uint8_t z = 0;
            func_0200b5f4(p, p->size - n, z);
            return;
        }
        if (p->size < n) {
            dst = p->data + p->size;
            src = end;
            while (src != last) {
                if (dst != 0) {
                    dst->a = src->a;
                    func_020095b8(dst->rest, src->rest);
                }
                p->size++;
                src++;
                dst++;
            }
        }
    } else {
        func_0200b524(p, n);
        dst = p->data + p->size;
        src = first;
        while (src != last) {
            if (dst != 0) {
                dst->a = src->a;
                func_020095b8(dst->rest, src->rest);
            }
            p->size++;
            src++;
            dst++;
        }
    }
}
