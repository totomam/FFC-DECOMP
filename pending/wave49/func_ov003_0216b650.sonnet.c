#include "ffc/types.h"

typedef struct Hdr { uint32_t a; void *b; uint32_t c; uint8_t d; } Hdr;
typedef struct S8 { uint32_t a, b; } S8;
typedef struct S1 { uint32_t a, b, c, d; } S1;
typedef struct S4 { uint32_t a, b, c, d; } S4;

extern uint32_t data_020b8e44;
extern void *func_0203b688(uint32_t p);
extern void func_02016980(Hdr *out, uint32_t v);
extern uint8_t *func_02052d90(void *mar, uint32_t index);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02164114(void *t, uint32_t a, uint32_t b, uint32_t c, S8 s, uint32_t f, uint32_t g, uint32_t h);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_02164190(void *a, uint32_t b, uint32_t c, S8 s, uint32_t f, uint32_t g, uint32_t h);
extern void *func_ov003_02165a50(void *t, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_ov003_02165a84(void *t, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j);
extern void func_ov003_02165af4(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, void *h);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);

void *func_ov003_0216b650(uint32_t p0, uint32_t p1, void *p2)
{
    Hdr h;
    void *obj = 0;
    uint32_t v0, v1, key, u2, a0, a1, a2;
    S1 q1;
    S4 q4;
    uint32_t i;
    uint8_t *n;

    if (p0) obj = func_0203b688(p0);
    func_02016980(&h, data_020b8e44);
    n = 0;
    i = 0;
    if (i < *(uint32_t *)(func_02052d90(h.b, h.c) + 4)) {
        do {
            uint8_t *m = func_02052d90(h.b, h.c);
            uint8_t *rec = m + ((uint32_t *)(m + *(uint32_t *)(m + 8)))[i];
            if (p1 == *(uint16_t *)rec) {
                uint32_t so = *(uint32_t *)(rec + 8);
                n = 0;
                if (so != 0) n = rec + so;
                break;
            }
            i++;
        } while (i < *(uint32_t *)(func_02052d90(h.b, h.c) + 4));
    }

    {
        key = *(uint16_t *)n;
        uint8_t *s = 0;
        uint32_t u16, u8;
        S8 sv;
        if (*(uint32_t *)(n + 4) != 0) s = n + *(uint32_t *)(n + 4);
        u2 = *(uint16_t *)(s + 2);
        sv.a = *(uint32_t *)(s + 8);
        sv.b = *(uint32_t *)(s + 12);
        u16 = *(uint16_t *)(s + 4);
        u8 = s[0];
        if (obj != 0) {
            void *t = func_0205681c(0x2c);
            if (t != 0) t = func_ov003_02164114(t, p0, key, u2, sv, u16, 0, u8);
            func_02056bc0(obj, t);
        } else {
            func_ov003_02164190(p2, key, u2, sv, u16, 0, u8);
        }

        if (*(uint32_t *)(n + 8) != 0) {
            uint8_t *r = n + *(uint32_t *)(n + 12);
            v0 = *(uint16_t *)r;
            uint32_t r6 = *(uint32_t *)(r + 4);
            uint32_t r4 = *(uint32_t *)(r + 8);
            v1 = *(uint16_t *)(r + 2);
            if (*(uint32_t *)(n + 0x10) != 0) {
                uint32_t r5 = *(uint32_t *)(n + *(uint32_t *)(n + 0x14));
                if (obj != 0) {
                    void *t = func_0205681c(0x40);
                    if (t != 0) t = func_ov003_02165a50(t, p0, key, v0, v1, r6, r5, r4);
                    func_02056bc0(obj, t);
                } else {
                    q1.a = r5;
                    func_ov003_02165af4(p2, key, v0, v1, r6, 1, r4, &q1);
                }
            } else if (*(uint32_t *)(n + 0x18) != 0) {
                uint8_t *w = n + *(uint32_t *)(n + 0x1c);
                a0 = *(uint32_t *)w;
                a1 = *(uint32_t *)(w + 4);
                a2 = *(uint32_t *)(w + 8);
                uint32_t a3 = *(uint32_t *)(w + 12);
                if (obj != 0) {
                    void *t = func_0205681c(0x40);
                    if (t != 0) t = func_ov003_02165a84(t, p0, key, v0, v1, r6, a0, a1, a2, a3, r4);
                    func_02056bc0(obj, t);
                } else {
                    q4.a = a0; q4.b = a1; q4.c = a2; q4.d = a3;
                    func_ov003_02165af4(p2, key, v0, v1, r6, 0, r4, &q4);
                }
            }
        }
    }

    {
        Hdr *hp = &h;
        if (hp->b != 0) {
            if (hp->d != 0) func_02052d3c(hp->b, hp->c);
            func_02052c04(hp->b);
        }
        func_02053290(hp);
    }
    return obj;
}
