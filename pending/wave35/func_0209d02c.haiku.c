#include "ffc/types.h"

extern void func_0209cce4(void);
extern void func_0209cc64(void *p);

typedef struct S {
    void (*fn)(void *);
    uint32_t a[5];
    struct S *self;
} S;

void func_0209d02c(uint8_t *base, uint32_t count, uint32_t stride, void (*fn)(void *))
{
    S s;
    uint8_t *p;
    s.fn = fn;
    s.self = &s;
    if (fn == 0) {
        return;
    }
    p = base + count * stride;
    if (count == 0) {
        return;
    }
    do {
        p -= stride;
        s.fn(p);
        count--;
    } while (count != 0);
    if (fn == 0) {
        func_0209cce4();
        func_0209cc64(&s.a[0]);
    }
}
