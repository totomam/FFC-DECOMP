#include "ffc/types.h"

extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203c1bc(void *a, void *b);
extern void *func_0203c1a4(void *a, void *b);
extern void *func_0203b6fc(void);
extern uint32_t func_0203c15c(void *a, void *b);
extern void *func_0203c144(void *a, void *b);
extern uint32_t func_0203b708(void *a);
extern void *data_0209de98;
extern void *data_0209de9c;

void func_ov011_021c3fe0(uint8_t *p)
{
    uint32_t a;
    void *r5;
    void *r6;
    void *t;
    void *o;
    uint32_t v1;
    uint32_t v2;
    uint32_t u;

    a = func_0203b6f0();
    *(uint32_t *)(p + 0x104) = a;
    func_02056bc0(p + 0x48, (void *)a);

    if (p[0x1ca]) {
        r5 = data_0209de98;
        r6 = data_0209de9c;
        v1 = func_0203c1bc(r6, r5);
        t = func_0203c1a4(r6, r5);
        o = func_0203b6fc();
        func_02056bc0(o, t);
        func_02056bc0(o, (void *)v1);
    } else {
        r5 = data_0209de98;
        r6 = data_0209de9c;
        v2 = func_0203c15c(r6, r5);
        t = func_0203c144(r6, r5);
        o = func_0203b6fc();
        func_02056bc0(o, t);
        func_02056bc0(o, (void *)v2);
    }
    func_02056bc0((void *)*(uint32_t *)(p + 0x104), o);
    u = func_0203b708(r6);
    func_02056bc0(p + 0x14, (void *)u);
}
