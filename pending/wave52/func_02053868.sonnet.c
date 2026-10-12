/* cflags: -lang c++ */
#include "ffc/types.h"

struct Elem { uint32_t w[4]; };
struct Vec { Elem *data; uint32_t size; uint32_t cap; };
extern "C" {
int func_02053c80(void *p);
void func_0205360c(void *obj, void *src);
void func_02053b64(void *obj, void *dst);
void func_02053d60(void *object, void *elem, uint32_t value);
void *func_02053d78(void *object);
void func_02053868(Vec *dst, void *src);
}

struct Tag { uint8_t v; Tag(uint8_t x) : v(x) {} ~Tag() {} };

static inline void push(Vec *v, Elem *e, const Tag &z) {
    if (v->size < v->cap) {
        Elem *d = v->data + v->size;
        if (d != 0) {
            d->w[0] = e->w[0]; d->w[1] = e->w[1]; d->w[2] = e->w[2]; d->w[3] = e->w[3];
        }
        v->size++;
    } else {
        func_02053d60(v, e, z.v);
    }
}

void func_02053868(Vec *dst, void *src) {
    Vec t;
    Vec s;
    if (func_02053c80(src) != 0) return;
    func_0205360c(&s, src);
    func_02053b64(&s, dst);
    for (Elem *p = s.data; p != (Elem *)((uint8_t *)s.data + (s.size << 4)); p++) {
        push(dst, p, Tag(0));
    }
    func_02053d78(&t);
    func_02053d78(&s);
}
