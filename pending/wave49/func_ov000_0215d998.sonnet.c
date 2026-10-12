#include "ffc/types.h"

extern void *func_ov000_02163350(void);
extern int func_ov000_0216384c(void);
extern int func_ov000_0216335c(int);
extern int func_ov000_021639e0(void);
extern int func_ov000_021604bc(uint32_t);
extern void func_ov000_0215d974(void *, int);
extern uint32_t func_ov001_021821ac(uint32_t, uint32_t, uint32_t);
extern int func_ov001_02180638(uint32_t, uint32_t, uint32_t, void *, int, int, uint32_t, uint32_t);
extern int func_ov000_02161b88(void);
extern uint32_t func_ov000_0215b6f0(void);
extern int func_ov000_0215dbd8(int, int);
extern void *func_ov000_0215b730(void);
extern uint8_t *func_ov000_0215b76c(uint32_t);
extern void func_ov000_02164400(int);
extern void func_ov001_0218083c(uint32_t, void *);
extern int func_ov000_021605d8(int);

#define GB() ((uint8_t *)func_ov000_02163350())
#define LD32(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define LD16(p, o) (*(uint16_t *)((uint8_t *)(p) + (o)))
#define LD8(p, o) (*(uint8_t *)((uint8_t *)(p) + (o)))

void func_ov000_0215d998(uint32_t p0, uint32_t p1)
{
    uint8_t buf[0x18];
    uint8_t *r4, *r6, *r2;
    uint32_t r5;
    uint32_t r7;
    int ret;

    if (GB() != 0) {
        if (LD32(GB(), 0x61c) == 6 || LD32(GB(), 0x61c) == 0xf) goto L32;
    }
    if (LD32(GB(), 0x5a8) != 0xf) return;
L32:
    if (p1 != 0) {
        if (func_ov000_0216384c() == 1) {
            { func_ov000_0216335c(1); return; }
        }
        if (LD32(GB(), 0x5a8) == 0xf) {
            { func_ov000_021639e0(); return; }
        }
        if (p1 == 5) return;
        if (p1 == 6) {
            GB()[0xc]++;
            if (GB()[0xc] > 5) {
                GB()[0xc] = 0;
                { func_ov000_021604bc(LD32(GB(), 0x554)); return; }
            }
            func_ov000_0215d974(buf, 0x18);
            r4 = GB();
            r6 = GB();
            r2 = GB();
            ret = func_ov001_021821ac(LD32(r6, 0x564), LD16(r2, 0x568), 0);
            r7 = (uint32_t)ret;
            ret = func_ov001_02180638(*(uint32_t *)LD32(r4, 4), 0, r7, buf, -1, 0x1388, LD32(GB(), 8), 0);
            if (ret == 1) { func_ov000_02161b88(); return; }
            if (ret == 0) return;
        }
        { func_ov000_021604bc(LD32(GB(), 0x554)); return; }
    }
    r5 = func_ov000_0215b6f0();
    if (r5 == 0xffffffff) {
        { func_ov000_0215dbd8(6, (int)0xfffeabc4); return; }
    }
    r7 = (uint32_t)func_ov000_0215b730();
    r4 = func_ov000_0215b76c(r5);
    *(uint32_t *)r7 = p0;
    LD8(r4, 0) = (uint8_t)r5;
    if (LD32(GB(), 0x5a8) == 0xf) {
        LD8(r4, 1) = LD8(GB(), 0x5c2);
        LD32(r4, 4) = LD32(GB(), 0x5ac);
    } else {
        LD8(r4, 1) = LD8(GB(), 0x56a);
        LD32(r4, 4) = LD32(GB(), 0x554);
    }
    func_ov000_02164400(LD8(r4, 1));
    func_ov001_0218083c(p0, r4);
    if (LD32(GB(), 0x61c) == 0xf) {
        { func_ov000_021605d8(0); return; }
    }
    if (LD32(GB(), 0x5a8) == 0xf) {
        { func_ov000_021605d8(0); return; }
    }
    { func_ov000_021605d8(1); return; }
}
