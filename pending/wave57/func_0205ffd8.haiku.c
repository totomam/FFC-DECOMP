#include "ffc/types.h"

extern uint32_t func_02056830(uint32_t size);
extern void func_0204f230(uint32_t a, uint32_t mode);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_0205fb78(uint32_t obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint32_t func_0205833c(uint32_t obj, uint32_t a, uint32_t b);
extern uint32_t func_0205fe8c(uint32_t obj, uint32_t a, uint32_t b);
extern uint32_t func_0205ff48(uint32_t obj, uint32_t a, uint32_t b);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
} S;

S *func_0205ffd8(S *p, uint32_t a, uint32_t b, uint32_t c, uint32_t x, uint32_t d, uint32_t e, uint32_t f)
{
    uint32_t n = 1;
    uint32_t q;
    uint32_t mode;
    uint32_t obj;

    p->f4 = a;
    p->f20 = b;
    p->f1c = func_02056830(1 << 10);
    q = x >> 5;
    if (q > (n << 10)) {
        n = q >> 10;
    }
    switch (n) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
    case 7:
    case 8:
    default:
        mode = 0;
        break;
    case 3:
        mode = 1;
        break;
    case 5:
        mode = 2;
        break;
    case 9:
        mode = 3;
        break;
    }
    func_0204f230(p->f4, mode);
    obj = func_0205681c(0x50);
    if (obj != 0) {
        obj = func_0205fb78(obj, p->f4, 0, c, c, 0, q, n);
    }
    p->f8 = obj;
    obj = func_0205681c(0x4c);
    if (obj != 0) {
        obj = func_0205833c(obj, e, 0);
    }
    p->fc = obj;
    obj = func_0205681c(0x3c);
    if (obj != 0) {
        obj = func_0205fe8c(obj, p->f1c, 1 << 10);
    }
    p->f14 = obj;
    obj = func_0205681c(0x3c);
    if (obj != 0) {
        obj = func_0205ff48(obj, p->f1c, 1 << 10);
    }
    p->f18 = obj;
    if (d != 0) {
        obj = func_0205681c(0x4c);
        if (obj != 0) {
            obj = func_0205833c(obj, d, f);
        }
        p->f10 = obj;
    } else {
        p->f10 = 0;
    }
    return p;
}
