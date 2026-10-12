#include "ffc/types.h"

extern int32_t data_020b13dc[];
extern int32_t data_020b13e0;
extern int32_t data_020b13e4;

typedef struct Obj Obj;
typedef void (*MFn)(int32_t *ret, Obj *self);
struct Obj { MFn *vt; };

typedef struct Str {
    union {
        struct { uint32_t heap:1; } w;
        struct { uint8_t heap:1; uint8_t len:7; } b;
    } u;
    uint32_t hlen;
    uint16_t *hptr;
} Str;

#define FLAGS_UNUSED 0
static inline int is_heap(Str *s) { return s->u.w.heap ? 1 : 0; }
static inline uint16_t *sbegin(Str *s) { return is_heap(s) ? s->hptr : (uint16_t *)((uint8_t *)s + 2); }
static inline uint16_t *send(Str *s) { return sbegin(s) + (is_heap(s) ? s->hlen : s->u.b.len); }
static inline const volatile int32_t *maxp(const volatile int32_t *x, const volatile int32_t *y) { return (*x < *y) ? y : x; }
#define BEGIN(s) sbegin(s)
#define END(s) send(s)

void func_020613e4(int32_t *out, Obj *a, Str *s, int32_t mult, int32_t k)
{
    int32_t sum20, sum1c; volatile int32_t sum18, sum14; int32_t tmp[2];
    int32_t lines = 0, cnt = 0;
    sum20 = 0; sum1c = 0;
    int32_t *m;
    const volatile int32_t *cm;
    int32_t heap = is_heap(s);
    uint16_t *p = (uint16_t *)((uint8_t *)s + 2);
    if (heap) p = s->hptr;
    uint16_t c = 0;

    while (p != (heap ? s->hptr + s->hlen : (uint16_t *)((uint8_t *)s + 2) + s->u.b.len)) {
        sum14 = 0; sum18 = 0; cnt = 0;
        while ((c = *p) != 0 && c != 0xa) {
            a->vt[3](tmp, a);
            sum14 += tmp[0];
            cm = maxp(&sum18, &tmp[1]);
            p++;
            sum18 = *cm;
            cnt++;
        }
        if (cnt != 0) sum14 += mult * (cnt - 1);
        cm = maxp(&sum1c, &sum14);
        sum1c = *cm;
        sum20 += sum18;
        heap = is_heap(s);
        if (p == (!heap ? (uint16_t *)((uint8_t *)s + 2) + s->u.b.len : s->hptr + s->hlen)) break;
        lines++;
        p++;
    }
    sum20 += lines * k;
    m = (data_020b13dc[2] < sum20) ? &sum20 : &data_020b13e4;
    {
        int32_t v2 = *m;
        m = (data_020b13dc[1] < sum1c) ? &sum1c : &data_020b13e0;
        out[0] = *m;
        out[1] = v2;
    }
}
