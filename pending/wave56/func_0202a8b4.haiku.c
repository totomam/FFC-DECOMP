#include "ffc/types.h"

extern void func_02091a24(void *);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t, uint32_t);
extern void func_020258b4(void *, uint32_t);
extern void func_02056844(void *);
extern uint8_t data_020ad8f4[];
extern uint8_t data_020ad8b8[];

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint8_t f8;
    uint32_t fc;
    uint32_t f10;
} Src;

uint32_t *func_0202a8b4(uint32_t *a, uint32_t *out, uint32_t flag, uint32_t x, Src *src)
{
    uint32_t *base;
    uint32_t *save;
    Src *pl;

    if (a[0] == (uint32_t)-1) {
        func_02091a24(data_020ad8f4);
        func_0208f42c();
    }
    base = func_0205681c(0x20);
    if (base == 0) {
        func_02091a24(data_020ad8b8);
        func_0208f42c();
    }
    save = base;
    pl = (Src *)((uint8_t *)base + 0xc);
    if (pl != 0) {
        pl->f0 = src->f0;
        pl->f4 = src->f4;
        pl->f8 = src->f8;
        if (src->f0 != 0) {
            func_02052be0();
            if (pl->f8 != 0) {
                func_02052d10(pl->f0, pl->f4);
            }
        }
        pl->fc = src->fc;
        pl->f10 = src->f10;
    }
    base = save;
    base[1] = 0;
    base[0] = 0;
    base[2] = (uint32_t)out;
    if (flag != 0) {
        out[0] = (uint32_t)base;
    } else {
        out[1] = (uint32_t)base;
    }
    a[0] = a[0] + 1;
    func_020258b4(base, a[1]);
    if (x != 0) {
        a[3] = (uint32_t)base;
    }
    if (save != 0) {
        func_02056844(save);
    }
    return base;
}
