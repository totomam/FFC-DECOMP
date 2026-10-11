#include "ffc/types.h"

typedef void (*VFn)(void *);

typedef struct {
    uint32_t fn;
    int32_t adj;
} PMF;

void func_ov002_02195fbc(void *self)
{
    uint8_t *b = (uint8_t *)self;
    PMF *p = (PMF *)(b + 0x3c0);
    int32_t off = p->adj >> 1;
    VFn fn;

    if (p->adj & 1) {
        void *vt = *(void **)(b + off);
        fn = *(VFn *)((uint8_t *)vt + p->fn);
    } else {
        fn = (VFn)p->fn;
    }
    fn(b + off);
}
