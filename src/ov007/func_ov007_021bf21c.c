#include "ffc/types.h"

extern uint32_t data_ov007_021c9bac[];
extern uint8_t data_ov007_021c867c[];
extern uint32_t data_ov007_021c9bb0[];
extern uint8_t data_ov007_021c869c[];

extern int func_ov000_0215aad0(uint32_t *out);
extern void func_ov007_021bf91c(uint32_t id, void *fmt, ...);
extern uint32_t func_ov007_021bfd94(uint32_t a, uint32_t b);
extern void func_ov000_02159014(uint32_t a, uint32_t b);
extern void func_ov000_02164ee8(void);
extern uint32_t *func_ov007_021c00c0(uint32_t *p);
extern void func_ov007_021bf9f4(void);
extern uint32_t func_ov007_021bfda4(uint32_t *p);
extern void func_ov007_021c0108(uint32_t a, void *b, uint32_t c, void *d);
extern void func_ov007_021c0128(uint32_t a, uint32_t b, uint32_t *c);
extern void func_ov007_021bff3c(uint32_t a);
extern void func_ov007_021c002c(uint32_t a);

uint32_t func_ov007_021bf21c(uint32_t p0, uint32_t *p1, uint32_t p2)
{
    uint32_t p2l;
    uint32_t local[7];
    uint32_t *r6;

    p2l = p2;
    if (data_ov007_021c9bac[2] != 0) {
        return 0x12;
    }
    if (func_ov000_0215aad0(local) == 0) {
        func_ov007_021bf91c(0x11a, data_ov007_021c867c);
        func_ov000_02159014(8, func_ov007_021bfd94(1, 4));
        return 4;
    }
    func_ov000_02164ee8();
    r6 = func_ov007_021c00c0(data_ov007_021c9bb0);
    if (r6 != 0) {
        func_ov007_021bf91c(0x127, data_ov007_021c869c, r6);
        func_ov007_021bf9f4();
        return func_ov007_021bfda4(r6);
    }
    func_ov007_021c0108(data_ov007_021c9bac[1], (void *)0x02194c74, p0, (void *)0x02194d74);
    func_ov007_021c0128(data_ov007_021c9bac[1], p1[7], local);
    func_ov007_021bff3c(p2l);
    func_ov007_021c002c(0);
    data_ov007_021c9bac[2] = 1;
    data_ov007_021c9bac[4] = 0;
    data_ov007_021c9bac[3] = 0;
    data_ov007_021c9bac[5] = 0;
    return 0;
}
