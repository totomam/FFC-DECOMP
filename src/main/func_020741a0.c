#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern void func_02092878(void *dst, const uint8_t *src);
extern char data_020b23a8[];

typedef struct S {
    void *vt;
    uint32_t p04;
    uint32_t p08;
    uint32_t flags;
    uint32_t p10;
    uint32_t a;
    uint32_t p18;
    uint32_t p1c;
    uint32_t p20;
    uint32_t p24;
    char *buf;
    uint32_t p2c;
    uint32_t p30;
    char **arr;
    int n;
    uint32_t e;
    uint32_t p40;
    uint32_t f;
    uint32_t g;
} S;

void *func_020741a0(uint32_t a, const uint8_t *b, const uint8_t **c, int d, uint32_t e, uint32_t f, uint32_t g)
{
    int i;
    uint32_t one = sizeof(char);
    S *s = (S *)func_0205681c(0x4c);
    if (s != 0) {
    s->flags &= ~0xffu;
    s->a = a;
    s->p18 = 0;
    s->p1c = 0;
    s->vt = data_020b23a8;
    s->p24 = 0;
    s->buf = 0;
    s->p2c = 0;
    s->p30 = 0;
    s->arr = 0;
    s->n = d;
    s->e = e;
    s->p40 = 0;
    s->f = f;
    s->g = g;
    s->buf = (char *)func_02056830(one * (func_02092864(b) + 1));
    func_02092878(s->buf, b);
    s->arr = (char **)func_02056830(s->n * 4);
    if (s->n > 0) {
        i = 0;
        do {
            s->arr[i] = (char *)func_02056830(one * (func_02092864(c[i]) + 1));
            func_02092878(s->arr[i], c[i]);
            i++;
        } while (i < s->n);
    }
    }
    return s;
}
