#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef void (*VFn)(void *);
#define VCALL(o, n) (((VFn *)(*(void **)(o)))[n])(o)

typedef struct Elem { void *ptr[13]; } Elem;
typedef struct Ctx {
    uint8_t pad0[0xcc];
    uint32_t sel[17];
    uint32_t sel2[4];
    Elem el[1];
} Ctx;

static inline int chk(uint8_t * volatile o)
{
    volatile int r;
    uint8_t * volatile q;
    volatile int flag;
    o = o + 0x14;
    flag = o[0x12];
    q = o + 0x1c;
    if (flag) func_0208763c(q);
    r = (*(uint32_t *)(o + 0x14) == 0);
    if (flag) func_02087678(q);
    return r;
}

#define W(b, off) (*(uint32_t *)((uint8_t *)(b) + (off)))
int func_ov004_02154e9c(Ctx *a, uint32_t idx)
{
    int ret = 0;
    Elem *e = &a->el[idx];
    uint32_t off = idx * 4;
    uint8_t *s = (uint8_t *)a + 0xcc;
    if (chk(e->ptr[W(s, off)])) {
        uint8_t *t = (uint8_t *)a + 0x110;
        if (W(s, off) != W(t, off)) {
            VCALL(e->ptr[W(s, off)], 5);
            W(s, off) = W(t, off);
            VCALL(e->ptr[W(s, off)], 4);
        }
        VCALL(e->ptr[W(s, off)], 6);
    }
    if (!chk(e->ptr[W(s, off)])) ret = 1;
    return ret;
}
