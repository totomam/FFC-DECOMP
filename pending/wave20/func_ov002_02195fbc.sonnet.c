#include "ffc/types.h"
typedef void (*VFn)(void *);
typedef struct { int32_t fn; int32_t adj; } PMF;
void func_ov002_02195fbc(char *self)
{
    PMF *p = (PMF *)(self + 0x3c0);
    int32_t a = p->adj;
    char *o = self + (a >> 1);
    VFn fn;
    if (a & 1) {
        fn = *(VFn *)(*(char **)o + p->fn);
    } else {
        fn = (VFn)p->fn;
    }
    fn(o);
}
