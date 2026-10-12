#include "ffc/types.h"

extern uint32_t func_ov002_021a16d4(const void *object);
extern void *func_ov002_02195fa4(void);
extern void *func_ov002_02198700(void *a, void *p);
extern void *func_0203b6fc(void);
extern void *func_0203bd04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov002_021ab270(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);

typedef struct S {
    uint32_t w0;
    uint32_t w4;
    void *p8;
    uint32_t wc;
    uint32_t mode;
    uint32_t w14;
    uint32_t flag;
} S;

void func_ov002_021a945c(void *a, S *b)
{
    uint32_t r6;
    uint32_t r7;
    void *x;
    void *obj;
    void *n;
    void *res;

    func_ov002_021a16d4(a);
    x = func_ov002_02198700(func_ov002_02195fa4(), b->p8);
    r7 = 1;
    if (b->flag == 0) {
        r7 = 0;
    }

    switch (b->mode) {
    case 5:
    case 7:
        r6 = 1;
        break;
    case 3:
    case 4:
        r6 = 8;
        break;
    case 6:
        r6 = 6;
        break;
    default:
        r6 = *(volatile uint32_t *)&b->mode;
        break;
    }

    obj = func_0203b6fc();
    n = func_0203bd04(0x1010f, 0, 0, 1);
    func_02056bc0(obj, n);
    if (n != 0) {
        n = (char *)n + 0x14;
    }
    res = func_ov002_021ab270(x, n, b->flag, r6, r7);
    func_02056bc0(obj, res);
    func_02056bc0((char *)a + 0x14, obj);
}
