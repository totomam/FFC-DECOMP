#include "ffc/types.h"

extern int func_ov000_02163a84(void);
extern void func_ov000_021609ac(void);
extern void func_ov000_021608b0(void);
extern void func_ov000_0216335c(int v);
extern uint8_t *func_ov000_02163350(void);
extern int func_ov000_0216384c(void);
extern void func_ov000_021639e0(void);
extern void func_ov000_02163384(int v);
extern void func_ov000_021619a0(void);
extern int func_ov000_0216378c(void *p);
extern void func_ov000_02163414(void *p);
extern int func_ov000_0215eb30(int a, uint32_t b, uint32_t c, uint16_t d, uint32_t *e, int f);
extern void func_ov000_02163780(void *p);
extern int func_ov000_0215fed0(int v);
extern void func_ov000_021607f4(void);
extern void func_ov001_02184030(uint32_t v);
extern uint32_t func_ov000_021599d0(uint32_t v);
extern void func_ov000_0215e0d8(int v);
extern int func_ov000_021619c8(void);
extern void func_ov000_021633cc(void);
extern void func_ov001_021867f8(uint32_t v);

typedef struct { uint32_t w[10]; } Blk40;

#define GP() (func_ov000_02163350())

void func_ov000_021605d8(int idx)
{
    uint32_t saved;
    int r5;
    int r6;
    int z;
    int n;
    uint8_t *p;
    uint8_t *r7;
    uint32_t s6;
    unsigned off;

    switch (idx) {
    case 0:
        if (func_ov000_02163a84()) {
            func_ov000_021609ac();
        } else {
            func_ov000_021608b0();
        }
        goto end;
    case 1:
        func_ov000_0216335c(1);
        if (GP()[0x14] == 3) {
            p = GP();
            *(uint32_t *)(p + 0x680) = *(uint32_t *)(GP() + 0x554);
        }
        goto end;
    case 2:
        func_ov000_0216335c(1);
        if (func_ov000_0216384c() == 1) {
            func_ov000_021639e0();
            goto end;
        }
        func_ov000_02163384(1);
        GP()[0x14] = 3;
        if (GP()[0x15] == 0 || GP()[0x15] == 1) {
            GP()[0x18] = 1;
            p = GP();
            *(uint32_t *)(p + 0x5dc) = *(uint32_t *)(GP() + 0x678);
        }
        func_ov000_021619a0();
        if (!func_ov000_02163a84()) goto end;
        goto main_block;
    case 3:
        goto c3;
    default:
        goto end;
    }

main_block:
    p = GP();
    off = 0x57c;
    if (func_ov000_0216378c(p + off)) {
        p = GP();
        {
            uint8_t *q = p + (off - 0x28);
            saved = *(uint32_t *)q;
            func_ov000_02163414(q);
        }
        {
            uint8_t *g5 = GP();
            Blk40 *src5 = (Blk40 *)(GP() + off);
            *(Blk40 *)(g5 + (off - 0x28)) = *src5;
        }
        {
            off = 0x554;
            uint8_t *g3 = GP() + off;
            r5 = func_ov000_0215eb30(9, *(uint32_t *)(g3), *(uint32_t *)(g3 + 4),
                                     *(uint16_t *)(g3 + 0xc), &saved, 1);
        }
        p = GP();
        off += 0x28;
        func_ov000_02163780(p + off);
        if (func_ov000_0215fed0(r5) != 0) return;
    }
    GP()[0x62f] = 1;
    goto end;

c3:
        GP()[0xd] = 1;
        func_ov000_021607f4();
        *(uint32_t *)(GP() + 0x798) = 0;
        func_ov001_02184030(*(uint32_t *)(GP() + 0x10));
        r6 = 1;
        if (*(uint32_t *)(GP() + 0x680) != 0) r6 = 0;
        r7 = GP();
        r5 = func_ov000_021599d0(*(uint32_t *)(GP() + 0x680));
        s6 = *(uint32_t *)(GP() + 0x774);
        z = 0;
        ((void (*)(int, int, int, int, int, uint32_t))*(uint32_t *)(r7 + 0x770))(0, 0, r6, 0, r5, s6);
        if (GP()[0x14] == 2) {
            func_ov000_0215e0d8(z - 1);
            if (func_ov000_021619c8() != 0) return;
            n = 0xd;
        } else {
            func_ov000_0215e0d8(2);
            n = 1;
        }
        func_ov000_0216335c(n);
        p = GP();
        *(uint32_t *)(p + 0x680) = 0;
        p = GP();
        p[0x62a] = 0;
        func_ov000_021633cc();
        goto end;
end:
    if (*(uint32_t *)(GP() + 0x5e0) != 0) {
        func_ov001_021867f8(*(uint32_t *)(GP() + 0x5e0));
        p = GP();
        *(uint32_t *)(p + 0x5f0) = 0;
        *(uint32_t *)(p + 0x5f4) = 0;
    }
}
