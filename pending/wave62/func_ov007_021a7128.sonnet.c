/* cflags: -lang c++ */
#include "ffc/types.h"
typedef struct { uint32_t w[6]; } E;
typedef struct { E *data; uint32_t count; uint32_t cap; } V;
struct S { uint8_t b; S():b(0){} S(const S&o):b(o.b){} };
inline S mk(const S &a){ return a; }
typedef struct { E *data; uint32_t count; uint32_t cap; uint32_t *pcap; uint32_t idx; } T;
extern "C" uint32_t func_ov007_021a70a8(V *v, uint32_t n);
extern "C" void func_ov007_021a728c(T *t, uint32_t n, S z);
extern "C" void func_ov007_021a7228(T *t);
extern "C" void func_ov007_021a7128(V *v, uint32_t n, E *val)
{
    T t;
    S s0;
    E *dst, *src, *begin;
    uint32_t nc;
    t.data = 0; t.count = 0; t.cap = 0; t.idx = 0; t.pcap = &v->cap;
    nc = func_ov007_021a70a8(v, v->count + n - v->cap);
    func_ov007_021a728c(&t, nc, mk(s0));
    dst = t.data + v->count + t.count;
    t.idx = v->count;
    if (n != 0) {
        do {
            if (dst != 0) *dst = *val;
            t.count++;
            dst++;
        } while (--n != 0);
    }
    begin = v->data;
    src = v->data + v->count;
    dst = t.data + t.idx;
    while (src > begin) {
        src--; dst--;
        if (dst != 0) *dst = *src;
        t.idx--;
        t.count++;
    }
    v->count = 0;
    { uint32_t c = v->cap; v->cap = t.cap; t.cap = c; }
    { E *d = v->data; v->data = t.data; t.data = d; }
    v->count = t.count;
    t.count = 0;
    func_ov007_021a7228(&t);
}
