/* cflags: -lang c++ */
#include "ffc/types.h"
struct T { uint8_t x; };
struct S { uint32_t *buf; uint32_t len; };
extern "C" void func_020224fc(void *p, uint32_t n, T v);
extern "C" void func_020224b8(S *p, uint32_t n, uint32_t *src);
extern "C" void func_020224b8(S *p, uint32_t n, uint32_t *src) {
    uint32_t cnt; uint32_t *d;
    if (n == 0) return;
    uint8_t w[2];
    T *q = (T *)&w[1];
    q->x = 0;
    T b = *q;
    func_020224fc(p, n, b);
    cnt = n;
    d = (uint32_t *)((uint8_t *)p->buf + p->len * 4);
    while (cnt != 0) { *d++ = *src; cnt--; }
    p->len += n;
}
