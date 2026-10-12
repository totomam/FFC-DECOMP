#include "ffc/types.h"

extern int32_t data_020b13dc[];
extern int32_t data_020b13e0;
extern int32_t data_020b13e4;

typedef struct Obj Obj;
typedef void (*MFn)(int32_t *ret, Obj *self);
struct Obj { MFn *vt; };

typedef struct Str {
    uint8_t flags;
    uint8_t pad1;
    uint16_t inl0;
    uint32_t hlen;
    uint16_t *hptr;
} Str;

void func_020613e4(int32_t *out, Obj *a, Str *s, int32_t mult, int32_t k)
{
    int32_t tmp[2];
    int32_t sum14, sum18, sum1c, sum20, lines, cnt, total, v1, v2;
    int32_t heap;
    uint16_t *p;
    uint16_t c;

    sum1c = 0;
    sum20 = 0;
    lines = 0;
    heap = s->flags & 1;
    if (heap) {
        p = s->hptr;
    } else {
        p = (uint16_t *)((uint8_t *)s + 2);
    }

    while (p != ((heap) ? (s->hptr + s->hlen) : ((uint16_t *)((uint8_t *)s + 2) + ((s->flags >> 1) & 0x7f)))) {
        sum14 = 0;
        sum18 = 0;
        cnt = 0;
        c = *p;
        while (c != 0 && c != 0xa) {
            a->vt[3](tmp, a);
            sum14 += tmp[0];
            if (sum18 < tmp[1]) {
                sum18 = tmp[1];
            }
            p++;
            cnt++;
            c = *p;
        }
        if (cnt != 0) {
            sum14 += mult * (cnt - 1);
        }
        if (sum1c < sum14) {
            sum1c = sum14;
        }
        sum20 += sum18;
        if (p == ((heap) ? (s->hptr + s->hlen) : ((uint16_t *)((uint8_t *)s + 2) + ((s->flags >> 1) & 0x7f)))) {
            break;
        }
        lines++;
        p++;
    }

    total = sum20 + lines * k;
    sum20 = total;
    v2 = (data_020b13dc[2] < total) ? total : data_020b13e4;
    v1 = (data_020b13dc[1] < sum1c) ? sum1c : data_020b13e0;
    out[0] = v1;
    out[1] = v2;
}
