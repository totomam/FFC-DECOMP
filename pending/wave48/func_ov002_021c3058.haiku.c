#include "ffc/types.h"

extern int32_t func_ov002_021c2fd8(void *v, int32_t n);
typedef struct Flags { uint8_t a, b, c, d; } Flags;
extern void func_ov002_021c31ac(void *t, int32_t cap, Flags z);
extern void func_020095b8(void *dst, void *src);
extern void func_ov002_021c317c(void *t);

typedef struct Vec {
    uint8_t *data;
    int32_t size;
    int32_t cap;
} Vec;

#define COPY_ELEM(d, s) do { \
    func_020095b8((d), (s)); \
    *(uint32_t *)((uint8_t *)(d) + 0xc) = *(uint32_t *)((uint8_t *)(s) + 0xc); \
    func_020095b8((uint8_t *)(d) + 0x10, (uint8_t *)(s) + 0x10); \
    *((int8_t *)(d) + 0x1c) = *((int8_t *)(s) + 0x1c); \
} while (0)

void func_ov002_021c3058(Vec *v, int32_t n, uint8_t *src)
{
    Vec t;
    int32_t oldsz;
    uint8_t *dst;
    uint8_t *old;
    uint8_t *oend;
    int32_t cap;
    Flags zb;
    int32_t *pcap;

    pcap = &v->cap;
    t.data = 0;
    t.size = 0;
    t.cap = 0;
    zb.a = 0;
    zb.d = 0;

    cap = func_ov002_021c2fd8(v, v->size + n - v->cap);
    func_ov002_021c31ac(&t, cap, zb);

    oldsz = v->size;
    dst = t.data + (oldsz + t.size) * 32;

    if (n != 0) {
        do {
            if (dst != 0) {
                COPY_ELEM(dst, src);
            }
            t.size++;
            n--;
            dst += 32;
        } while (n != 0);
    }

    old = v->data;
    oend = old + v->size * 32;
    dst = t.data + oldsz * 32;

    while (oend > old) {
        oend -= 32;
        dst -= 32;
        if (dst != 0) {
            COPY_ELEM(dst, oend);
        }
        oldsz--;
        t.size++;
    }

    {
        int32_t c = *pcap;
        *pcap = t.cap;
        t.cap = c;
    }
    {
        int32_t s = v->size;
        v->size = t.size;
        t.size = s;
    }
    {
        uint8_t *d = v->data;
        v->data = t.data;
        t.data = d;
    }

    func_ov002_021c317c(&t);
}
