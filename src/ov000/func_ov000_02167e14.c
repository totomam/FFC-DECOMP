#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint8_t  flag;
} Iter;

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
} Cursor;

extern int func_ov000_02167b80(void *a);
extern void func_ov000_02165f7c(void *out, void *x, uint32_t y, int z);
extern int func_ov000_02165f84(void *it, void *x);
extern int func_ov000_02167f34(void *a, void *x);
extern int func_ov000_02167bcc(void *a, uint32_t p1, uint32_t p2);

int func_ov000_02167e14(void *a, uint32_t p1, uint32_t p2, void *p3, uint32_t p5)
{
    Cursor l;
    Iter s;

    if (func_ov000_02167b80(a) == 0) {
        return 0;
    }
    func_ov000_02165f7c(&l, p3, p5, 0);
    if (func_ov000_02165f84(&l, &s)) {
        do {
            s.flag = 0;
            if (func_ov000_02167f34(a, &s) == 0) {
                return 0;
            }
        } while (func_ov000_02165f84(&l, &s));
    }
    if (func_ov000_02167bcc(a, p1, p2) == 0) {
        return 0;
    }
    return 1;
}
