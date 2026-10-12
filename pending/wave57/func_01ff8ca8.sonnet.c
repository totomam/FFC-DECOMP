/* cflags: -nothumb -lang c++ */
#include "ffc/types.h"

struct P { int32_t x, y; };
static inline uint32_t mk(uint32_t v, P p){ v = (v & 0xfe00ffffu) | (((uint32_t)p.x << 23) >> 7); return (v & ~0xffu) | ((uint32_t)p.y & 0xffu); }
extern "C" {
extern void func_0208763c(void *p);
extern "C" void func_0205fe44(void *p);
extern void func_02087678(void *p);
}

struct Guard {
    void *p;
    uint8_t flag;
    Guard(void *x) : p(x), flag(1) { if (flag) func_0208763c(p); }
    ~Guard() { if (flag) func_02087678(p); }
};

typedef struct Ent {
    uint32_t w0;
    uint16_t h4;
    uint16_t p6;
    int32_t x8;
    int32_t yc;
    int32_t x10;
    int32_t y14;
    int32_t w18;
    int32_t h1c;
    uint32_t m20;
    uint32_t p24;
} Ent;

typedef struct Buf {
    uint32_t a;
    uint32_t *out;
} Buf;

typedef struct Self {
    uint8_t pad0[0x18];
    uint32_t n18;
    uint32_t n1c;
    uint32_t m20;
    Buf *p24;
    uint8_t *p28;
    Ent *p2c;
    uint32_t *p30;
    int32_t off34;
    int32_t off38;
    uint8_t f3c;
    uint8_t pad3d[3];
    int32_t b40;
    int32_t b44;
    int32_t b48;
    int32_t b4c;
} Self;

extern "C" void func_01ff8ca8(Self *s)
{
    Guard g((void *)(s->p28 + 0x20));
    void *tmp = g.p;
    Ent *e; int32_t sl; uint32_t v;
    uint32_t i, j, sb, cnt;
    uint32_t n;
    uint32_t *out;
    int32_t dx, dy; P a;
    uint32_t w;
    uint32_t key, kv;
    int32_t l40, l44, l48, l4c;

    if (s->f3c != 0) {
        func_0205fe44(s->p24);
        return;
    }
    {
        uint32_t m = s->m20;
                if (m != 0) {
            uint32_t mask = 0;
            if (m & 1) mask |= 0xc0000000u;
            if (m & 2) { mask |= 0x3fc000u; mask |= 0x3fc00000u; }
            if (m & 4) { mask |= 0xffu; mask |= 0x300u; }
            for (i = 2; i <= s->n18; i++) {
                key = s->p30[i];
                kv = mask & s->p2c[key].m20;
                j = i;
                while ((mask & s->p2c[s->p30[j - 1]].m20) > kv) {
                    s->p30[j] = s->p30[j - 1];
                    j--;
                }
                s->p30[j] = key;
            }
        }

        cnt = 0;
        l40 = s->b40; l44 = s->b44; l48 = s->b48; l4c = s->b4c;
        out = s->p24->out;
        for (sb = 1; sb <= s->n18 && cnt < s->n1c; sb++) {
            e = &((Ent *)s->p2c)[s->p30[sb]];
            if (((e->w0 << 22) >> 30) == 2) {
                continue;
            }
            sl = e->x10 - e->x8;
            a.y = (e->y14 - e->yc) - s->off38;
            a.x = sl - s->off34;
            if (a.x + e->w18 < l40) continue;
            if (a.x >= l48) continue;
            if (a.y + e->h1c < l44) continue;
            if (a.y >= l4c) continue;
            w = e->w0;
            out[0] = w;
            ((uint16_t *)out)[2] = e->h4;
            v = out[0];
            v = mk(v, a);
            out[0] = v;
            out += 2;
            cnt++;
        }
        while (cnt < s->n1c) {
            out[0] = (out[0] & ~0x300u) | 0x200u;
            out += 2;
            cnt++;
        }
    }
}
