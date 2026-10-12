#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint8_t b;
} Loc;

typedef struct {
    uint8_t b0;
    uint8_t b1;
    uint16_t h2;
} Ent;

extern void *func_02052d90(void *a, uint32_t b);
extern int func_0201c00c(void *a, uint32_t b);
extern int func_02043558(void *s, void *e);
extern void func_02018d18(void *dst, void *src);
extern void func_020532a4(void *dst, void *src);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_02053290(void *o);
extern void func_020439c8(void *s, uint32_t a, uint32_t i, void *e, uint32_t f);
extern void func_0201bffc(void *a, uint32_t b, uint32_t c);
extern void *data_020b93b8;
extern void *data_020b8e44;

int func_02042dbc(uint8_t *s, uint8_t **pp) {
    Loc loc;
    uint32_t i;
    uint32_t off;
    uint32_t b1;
    uint32_t c3;
    uint32_t *q;
    uint32_t *tbl;
    uint8_t *m;
    uint8_t *m2;
    Ent *e;

    i = 0;
    q = (uint32_t *)(*pp + 0x10);
    m = func_02052d90((void *)q[1], q[2]);
    if (((uint32_t *)m)[1] != 0) {
    do {
        q = (uint32_t *)(*pp + 0x10);
        m = func_02052d90((void *)q[1], q[2]);
        off = i << 2;
        tbl = (uint32_t *)(m + *(uint32_t *)(m + 8));
        e = (Ent *)(m + *(uint32_t *)((uint8_t *)tbl + off));

        if (func_0201c00c(data_020b93b8, e->h2) == 0 && func_02043558(s, e) != 0) {
            c3 = ((uint32_t *)*pp)[3];
            *(uint32_t *)(s + 0x160) = c3;
            func_02018d18(&loc, data_020b8e44);
            func_020532a4(s + 0xa0, &loc);
            if ((uint32_t *)&loc.w1 != ((uint32_t *)(s + 0xa0) + 1)) {
                if (*(uint32_t *)(s + 0xa4) != 0) {
                    if (s[0xac]) {
                        func_02052d3c(*(uint32_t *)(s + 0xa4), *(uint32_t *)(s + 0xa8));
                    }
                    func_02052c04(*(uint32_t *)(s + 0xa4));
                }
                *(uint32_t *)(s + 0xa4) = loc.w1;
                *(uint32_t *)(s + 0xa8) = loc.w2;
                s[0xac] = loc.b;
                if (loc.w1 != 0) {
                    func_02052be0();
                    if (s[0xac]) {
                        func_02052d10(*(uint32_t *)(s + 0xa4), *(uint32_t *)(s + 0xa8));
                    }
                }
            }
            if (loc.w1 != 0) {
                if (loc.b) {
                    func_02052d3c(loc.w1, loc.w2);
                }
                func_02052c04(loc.w1);
            }
            func_02053290(&loc);

            b1 = e->b1;
            m2 = func_02052d90(*(void **)(s + 0xa4), *(uint32_t *)(s + 0xa8));
            tbl = (uint32_t *)(m2 + *(uint32_t *)(m2 + 8));
            func_020439c8(s, ((uint32_t *)*pp)[3], i, m2 + *(uint32_t *)((uint8_t *)tbl + off), b1);

            if (e->b0 == 0) {
                func_0201bffc(data_020b93b8, e->h2, 1);
                s[0x133] = 1;
            }
            return 1;
        }

        i++;
        q = (uint32_t *)(*pp + 0x10);
        m = func_02052d90((void *)q[1], q[2]);
    } while (i < ((uint32_t *)m)[1]);
    }
    return 0;
}
