#include "ffc/types.h"

extern uint32_t func_0208d770(void);
extern uint32_t func_02088978(void);
extern void func_020849e0(uint32_t a, uint32_t b, uint32_t c);
extern void func_020849ac(uint32_t a, uint32_t b, uint32_t c);
extern void func_02084ca4(void *a, uint32_t b, uint32_t c);
extern uint32_t func_ov006_0219c1dc(void);
extern void func_0208898c(uint32_t a);

typedef struct G1 {
    uint16_t a;
    uint8_t pad[10];
    uint32_t p0c;
    uint32_t p10;
} G1;

typedef struct B8 {
    uint16_t w0;
    uint16_t w2;
    uint16_t w4;
    uint16_t w6;
    uint32_t w8;
    uint16_t *cur;
} B8;

extern G1 data_ov006_021ba150;
extern B8 data_ov006_021b8af0;

#define AT(T, base, off) (*(T *)((uint8_t *)(base) + (off)))

int func_ov006_0219c210(uint32_t a, uint8_t *b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t r6, r7, h;
    int i;
    uint16_t *out;
    uint16_t w;
    uint16_t *cur;

    if (data_ov006_021ba150.p10 != 0 && AT(uint16_t, data_ov006_021ba150.p10, 0x1316) != 0) {
        return 2;
    }

    r6 = (a + 0x1f) & ~0x1fu;
    r7 = (r6 + 0x1e1f) & ~0x1fu;
    if (d == 0x10000) {
        d = func_0208d770();
    }
    h = func_02088978();

    data_ov006_021b8af0.w4 = 0xffff;
    data_ov006_021b8af0.w6 = 5;
    data_ov006_021b8af0.w2 = 0x28;
    data_ov006_021b8af0.w0 = 0x28;
    data_ov006_021b8af0.w8 = 1;

    data_ov006_021ba150.a = e;
    data_ov006_021ba150.p0c = r6;
    data_ov006_021ba150.p10 = r7;

    func_020849e0(0, r6, 0x1e00);
    func_020849ac(0, r7, 0x1340);

    out = (uint16_t *)(r6 + 0x530);
    for (i = 0; i < b[1]; i++) {
        *out++ = ((uint16_t *)b)[i + 1];
    }

    out = (uint16_t *)(r6 + 0x538);
    cur = data_ov006_021b8af0.cur;
    w = 0;
    for (i = 0; i < 16; i++) {
        w = *cur;
        if (w == 0) {
            break;
        }
        cur++;
        *out = w;
        out++;
        data_ov006_021b8af0.cur = cur;
    }

    func_02084ca4(b, r7 + 0x1300, 0x16);

    if (b[1] < 10) {
        AT(uint16_t, r7 + 2 * b[1], 0x1302) = 0;
    }

    AT(uint16_t, r6, 0x500) = 0x100;
    AT(uint16_t, r6, 0x502) = 8;
    AT(uint16_t, r6, 0x518) = 0;
    AT(uint16_t, r6, 0x51a) = 0;
    AT(uint16_t, r6, 0x52c) = 1;
    AT(uint32_t, r6, 0x504) = r7 + 0x400;
    AT(uint16_t, r6, 0xe) = 0;
    AT(uint16_t, r6, 0x12) = 0;
    AT(uint16_t, r6, 0x16) = 1;
    AT(uint16_t, r6, 0x14) = 0;
    AT(uint32_t, r6, 8) = c;
    AT(uint16_t, r6, 0xc) = d;

    AT(uint16_t, r6, 0x18) = func_ov006_0219c1dc() + 0xc8;
    AT(uint16_t, r6, 0x10) = 0xf;
    AT(uint8_t, r6, 0x50c) = 0;
    AT(uint8_t, r6, 0x50d) = 0;

    AT(uint16_t, r7, 0x1316) = 1;
    AT(uint32_t, r7, 0x131c) = 0;

    func_0208898c(h);
    return 0;
}
