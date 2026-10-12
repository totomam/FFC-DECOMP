#include "ffc/types.h"

#define FLD(o) (*(uint32_t *)(self + (o)))
#define PP (*(uint32_t **)(self + 0xa0))

extern uint32_t func_ov004_021489d0(uint32_t a);
extern uint32_t func_ov004_0214968c(void);
extern uint32_t func_ov004_0214967c(void);
extern uint32_t func_ov004_02148324(void);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a, b; } S2;
extern uint32_t func_ov004_02155a98(uint32_t a, S2 b, uint32_t d);
extern uint32_t func_0203c2d0(void);
extern uint32_t func_02055054(uint32_t a);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern uint32_t func_020215a4(uint32_t a, uint32_t b);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_ov004_02145cf4(uint32_t a, void *b);
extern uint32_t func_0203b744(void);
extern uint32_t func_02056aec(uint32_t obj);
extern uint32_t func_020607b0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_02056b34(uint32_t obj);
extern uint32_t func_0203c058(uint32_t a);
extern uint32_t func_0203c044(uint32_t a);
extern uint32_t func_0203c0a8(uint32_t a);
extern uint32_t func_0203c094(uint32_t a);
extern uint32_t func_0203b6fc(void);

extern uint8_t data_0209e07c[];
extern uint32_t data_ov004_021596c4[];
extern uint32_t data_ov004_02159720[];
extern S2 data_ov004_02159d80;
extern uint32_t data_0213e098[];
extern S2 data_ov004_02159d88;

void func_ov004_02156454(uint8_t *self)
{
    uint32_t diff, n, off; void *p;
    uint32_t *src;
    uint32_t r, v, t1, t2, h6, s7, s8, s4c, sc, s10, s14, s18, obj, vtb;

    if (PP != 0) {
        func_ov004_021489d0(FLD(0xf8));
        PP[2] = func_ov004_0214968c();
        PP[1] = 0;
        if (PP[0] == 0x64 || data_0209e07c[0] != 0) {
            if (FLD(0xa4) == 0 && FLD(0xb0) != 0 && FLD(0xb0) != 4) {
                func_ov004_021489d0(FLD(0xf8));
                r = func_ov004_0214967c();
                if (r > FLD(0x224)) {
                    diff = r - FLD(0x224);
                    if (diff < data_ov004_021596c4[23]) {
                        src = &diff;
                    } else {
                        src = data_ov004_02159720;
                    }
                    PP[1] = *src;
                    PP[0] = PP[0] + PP[1];
                }
            }
        }
        if (FLD(0xa8) == 1) {
            PP[0] += 0x19;
        }
    }

    if (FLD(0x28c) == 0 && FLD(0xb0) != 1) {
        if (FLD(0x230) != 0) {
            r = func_ov004_02148324();
            func_02056bc0(self + 0x14, (void *)r);
        }
        v = func_ov004_02155a98(FLD(0xf4), data_ov004_02159d80, 0x25);
        func_02056bc0(self + 0x14, (void *)v);
    } else {
        h6 = func_0203c2d0();
        n = 0x1e;
        t1 = func_0209a978(n, func_02055054(data_0213e098[0]));
        n -= 0x1f;
        s8 = func_020215a4(n, t1);
        s4c = func_0205681c(0xa8);
        if (s4c != 0) {
            s4c = func_ov004_02145cf4(s4c, self);
        }
        sc = func_ov004_02155a98(FLD(0xf4), data_ov004_02159d88, 0x25);
        s10 = func_0203b744();
        off = 0x22c;
        s14 = func_02056aec(FLD(off));
        obj = FLD(off);
        vtb = *(uint32_t *)obj;
        t1 = ((uint32_t (*)(uint32_t))(*(uint32_t *)(vtb + 0x34)))(obj);
        s18 = func_020607b0(h6, t1, 0x1e, 0, 0);
        off += 8;
        s7 = func_02056b34(FLD(off));
        t2 = func_020607b0(h6, 0, 0x1e, 0, 0);
        p = self + 0x14;
        func_02056bc0(p, (void *)t2);
        func_02056bc0(p, (void *)s7);
        func_02056bc0(p, (void *)s18);
        func_02056bc0(p, (void *)s14);
        func_02056bc0(p, (void *)s10);
        func_02056bc0(p, (void *)sc);
        func_02056bc0(p, (void *)s4c);
        func_02056bc0(p, (void *)s8);
    }

    if (FLD(0xb0) != 4) {
        s7 = func_0203c058(0x3c);
        t1 = func_0203c044(0x3c);
    } else {
        s7 = func_0203c0a8(0x3c);
        t1 = func_0203c094(0x3c);
    }
    h6 = func_0203b6fc();
    func_02056bc0((void *)h6, (void *)t1);
    func_02056bc0((void *)h6, (void *)s7);
    func_02056bc0(self + 0x14, (void *)h6);
    func_02056bc0(self + 0x14, (void *)func_02056aec((uint32_t)self));
}
