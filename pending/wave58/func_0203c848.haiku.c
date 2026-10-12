#include "ffc/types.h"

extern uint8_t *func_0203b75c(int x);
extern uint8_t *func_02052d90(uint32_t mar, uint32_t index);
extern void func_02005988(void *dst, const void *src);
extern void func_020095b8(void *dst, const void *src);
extern void func_0203943c(void *dst, void *a, void *b, void *c);
extern void func_0200b65c(void *dst, void *src);
extern void *func_020059cc(void *object);
extern void func_02050ea4(void *dst, void *src, int n);
extern void func_0203d578(void *dst, void *begin, void *end, uint32_t flag);
extern void func_02050ffc(void *dst, void *src, int n);
extern void *func_0205681c(uint32_t size);
extern uint8_t *func_02033338(void *obj, void *a, void *b, uint32_t flag);
extern void func_02033420(void *obj, void *a, void *b);
extern void *func_0200958c(void *object);
extern uint8_t data_0209e51c[];
extern uint8_t data_020aecc0[];
extern uint8_t data_020aecc8[];

uint8_t *func_0203c848(uint8_t *self, int idx) {
    uint32_t s_d4[3], s_c8[3], s_bc[3], s_b0[3], s_a4[3], s_98[3], s_8c[3], s_80[3];
    uint32_t s_74[3], s_68[3], s_5c[3], s_50[3], s_44[3], s_38[3], s_2c[3], s_20[3], s_14[3];
    volatile uint32_t pad[4];
    volatile uint8_t flag;
    int8_t v;
    int8_t *tab;
    uint8_t *p;
    uint8_t *e;
    uint8_t *r6;
    uint8_t *end;
    uint32_t *p4;
    uint32_t *p6;
    uint32_t *p7;
    int have;
    uint8_t *me = self;

    tab = (int8_t *)(data_0209e51c + 6 * *(int32_t *)(self + 0x8c));
    v = tab[idx];
    if (v == -1) {
        return func_0203b75c(1);
    }

    p = func_02052d90(*(uint32_t *)(self + 0xac), *(uint32_t *)(self + 0xb0));
    e = p + ((int32_t *)(p + *(int32_t *)(p + 8)))[v];
    func_02005988(s_d4, e + *(int32_t *)(e + 4));

    p4 = s_a4;
    p6 = s_98;
    p7 = s_8c;
    func_020095b8(p4, s_d4);
    func_02005988(p6, data_020aecc0);
    func_020095b8(p7, me + 0xb8);
    func_0203943c(s_80, p4, p6, p7);
    func_0200b65c(s_d4, s_80);
    func_020059cc(s_80);
    func_020059cc(p7);
    func_020059cc(p6);
    func_020059cc(p4);

    p4 = s_74;
    p6 = s_68;
    p7 = s_5c;
    func_020095b8(p4, s_d4);
    func_02005988(p6, data_020aecc8);
    func_020095b8(p7, me + 0xc4);
    func_0203943c(s_50, p4, p6, p7);
    func_0200b65c(s_d4, s_50);
    func_020059cc(s_50);
    func_020059cc(p7);
    func_020059cc(p6);
    func_020059cc(p4);

    p4 = s_44;
    p6 = s_c8;
    func_020095b8(p4, s_d4);
    func_02050ea4(p6, p4, 10);
    func_020059cc(p4);

    end = (uint8_t *)p6[0] + p6[1] * 12;
    func_020095b8(s_bc, end - 0x18);
    func_020095b8(s_b0, end - 0x24);
    flag = 0;
    pad[0] = 0;
    func_0203d578(p6, end - 0x18, end, flag);

    p4 = s_38;
    func_02050ffc(p4, p6, 10);
    func_0200b65c(s_d4, p4);
    func_020059cc(p4);

    have = 0;
    r6 = func_0205681c(0xb8);
    if (r6 != 0) {
        have = 1;
        func_020095b8(s_2c, s_d4);
        r6 = func_02033338(r6, s_2c, me + 0xd0, flag);
    }
    if (have) {
        func_020059cc(s_2c);
    }

    func_020095b8(s_20, s_bc);
    func_020095b8(s_14, s_b0);
    func_02033420(r6, s_20, s_14);
    func_020059cc(s_14);
    func_020059cc(s_20);
    func_020059cc(s_b0);
    func_020059cc(s_bc);
    func_0200958c(p6);
    func_020059cc(s_d4);
    return r6;
}
