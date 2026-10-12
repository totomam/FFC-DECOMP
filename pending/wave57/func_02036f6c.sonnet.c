#include "ffc/types.h"

extern void *data_020b8e44;
extern uint32_t func_02018020(void *p);
extern void *func_020197b4(void *p, uint32_t i);

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t a_lo:20; uint32_t a_hi:8; uint32_t a_top:4;
    uint32_t b_id:10; uint32_t b_c:2; uint32_t b_d:1; uint32_t b_e:1; uint32_t b_f:8; uint32_t b_top:10;
    uint32_t c_g:3; uint32_t c_h:1; uint32_t c_i:1; uint32_t c_top:27;
} Src;

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t a_lo:14; uint32_t a_hi:5; uint32_t idx:10; uint32_t c:3;
    uint32_t d:1; uint32_t e:1; uint32_t f:8; uint32_t g:3; uint32_t h:1; uint32_t i:1; uint32_t z1:1; uint32_t z2:1; uint32_t idx2:10; uint32_t top2:5;
    uint32_t p:23; uint32_t r:9;
    uint32_t u:13; uint32_t v:1; uint32_t x:1; uint32_t y:17;
} Dst;

void func_02036f6c(Src *s, Dst *dd)
{
    uint32_t n = func_02018020(data_020b8e44);
    uint32_t idx = 0;
    uint32_t i;

    for (i = 0; i < n; i++) {
        uint16_t *e = (uint16_t *)func_020197b4(data_020b8e44, i);
        if (s->b_id == e[12]) {
            idx = i;
            break;
        }
    }

    dd->w0 = s->w0;
    dd->w1 = s->w1;
    dd->a_lo = s->a_lo;
    dd->a_hi = s->a_hi;
    dd->idx = idx;
    dd->c = s->b_c;
    dd->d = s->b_d;
    dd->e = s->b_e;
    dd->f = s->b_f;
    dd->g = s->c_g;
    dd->h = s->c_h;
    dd->i = s->c_i;
    dd->z1 = 0; dd->z2 = 0;
    dd->idx2 = idx;
    dd->p = 0;
    dd->u = 0; dd->v = 0; dd->x = 0;
}
