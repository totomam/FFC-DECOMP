/* cflags: -lang c++ */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { P *beg; uint32_t size; uint32_t cap; } V;
extern "C" uint32_t func_ov002_021a5164(V *v, uint32_t n);
extern "C" void func_ov002_021a5124(V *v, uint32_t n, uint32_t x);
inline const uint32_t &mn(const uint32_t &a, const uint32_t &b) { return (a < b) ? a : b; }
extern "C" void func_ov002_021a1c28(V *v, P *first, P *last);
extern "C" void func_ov002_021a1c28(V *v, P *first, P *last)
{
    int ok = 1;
    struct { uint32_t x; uint32_t n; } L;
    L.n = last - first;
#define n L.n
    uint32_t r3;
    if (n > v->cap) {
        ok = 0;
        r3 = func_ov002_021a5164(v, n - v->cap);
    }
    if (ok) {
        P *mid = first;
        mid += mn(v->size, n);
        P *d = v->beg;
        while (first < mid) { *d++ = *first++; }
        if (n < v->size) {
            v->size = v->size - (v->size - n);
            return;
        }
        if (v->size < n) {
            P *q = v->beg + v->size;
            while (mid != last) {
                if (q) *q = *mid;
                mid++;
                v->size++;
                q++;
            }
        }
    } else {
        P *q;
        func_ov002_021a5124(v, n, r3);
        q = v->beg + v->size;
        while (first != last) {
            if (q) *q = *first;
            v->size++;
            first++;
            q++;
        }
    }
}
