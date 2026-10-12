#include "ffc/types.h"

typedef struct Ent {
    int32_t state;
    int32_t f4;
    void *f8;
    uint16_t f12;
    uint16_t f14;
    void *f16;
    int32_t f20;
    int32_t counter;
    void *f1c;
    int32_t f24b;
    int32_t f24;
    int32_t f28;
    uint8_t sub[8];
    int32_t f34;
    uint8_t mid[0x14];
    struct Ent *next;
} Ent;

extern int32_t func_ov000_021652a8(int32_t a, int32_t b, int32_t c, void *d, int32_t e);
extern int32_t func_ov001_0217c220(void *a, void *b);
extern void func_ov000_02166b94(void *a, uint32_t b, int32_t *c);
extern int32_t func_ov001_0217c8f0(void *a, void *b, void **c);
extern void func_ov001_0217ef6c(void *a, void *b);
extern void func_ov001_02178324(void *a, void *b, void *c);
extern void func_ov001_02178340(void *a, void *b, int32_t c);
extern void func_ov000_021653f4(void *a);
extern int32_t func_ov001_0217cb40(void *a);
extern void func_ov001_0217c9e8(void *a, void *b);
extern char *func_02092b00(void *a, void *b);
extern int32_t func_02092a04(void *a, void *b, uint32_t n);
extern int32_t func_ov001_0217c1e8(void *a, void *b);
extern int32_t func_ov001_0217870c(void *a, void *b, uint32_t c, void *d, int32_t *e, int32_t f);

extern uint8_t data_ov001_02190f2c[];
extern uint8_t data_ov001_02190f58[];
extern uint8_t data_ov001_02190f74[];
extern uint8_t data_ov001_02190f7c[];
extern uint8_t data_ov001_02190f84[];
extern uint8_t data_ov001_02190f8c[];
extern uint8_t data_ov001_02190f94[];
extern uint8_t data_ov001_02190f9c[];
extern uint8_t data_ov001_02190fa4[];
extern uint8_t data_ov001_02190fc8[];
extern uint8_t data_ov001_02190fd0[];

int32_t func_ov001_0217b8f0(void *a, void *bp)
{
    Ent *b = (Ent *)bp;
    uint8_t *base = *(uint8_t **)a;
    int32_t l14;
    void *l10;
    int32_t l0c;
    int32_t r;
    int32_t found;
    Ent *cand;
    char *s = 0;
    int32_t off = 0x1a0;

    if (b == 0) {
        return 3;
    }
    if (b->state == 0x6a || b->state == 0x64) {
        return 3;
    }
    switch (b->state) {
    case 0x65: goto L01bc;
    case 0x66: goto c40;
    case 0x67: goto c5e;
    case 0x68: goto c14a;
    default: goto L01bc;
    }

c40:
    func_ov000_021652a8(1, 3, 0x1f, data_ov001_02190f2c, b->f16);
    r = func_ov001_0217c220(a, b);
    if (r != 0) {
        return r;
    }
    goto L01bc;

c5e:
    func_ov000_02166b94(b->f8, b->f12, &l0c);
    if (l0c != 1) {
        goto L01bc;
    }
    goto L0070;

L0070:
    found = 1;
    r = func_ov001_0217c8f0(a, b->f16, &l10);
    if (r == 0) {
        func_ov001_0217ef6c(a, data_ov001_02190f58);
        return 3;
    }
    func_ov001_02178324(a, b->sub, data_ov001_02190f74);
    func_ov001_02178324(a, b->sub, data_ov001_02190f7c);
    func_ov001_02178340(a, b->sub, *(int32_t *)(base + off));
    off -= 0x90;
    func_ov001_02178324(a, b->sub, data_ov001_02190f84);
    func_ov001_02178324(a, b->sub, base + off);
    func_ov001_02178324(a, b->sub, data_ov001_02190f8c);
    func_ov001_02178324(a, b->sub, (void *)((Ent *)l10)->f1c);
    func_ov001_02178324(a, b->sub, data_ov001_02190f94);

    cand = *(Ent **)(base + 0x5d8);
    if (cand != 0) {
        do {
            if (cand->f16 == b->f16) {
                if (cand != b) {
                    if (cand->state <= 0x67) {
                        found = 0;
                    }
                }
            }
            cand = cand->next;
        } while (cand != 0);
    }
    if (found != 0) {
        func_ov000_021653f4(((Ent *)l10)->f1c);
        ((Ent *)l10)->f1c = 0;
        if (func_ov001_0217cb40(l10) != 0) {
            func_ov001_0217c9e8(a, l10);
        }
    }
    b->state = 0x68;
    goto L01bc;

c14a:
    if (b->f1c != 0) {
        s = func_02092b00(b->f1c, data_ov001_02190f94);
    }
    if (s == 0) {
        goto L01bc;
    }
    *s = 0;
    {
        void *p = b->f1c;
        if (func_02092a04(p, data_ov001_02190f9c, 7) == 0) {
            b->counter = b->counter + 1;
            if (b->counter > 1) {
                func_ov001_0217ef6c(a, data_ov001_02190fa4);
                return 3;
            }
            r = func_ov001_0217c1e8(a, b);
            if (r != 0) {
                return r;
            }
        } else if (func_02092a04(p, data_ov001_02190fc8, 6) != 0) {
            func_ov001_0217ef6c(a, data_ov001_02190fd0);
            return 3;
        }
    }

L01b4:
    b->state = 0x69;
    b->f24 = 0;

L01bc:
    if (b->f34 > 0) {
        r = func_ov001_0217870c(a, b->f8, b->f12, b->sub, &l14, 1);
        if (l14 != 0 || r != 0) {
            b->state = 0x6a;
        }
    }
    return 0;
}
