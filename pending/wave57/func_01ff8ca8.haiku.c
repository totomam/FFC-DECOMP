/* cflags: -nothumb -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_0208763c(void *p);
extern "C" void func_0205fe44(void *p);
extern void func_02087678(void *p);
}

struct Guard {
    void *p;
    uint8_t flag;
    Guard(void *x) : p(x), flag(1) {}
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
    uint32_t i, j, sb, cnt;
    uint32_t n;
    uint32_t *out;
    int32_t dx, dy;
    uint32_t w;

    func_0208763c(tmp);
    if (s->f3c != 0) {
        func_0205fe44(s->p24);
    } else {
        uint32_t m = s->m20;
        n = s->n18;
        if (m != 0) {
            uint32_t mask = 0;
            if (m & 1) mask |= 0xc0000000u;
            if (m & 2) { mask |= 0x3fc000u; mask |= 0x3fc00000u; }
            if (m & 4) { mask |= 0xffu; mask |= 0x300u; }
            if (n >= 2) {
                uint32_t *idx = s->p30;
                Ent *ents = s->p2c;
                for (i = 2; i <= n; i++) {
                    uint32_t key = idx[i];
                    uint32_t kv = mask & ents[key].m20;
                    j = i;
                    if ((mask & ents[idx[j - 1]].m20) > kv) {
                        do {
                            idx[j] = idx[j - 1];
                            j--;
                        } while ((mask & ents[idx[j - 1]].m20) > kv);
                    }
                    idx[j] = key;
                }
            }
        }

        cnt = 0;
        out = s->p24->out;
        for (sb = 1; sb <= n && cnt < s->n1c; sb++) {
            Ent *e = &((Ent *)s->p2c)[s->p30[sb]];
            int32_t sl;
            uint32_t v;
            if (((e->w0 << 22) >> 30) == 2) {
                continue;
            }
            sl = e->x10 - e->x8;
            dy = (e->y14 - e->yc) - s->off38;
            dx = sl - s->off34;
            if (dx + e->w18 < s->b40) continue;
            if (dx >= s->b48) continue;
            if (dy + e->h1c < s->b44) continue;
            if (dy >= s->b4c) continue;
            w = e->w0;
            out[0] = w;
            ((uint16_t *)out)[2] = e->h4;
            v = out[0];
            v = (v & 0xfe00ffffu) | (((uint32_t)dx << 23) >> 7);
            v = (v & ~0xffu) | ((uint32_t)dy & 0xffu);
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
