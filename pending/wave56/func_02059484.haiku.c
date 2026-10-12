#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02088f30(void);
extern uint32_t func_02059d54(uint32_t index);
extern uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void *func_0205681c(uint32_t size);
extern void *func_02059d64(void *obj, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_020595bc(void *p, void *obj, uint32_t idx);
extern void func_02087678(void *p);

void *func_02059484(uint8_t *p, uint32_t a, uint32_t c)
{
    struct G {
        uint32_t ptr;
        uint8_t flag;
    } g;
    uint32_t i, n, ret, off;
    void *obj;

    struct G *gp = &g;
    g.ptr = *(uint32_t *)(p + 0x10) + 0x20;
    gp->flag = 1;
    if (gp->flag) {
        func_0208763c((void *)g.ptr);
    }

    i = p[0x54];
    n = *(uint32_t *)(*(uint32_t *)(p + 8) + 4);
    if (i < n) {
        uint32_t m;
        do {
            if (((uint32_t *)(p + 0x14))[i] == 0) {
                break;
            }
            i++;
            m = *(volatile uint32_t *)(*(uint32_t *)(p + 8) + 4);
        } while (i < m);
    }
    if (i >= n) {
        func_02088f30();
    }

    ret = func_02059d54(a);
    ret = func_0205816c(*(void **)(p + 0x10), ret, c, 0x800, 0, 0, 0x10000);
    off = (ret - *(uint32_t *)(*(uint32_t *)(p + 0x10) + 4)) >> 11;

    obj = func_0205681c(0x38);
    if (obj != 0) {
        obj = func_02059d64(obj, *(void **)(p + 0xc), off, ret, a, i);
    }
    ((void **)(p + 0x14))[i] = obj;
    func_020595bc(p, obj, i);

    if (gp->flag) {
        func_02087678((void *)g.ptr);
    }
    return obj;
}
