#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void *func_0203b744(void);
extern void *func_020215f0(void);
extern void *func_0203bfe0(int x);
extern void *func_0203bfcc(int x);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_020215a4(int a, int b);
extern void *func_0203b708(int x);
extern void *func_0203bf7c(int x);

void func_ov007_0219ea28(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    void *q = *(void **)(p + 0xb8);

    if (q != 0 && *(int *)q == 1) {
        void *a = func_02056aec(p0);
        void *b = func_0203b744();
        void *c = func_020215f0();
        void *r7 = func_0203bfe0(0x1e);
        void *r4 = func_0203bfcc(0x1e);
        void *x = func_0203b6fc();
        func_02056bc0(x, r4);
        func_02056bc0(x, r7);
        void *r4b = func_020215a4(-1, 0x1e);
        void *y = func_0203b708(0x1e);
        uint8_t *o = p + 0x14;
        func_02056bc0(o, y);
        func_02056bc0(o, r4b);
        func_02056bc0(o, x);
        func_02056bc0(o, c);
        func_02056bc0(o, b);
        func_02056bc0(o, a);
    } else {
        void *a = func_02056aec(p0);
        void *x = func_0203bf7c(0x1e);
        void *y = func_0203b708(0x1e);
        uint8_t *o = p + 0x14;
        func_02056bc0(o, y);
        func_02056bc0(o, x);
        func_02056bc0(o, a);
    }
}
