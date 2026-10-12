#include "ffc/types.h"

typedef struct Str {
    uint32_t w[3];
} Str;

typedef struct Elem {
    uint32_t w[3];
} Elem;

typedef struct Src {
    uint32_t hdr;
    uint32_t len;
    const char *ptr;
} Src;

typedef struct Vec {
    Elem *data;
    uint32_t count;
    uint32_t cap;
} Vec;

typedef struct Obj {
    void *vtbl;
    uint8_t pad04[0x7c];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
    uint32_t f8c;
    uint8_t f90[4];
    uint8_t f94[4];
    uint8_t f98[0x18];
    Elem *vec;
    uint32_t count;
    uint32_t cap;
    uint32_t res;
    uint32_t fc0;
} Obj;

extern uint32_t func_0204f7d4(const void *object);
extern void func_02056c9c(Obj *self, uint32_t v);
extern void func_02005988(Str *s, uint32_t v);
extern void func_020634e0(void *sub, Str *s, uint32_t n);
extern void *func_020059cc(void *object);
extern void func_02087620(void *object);
extern uint32_t func_02008f2c(Str *out, Src *src, int start, int len);
extern void func_020095b8(Elem *dst, Str *src);
extern void func_02009574(Elem **vec, Str *s, uint32_t flag);

extern void *data_0213df18;
extern char data_020aad10[];
extern uint32_t data_020aacf8[];
extern uint32_t data_020aad5c[];

void *func_02008d6c(Obj *self, Src *src) {
    Str tA;
    Str tB;
    Str tC;
    int start;
    int i;
    uint32_t len;
    const char *s;
    int shortform;
    uint8_t fl[4];

    func_02056c9c(self, func_0204f7d4(data_0213df18));
    *(void **)self = data_020aad10;
    self->f88 = 0;
    self->f8c = 0;
    func_02005988(&tA, data_020aacf8[1]);
    func_020634e0(self->f94, &tA, 2);
    func_020059cc(&tA);
    func_02087620(self->f98);
    self->vec = 0;
    self->fc0 = 0;
    {
        Vec *v = (Vec *)&self->vec;
        v->count = 0;
        v->cap = 0;
    }
    self->f80 = data_020aad5c[0];
    self->f84 = data_020aad5c[1];

    shortform = ((src->hdr & 1) == 0);
    if (shortform) {
        len = (((uint8_t *)src)[0] >> 1) & 0x7f;
    } else {
        len = src->len;
    }

    if (len != 0) {
        if (shortform) {
            s = (const char *)src + 1;
        } else {
            s = src->ptr;
        }
        start = 0;
        i = 0;
        while (s[i] != 0) {
            if (s[i] == 10 || s[i] == 13) {
                if (i > start) {
                    func_02008f2c(&tB, src, start, i - start);
                    if (self->count < self->cap) {
                        Elem *e = self->vec + self->count;
                        if (e) {
                            func_020095b8(e, &tB);
                        }
                        self->count++;
                    } else {
                        fl[2] = 0;
                        func_02009574(&self->vec, &tB, *(volatile uint8_t *)&fl[2]);
                    }
                    func_020059cc(&tB);
                }
                start = i + 1;
            }
            i++;
        }
        if (i > start) {
            func_02008f2c(&tC, src, start, i - start);
            if (self->count < self->cap) {
                Elem *e = self->vec + self->count;
                if (e) {
                    func_020095b8(e, &tC);
                }
                self->count++;
            } else {
                fl[0] = 0;
                func_02009574(&self->vec, &tC, *(volatile uint8_t *)&fl[0]);
            }
            func_020059cc(&tC);
        }
    }
    self->res = self->count;
    return self;
}
