#include "ffc/types.h"

extern uint8_t *func_0203b75c(int x);
extern uint8_t *func_02052d90(uint32_t mar, uint32_t index);
extern void func_02005988(void *dst, const void *src);
extern void func_020095b8(void *dst, const void *src);
extern void func_0203943c(void *dst, void *a, void *b, void *c);
extern void func_0200b65c(void *dst, void *src);
extern void *func_020059cc(void *object);
extern void func_02050ea4(void *dst, void *src, int n);
typedef struct { uint8_t b; } F;
extern void func_0203d578(void *dst, void *begin, void *end, F flag);
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
    F fl; volatile uint8_t flagv[20];
    int8_t v;
    int8_t *tab;
    uint8_t *p;
    uint8_t *e;
    uint8_t *r6;
    uint8_t *end;
    uint32_t *p4;
    uint32_t *p7;
    int have;
    uint8_t *me;

    tab = (int8_t *)(data_0209e51c + 6 * *(int32_t *)(self + 0x8c));
    v = tab[idx];
    if (v == -1) {
        return func_0203b75c(1);
    }

    p = func_02052d90(*(uint32_t *)(self + 0xac), *(uint32_t *)(self + 0xb0));
    e = p + ((int32_t *)(p + *(int32_t *)(p + 8)))[v];
    func_02005988(s_d4, e + *(int32_t *)(e + 4));

    func_020095b8(s_a4, s_d4);
    func_02005988(s_98, data_020aecc0);
    func_020095b8(s_8c, self + 0xb8);
    func_0203943c(s_80, s_a4, s_98, s_8c);
    func_0200b65c(s_d4, s_80);
    func_020059cc(s_80);
    func_020059cc(s_8c);
    func_020059cc(s_98);
    func_020059cc(s_a4);

    func_020095b8(s_74, s_d4);
    func_02005988(s_68, data_020aecc8);
    func_020095b8(s_5c, self + 0xc4);
    func_0203943c(s_50, s_74, s_68, s_5c);
    func_0200b65c(s_d4, s_50);
    func_020059cc(s_50);
    func_020059cc(s_5c);
    func_020059cc(s_68);
    func_020059cc(s_74);

    uint32_t *p6 = s_c8;
    func_020095b8(s_44, s_d4);
    func_02050ea4(p6, s_44, 10);
    func_020059cc(s_44);

#define END ({ int n_ = ((volatile uint32_t *)s_c8)[1]; uint8_t *b_ = (uint8_t *)((volatile uint32_t *)s_c8)[0]; b_ + n_ * 12; })
    func_020095b8(s_bc, END - 0x18);
    func_020095b8(s_b0, END - 0xc);
    fl.b = 0;
    e = END;
    func_0203d578(p6, e - 0x18, e, fl);

    func_02050ffc(s_38, p6, 10);
    func_0200b65c(s_d4, s_38);
    func_020059cc(s_38);

    have = 0;
    r6 = func_0205681c(0xb8);
    if (r6 != 0) {
        have = 1;
        func_020095b8(s_2c, s_d4);
        r6 = func_02033338(r6, s_2c, self + 0xd0, 0);
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
    func_0200958c(s_c8);
    func_020059cc(s_d4);
    return r6;
}
