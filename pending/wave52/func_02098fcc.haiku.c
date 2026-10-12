#include "ffc/types.h"

extern void func_02093b7c(void *dst, const void *src, int32_t n);

typedef struct Obj {
    void **vt;
    uint32_t pad[4];
    uint16_t *cur;
    uint16_t *end;
} Obj;

int32_t func_02098fcc(Obj *p, uint16_t *src, int32_t n)
{
    int32_t avail = ((int32_t)p->end - (int32_t)p->cur) / 2;
    int32_t *pm = (avail < n) ? &avail : &n;
    int32_t c = *pm;
    uint16_t **pc;
    int32_t res;

    if (c > 0) {
        func_02093b7c(p->cur, src, c);
        src += c;
        p->cur += c;
        n -= c;
    }

    if (n > 0) {
        pc = &p->cur;
        do {
            uint16_t v = *src;
            src++;
            if (p->cur < p->end) {
                uint16_t *old = p->cur;
                *pc = *pc + 1;
                *old = v;
                res = *old;
            } else {
                res = ((int32_t (*)(Obj *, int32_t))((void **)p->vt)[12])(p, v);
            }
            if (res == 0xffff) {
                break;
            }
            c++;
            n--;
        } while (n > 0);
    }
    return c;
}
