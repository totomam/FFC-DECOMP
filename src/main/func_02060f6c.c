#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void *func_02060ecc(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *func_02060f1c(void *a, uint32_t b, uint32_t c, void *d, void *e, void *f);
extern char data_020b0b68[];
extern char data_020b0b7c[];

void *func_02060f6c(void *p0, void *p1, void *p2, void *p3)
{
    uint8_t *obj;
    volatile uint8_t *vb;
    uint32_t t;
    void *n;

    obj = (uint8_t *)func_0205681c(0x34);
    if (obj != 0) {
        t = *(uint32_t *)(obj + 0xc);
        t &= ~0xffu;
        *(uint32_t *)(obj + 0xc) = t;
        *(void **)obj = data_020b0b68;
        func_02087620((void *)(obj + 0x1c));
        vb = obj;
        t = vb[0x10];
        vb[0x10] = (uint8_t)(t & ~0xffu);
        t = vb[0x11];
        vb[0x11] = (uint8_t)(t & ~0xffu);
        t = vb[0x12];
        vb[0x12] = (uint8_t)(t & ~0xffu);
        *(uint32_t *)(obj + 0x14) = 0;
        *(void **)(obj + 0x18) = (void *)(obj + 0x14);
        *(void **)obj = data_020b0b7c;
        t = vb[0x11];
        vb[0x11] = (uint8_t)(t & ~0xffu);
    }
    t = obj[0x11];
    obj[0x11] = (uint8_t)((t & ~0xffu) | 1);
    n = func_02060ecc(p0, 2);
    func_02056bc0((void *)obj, n);
    n = func_02060f1c(p0, (void *)0x10, (void *)0, p1, p2, p3);
    func_02056bc0((void *)obj, n);
    return (void *)obj;
}
