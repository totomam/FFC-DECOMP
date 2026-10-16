/* cflags: -lang c++ */
#include "ffc/types.h"
struct S { uint8_t b; S() : b(0) {} };
struct W { S a; S c; };
struct V { uint8_t *data; uint32_t size; uint32_t cap; };
extern "C" void func_020095b8(void *, void *);
extern "C" void func_0200b618(V *, uint32_t *, S);
extern "C" void func_ov003_0216ee28(V *v, uint32_t *src) {
    W w;
    if (v->size < v->cap) {
        uint32_t *p = (uint32_t *)(v->data + v->size * 16);
        if (p != 0) {
            p[0] = src[0];
            func_020095b8(p + 1, src + 1);
        }
        v->size++;
        return;
    }
    func_0200b618(v, src, w.c);
}
