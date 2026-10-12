#include "ffc/types.h"

extern uint32_t *func_0204de50(uint32_t *a);
extern uint32_t *func_0204de70(uint32_t *a);
extern uint32_t **func_0204de78(uint32_t *a);
extern uint32_t *func_0204de80(uint32_t *a);
extern uint32_t *func_0204dc5c(uint32_t *a, uint32_t *b);
extern int32_t func_0204a9b8(uint32_t *a, uint32_t *b);
extern void func_0204b0ac(uint32_t *a, uint32_t v);
extern void func_0204dec8(uint32_t *a);
extern void func_0204b098(uint32_t *a);
extern void func_0204ded0(uint32_t *a);
extern void func_0204bb90(uint32_t *a, uint32_t *b);
extern void func_0204ddac(uint32_t *a, uint32_t *b);
extern void func_0204db7c(uint32_t *a);
extern uint32_t *func_0204dffc(uint32_t *a);

uint32_t *func_0204cae4(uint32_t *p)
{
    uint32_t *a = func_0204de50(p);
    uint32_t *b = func_0204de70(a);
    uint32_t **e = func_0204de78(a);
    uint32_t *d = func_0204de80(a);
    uint32_t *x = (uint32_t *)(*e)[3];
    uint32_t *r6 = (uint32_t *)x[11];
    uint32_t *r4 = func_0204dc5c(d, x);
    uint32_t off;

    if (x[0] != 0) {
        *(uint32_t *)((char *)p + 0x330) = 8;
        *(uint32_t *)((char *)p + 0x338) = 0;
    }
    off = 0x338;
    if (*(uint32_t *)((char *)p + off) == 0) {
        if ((int32_t)b[3] >= 0) {
            if (func_0204a9b8(d, x) < 0) {
                off -= 8;
                *(uint32_t *)((char *)p + off) = 10;
            }
            b[3] = 0xffffffff;
        }
    }
    if (*(uint32_t *)((char *)p + 0x330) == 0) {
        r6[4] = 1;
    } else {
        r6[4] = 0;
        func_0204b0ac(b, *(uint32_t *)((char *)p + 0x330));
        if (r6[10] == (uint32_t)((char *)p + 0x104)) {
            r6[10] = 0;
            r6[7] = 0;
        }
    }
    if (r4 != 0) {
        r4[1] = *(uint32_t *)((char *)p + 0x330);
    }
    func_0204dec8(d);
    func_0204b098(*e);
    *e = 0;
    func_0204ded0(d);
    func_0204bb90(d, x);
    if (r4 != 0 && r6[4] != 0) {
        r4[0] = 5;
    }
    func_0204ddac(d, r4);
    if (r4 != 0) {
        func_0204db7c(r4);
    }
    return func_0204dffc(r4);
}
