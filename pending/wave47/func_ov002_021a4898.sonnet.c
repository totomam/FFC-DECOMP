#include "ffc/types.h"

typedef struct Node {
    void *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint8_t f10;
} Node;

extern void *func_0203b688(void);
extern void *func_0205681c(uint32_t size);
extern void *func_02055a2c(void *a);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov002_021a0ce4(void *p, void *x, int y);
extern void *func_0203b6fc(void);
extern void *func_0203bd04(uint32_t a, int b, int c, int d);
extern int func_ov002_021a38f4(void *a);
extern void *func_02021610(uint32_t a, int b);
extern void *func_ov002_021ab244(void *a, int b, void *c);
extern void *data_020ac398;

void *func_ov002_021a4898(void *a, void *b, void *c)
{
    void *r4;
    void *r5;
    void *r6;
    void *t;

    r4 = func_0203b688();
    t = func_0205681c(0x14);
    if (t != 0) {
        ((Node *)t)->f8 = 0;
        ((Node *)t)->fc = 0x1015a;
        ((Node *)t)->vt = &data_020ac398;
        ((Node *)t)->f10 = 1;
    }
    t = func_02055a2c(b);
    func_02056bc0(r4, t);

    t = func_0205681c(0x1c);
    if (t != 0) {
        t = func_ov002_021a0ce4(t, c, 1);
    }
    func_02056bc0(r4, t);

    r6 = func_0203b6fc();
    r5 = func_0203bd04(0x100fe, 0, 0, 1);
    func_02056bc0(r6, r5);

    if (func_ov002_021a38f4(a) != 1) {
        t = func_02021610(0x427, 0);
        func_02056bc0(r6, t);
    }
    if (r5 != 0) {
        r5 = (char *)r5 + 0x14;
    }
    t = func_ov002_021ab244(c, 1, r5);
    func_02056bc0(r6, t);

    func_02056bc0(r4, r6);

    t = func_0205681c(0x14);
    if (t != 0) {
        ((Node *)t)->f8 = 0;
        ((Node *)t)->fc = 0x1015a;
        ((Node *)t)->vt = &data_020ac398;
        ((Node *)t)->f10 = 0;
    }
    t = func_02055a2c(b);
    func_02056bc0(r4, t);

    return r4;
}
