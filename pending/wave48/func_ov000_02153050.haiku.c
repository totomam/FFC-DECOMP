#include "ffc/types.h"

typedef struct St {
    uint32_t a0;
    uint16_t st;
    uint16_t f6;
    uint16_t f8;
    uint16_t pa;
    void *pc;
    uint8_t p10;
    uint8_t p11;
    uint16_t pad12;
    uint32_t sub;
    uint8_t pad18[0x20];
} St;

typedef struct G {
    uint32_t a;
    St *s;
} G;

extern G data_ov000_0216e280;

extern void func_ov000_02152f94(void);
extern int func_ov000_02159014(int, int);
extern int func_ov000_021527cc(void);
extern int func_ov000_021497e0(void);
extern void func_ov000_021531a8(void);
extern void func_ov000_02152e44(void *, int, int, int);
extern void func_ov000_02152e80(void *);
extern void func_ov000_021539cc(void *, int);

int func_ov000_02153050(void)
{
    G *g = &data_ov000_0216e280;
    int r5;
    St *r6;

    St *s;
    s = g->s;
    if (s == 0) {
        return 0;
    }
    switch (s->sub) {
    case 0:
        func_ov000_02152f94();
        func_ov000_02159014(5, g->a);
        g->s->st = 7;
        g->s->sub = 4;
        return 7;
    case 1:
    case 4:
    case 5:
        return 2;
    case 2:
        return 7;
    case 3:
        return 5;
    default:
        break;
    }

    if (s->st == 1) {
        return 2;
    }
    r5 = func_ov000_021527cc();
    if (r5 == 5) {
        g->s->st = 4;
        g->s->f6 = 1;
        g->s->p11 = 1;
        return 4;
    }
    if (r5 >= 0) {
        return 2;
    }
    if (r5 >= -10) {
        g->s->p11 = 1;
        func_ov000_02159014(9, (int)0xffff3be9);
        g->s->st = 8;
        return 8;
    }
    if (r5 == (int)0xffff3a59 || r5 == (int)0xffff39f5) {
        g->s->p11 = 1;
        func_ov000_02159014(5, r5);
        g->s->st = 7;
        return 7;
    }
    r6 = g->s;
    if (r6->p11 == 0) {
        uint16_t sv = r6->f8;
        int t;
        uint8_t sp0;
        void *r7;
        int sp8;
        sp8 = func_ov000_021497e0();
        sp0 = g->s->p10;
        r7 = g->s->pc;
        g->a = r5;
        func_ov000_021531a8();
        func_ov000_02152e44(r6, sv, 1, (uint16_t)sp8);
        g->s->p10 = sp0;
        if (r7 != 0) {
            func_ov000_02152e80(r7);
        }
        func_ov000_021539cc((char *)g->s + 0x18, sv);
        g->s->sub = 1;
        g->s->a0 = 0;
        return 2;
    }
    if ((int)g->a < r5) {
        r5 = g->a;
    }
    func_ov000_02159014(5, r5);
    g->s->st = 7;
    return 7;
}
