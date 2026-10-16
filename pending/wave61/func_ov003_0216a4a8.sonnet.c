#include "ffc/types.h"
typedef struct { uint32_t *data; int32_t size; } V;
typedef struct { uint8_t v; } F;
extern void func_020224fc(V *v, int32_t n, F f);
extern void func_02090398(void *d, void *s, int32_t n);
void func_ov003_0216a4a8(V *v, uint32_t *b, uint32_t *e)
{
    uint32_t *s = b, *t = e;
    int32_t d = (char*)t - (char*)s;
    if (d / 4 != 0) {
        uint8_t a[2];
        F *p = (F*)(a + 1);
        p->v = 0;
        func_020224fc(v, d / 4, *p);
        func_02090398(v->data + v->size, s, d / 4 * 4);
        v->size += d / 4;
    }
}
