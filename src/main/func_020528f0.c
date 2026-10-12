#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02087620(void *object);
extern void func_02052064(void *obj, Pair p);
extern void func_020522d4(void *dst, void *src, uint32_t size);
extern void *func_02056830(uint32_t size);
extern void *func_0205208c(void *object);

typedef struct {
    Pair     pr;         /* 0x00 */
    uint32_t idx;        /* 0x08 */
    uint8_t  blob[4];    /* 0x0c */
    uint32_t n;          /* 0x10 */
    void    *p14;        /* 0x14 */
    uint32_t *p18;       /* 0x18 */
    uint32_t *p1c;       /* 0x1c */
    uint8_t  sub[0x18];  /* 0x20 */
    uint32_t arr[3];     /* 0x38 */
} Obj;

Obj *func_020528f0(Obj *self, Pair p, ...)
{
    uint32_t *arr;
    uint32_t i;
    uint32_t loc[0x16];

    self->pr = p;
    func_02087620(self->sub);
    arr = self->arr;
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    func_02052064(loc, self->pr);
    func_020522d4(loc, self->blob, 8);
    self->p14 = func_02056830(self->n * 8);
    func_020522d4(loc, self->p14, self->n * 8);
    self->p18 = func_02056830(self->n * 4);
    self->p1c = func_02056830(self->n * 4);
    self->idx = 0;
    for (i = 0; i < self->n; i++) {
        self->p1c[i] = 0;
    }
    func_0205208c(loc);
    return self;
}
