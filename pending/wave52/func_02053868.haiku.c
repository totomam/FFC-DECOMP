#include "ffc/types.h"

extern int func_02053c80(void *p);
extern void func_0205360c(void *obj, void *src);
extern void func_02053b64(void *obj, void *dst);
extern void func_02053d60(void *object, void *elem, uint32_t value);
extern void *func_02053d78(void *object);

typedef struct {
    uint32_t w[4];
} Elem;

typedef struct {
    Elem *data;
    uint32_t size;
    uint32_t cap;
} Vec;

typedef struct {
    Elem *begin;
    uint32_t count;
} Span;

void func_02053868(Vec *dst, void *src) {
    volatile uint8_t z;
    Span s;
    uint32_t pad;
    Vec t;
    Elem *p;

    if (func_02053c80(src) != 0) {
        return;
    }
    func_0205360c(&s, src);
    func_02053b64(&s, dst);
    for (p = s.begin; p != s.begin + s.count; p++) {
        if (dst->size < dst->cap) {
            Elem *d = dst->data + dst->size;
            if (d != 0) {
                *d = *p;
            }
            dst->size++;
        } else {
            z = 0;
            func_02053d60(dst, p, z);
        }
    }
    func_02053d78(&t);
    func_02053d78(&s);
}
