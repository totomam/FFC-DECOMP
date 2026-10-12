#include "ffc/types.h"

typedef struct Hdr {
    uint32_t a;
    void *b;
    uint32_t c;
    uint8_t d;
} Hdr;

typedef struct Mar {
    uint32_t x0;
    uint32_t count;
    uint32_t off;
} Mar;

extern uint32_t data_020b8e44;
extern void *func_0203b688(void *p);
extern void func_02016980(Hdr *out, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02164114(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_02164190(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_ov003_02165a50(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_ov003_02165a84(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_ov003_02165af4(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, void *f);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);

void *func_ov003_0216b650(void *p0, uint16_t p1, void *p2)
{
    Hdr h;
    void *obj = 0;
    uint8_t *n = 0;
    uint8_t *s;
    uint32_t i = 0;
    void *t;
    uint16_t key;

    if (p0 != 0) {
        obj = func_0203b688(p0);
    }
    func_02016980(&h, data_020b8e44);
    if (((Mar *)func_02052d90(h.b, h.c))->count != 0) {
        do {
            Mar *m = (Mar *)func_02052d90(h.b, h.c);
            uint8_t *rec = (uint8_t *)m + *(uint32_t *)((uint8_t *)m + m->off + i * 0) ;
            rec = (uint8_t *)m + ((uint32_t *)((uint8_t *)m + m->off))[i];
            if (p1 == *(uint16_t *)rec) {
                uint32_t so = *(uint32_t *)(rec + 8);
                n = 0;
                if (so != 0) {
                    n = rec + so;
                }
                break;
            }
            i++;
        } while (i < ((Mar *)func_02052d90(h.b, h.c))->count);
    }

    key = *(uint16_t *)n;
    s = 0;
    if (*(uint32_t *)(n + 4) != 0) {
        s = n + *(uint32_t *)(n + 4);
    }

    if (obj != 0) {
        t = func_0205681c(0x2c);
        if (t != 0) {
            t = func_ov003_02164114(p0, key, *(uint16_t *)(s + 2), *(uint32_t *)(s + 8), *(uint32_t *)(s + 0xc), *(uint16_t *)(s + 4), s[0], 0);
        }
        func_02056bc0(obj, t);
    } else {
        func_ov003_02164190(p2, key, *(uint16_t *)(s + 2), *(uint32_t *)(s + 8), *(uint32_t *)(s + 0xc), *(uint16_t *)(s + 4));
    }

    if (*(uint32_t *)(n + 8) != 0) {
        uint8_t *q = n + *(uint32_t *)(n + 12);
        (void)q;
    }

    if (h.b != 0) {
        if (h.d != 0) {
            func_02052d3c(h.b, h.c);
        }
        func_02052c04(h.b);
    }
    func_02053290(&h);
    return obj;
}
