#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    void *p;
} Ctx;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov001_02187484(Ctx *c);
extern void *func_ov000_021686f4(uint32_t size, uint32_t count, uint32_t zero);
extern int func_ov001_02186e30(uint8_t *s, int n);
extern uint32_t func_ov001_02186dbc(Ctx *c, uint8_t *s);
extern void func_ov000_02168784(void *p, Pair *v);

int func_ov001_02187cd0(Ctx *c, uint8_t *p, int n)
{
    uint8_t *q = p;
    int count = *q;
    int rem = n;
    int i;
    int len;
    Pair pr;

    q++;
    rem--;
    if (c->p) {
        func_ov001_02187484(c);
    }
    c->p = func_ov000_021686f4(8, count, 0);
    if (c->p == 0) {
        return 5;
    }
    for (i = 0; i < count; i++) {
        if (rem < 2) {
            return 4;
        }
        len = func_ov001_02186e30(q + 1, rem - 1);
        if (len == -1) {
            return 4;
        }
        pr.b = *q;
        pr.a = func_ov001_02186dbc(c, q + 1);
        func_ov000_02168784(c->p, &pr);
        q += len + 1;
        rem -= len + 1;
    }
    return 0;
}
