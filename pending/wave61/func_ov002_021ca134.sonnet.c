/* cflags: -lang c++ -noO4,p -O4 */
#include "ffc/types.h"
struct F { uint8_t b; F(uint8_t x) : b(x) {} F(const F &o) : b(o.b) {} };
struct P { uint32_t x,y; };
struct M { P a,b,c; };
struct S { uint32_t a[5]; M m; uint32_t z; };
struct V { S *data; uint32_t n; uint32_t cap; };
extern "C" void func_ov002_021d2b38(V *v, S *e, F f);
extern "C" void func_ov002_021ca134(V *v, S *e) {
    S *d = 0;
    S *src = e;
    if (v->n < v->cap) {
        uint32_t nn = v->n + 1;
        v->n = nn;
        d = v->data;
        S *p = &d[nn - 1];
        p->a[0]=src->a[0];p->a[1]=src->a[1];p->a[2]=src->a[2];p->a[3]=src->a[3];p->a[4]=src->a[4];
        p->m = src->m;
        p->z=src->z;
        return;
    }
    uint8_t z[2]; uint8_t *pz = &z[1]; *pz = (uint8_t)(uint32_t)d;
    func_ov002_021d2b38(v, src, F(*pz));
}
