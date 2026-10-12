#include "ffc/types.h"

typedef struct Ent {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Ent;

typedef struct S {
    uint8_t pad0[8];
    uint8_t kind;
    uint8_t pad1[0x48 - 9];
    uint32_t f48;
    uint8_t *buf;
    uint32_t size;
    uint8_t pad2[0x70 - 0x54];
    Ent ents[4];
} S;

extern uint32_t func_02088978(void);
extern void func_020850f4(void *dst, const void *src, uint32_t n);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_02088f30(void);
extern void func_0208898c(uint32_t saved);
extern void func_ov000_02146940(S *s, int x);

void func_ov000_02147ab0(uint32_t p, S *s)
{
    uint32_t saved = func_02088978();
    uint32_t old = s->size;
    uint32_t flag = 0;
    uint32_t d;
    uint32_t first;
    uint32_t f0;
    uint32_t f1;
    uint8_t *dst;
    int i;


    if (old == s->f48 && p != 0) {
        flag = 1;
    }

    if (p >= old) {
        s->size = 0;
    } else {
        s->size = old - p;
        func_020850f4(s->buf + p, s->buf, old - p);
    }

    first = s->ents[0].a;
    if (first != 0) {
        d = old - s->size;
        if (d != 0) {
            i = 0;
            while (i < 4 && s->ents[i].a != 0) {
                i++;
            }
            if (first > d) {
                i--;
                f0 = s->ents[i].a;
                f1 = s->ents[i].b;
                dst = s->buf + first;
                func_020850f4(dst, dst - d, f0 + f1 - first);
                i = 0;
                while (i < 4 && s->ents[i].a != 0) {
                    s->ents[i].a -= d;
                    i++;
                }
            } else {
                func_02084b2c(&s->ents[0], 0, 0x30);
                func_02088f30();
            }
        }
    }

    func_0208898c(saved);

    if (s->kind == 10) {
        return;
    }
    if (s->kind == 11) {
        return;
    }
    if (s->size == 0 || flag != 0) {
        func_ov000_02146940(s, 0);
    }
}
