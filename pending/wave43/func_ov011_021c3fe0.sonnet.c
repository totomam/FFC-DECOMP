#include "ffc/types.h"

extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203c1bc(void *a, void *b);
extern void *func_0203c1a4(void *a, void *b);
extern void *func_0203b6fc(void);
extern void *func_0203c15c(void *a, void *b);
extern void *func_0203c144(void *a, void *b);
extern void *func_0203b708(void *a);
extern void *data_0209de98;
extern void *data_0209de9c;

typedef struct { uint8_t pad[0x14]; uint8_t f14; uint8_t pad2[0x33]; uint8_t f48; uint8_t pad3[0xbb]; void *f104; uint8_t pad4[0xc2]; uint8_t f1ca; } X;

void func_ov011_021c3fe0(X *p)
{
    void *o, *t, *v, *r5, *r6;

    p->f104 = (void *)func_0203b6f0();
    func_02056bc0(&p->f48, p->f104);

    if (p->f1ca) {
        r5 = data_0209de98;
        r6 = data_0209de9c;
        v = func_0203c1bc(r6, r5);
        t = func_0203c1a4(r6, r5);
        o = func_0203b6fc();
        func_02056bc0(o, t);
        func_02056bc0(o, v);
    } else {
        r5 = data_0209de98;
        r6 = data_0209de9c;
        v = func_0203c15c(r6, r5);
        t = func_0203c144(r6, r5);
        o = func_0203b6fc();
        func_02056bc0(o, t);
        func_02056bc0(o, v);
    }
    func_02056bc0(p->f104, o);
    func_02056bc0(&p->f14, func_0203b708(r6));
}
