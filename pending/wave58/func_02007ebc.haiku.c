#include "ffc/types.h"

typedef struct { uint32_t w0; uint32_t w1; } Rec;

extern uint32_t *func_02008358(int16_t id, int32_t p);
extern void func_020069dc(int32_t a, int32_t b, int32_t p);
extern void func_020069f4(int32_t v);
extern void func_020069b0(int32_t a, int32_t b, int32_t p);
extern void func_02006a04(int32_t v);
extern void func_02006a14(int32_t v);
extern void func_02006a24(int32_t v);
extern void func_02006a44(int32_t a, int32_t b, int32_t c, int32_t p);
extern int32_t func_02006bfc(void);
extern int32_t func_02006c24(void);
extern void func_02006bec(int32_t v);
extern int32_t func_02006aa4(int32_t a, int32_t b, int32_t p);
extern void func_02006ce8(void);
extern void func_02006b0c(int32_t a, int32_t b);
extern int32_t func_02006abc(int32_t a, int32_t b, int32_t p, int32_t f, int32_t g);
extern void func_02006a78(int32_t a, int32_t b, int32_t p);
extern void func_02006b30(int32_t a, int32_t b, int32_t p);
extern void func_02006b60(int32_t a, int32_t b);
extern void func_02006b8c(int32_t a, int32_t b, int32_t p);
extern int32_t func_02006b20(void);
extern void func_02006ae0(int32_t v);
extern void func_02006bd4(int32_t a, int32_t b, int32_t p);
extern void func_02006c0c(int32_t a, int32_t b, int32_t p);

#define FA(w) ((int32_t)((w) << 23) >> 23)
#define FB(w) ((int32_t)((w) << 12) >> 21)
#define FL8(w) ((int32_t)((w) << 24) >> 24)
#define FH8(w) ((int32_t)(w) >> 24)
#define FM16(w) (((w) << 8) >> 16)
#define FT(w) (((w) << 8) >> 28)

void func_02007ebc(int32_t id, int32_t p) {
    Rec *o = (Rec *)func_02008358((int16_t)id, p);
    if (o == 0) return;
    volatile Rec *vo = (volatile Rec *)o;
    switch (FT(vo->w0)) {
    case 2:
        func_020069dc(FA(o->w0), FB(o->w0), p);
    case 0:
        func_020069f4(0x7f);
        func_020069b0(FA(o->w0), FB(o->w0), p);
        return;
    case 1:
        func_020069f4(0x7f);
        func_02006a04(FL8(o->w1));
        func_02006a14(FM16(o->w1));
        func_02006a24(FH8(o->w1));
        func_020069b0(FA(o->w0), FB(o->w0), p);
        return;
    case 3:
        func_020069f4(0x7f);
        func_02006a44(FA(o->w0), FB(o->w0), FL8(o->w1), p);
        return;
    case 4:
        func_020069dc(FA(o->w0), FB(o->w0), p);
        func_020069f4(0x7f);
        func_020069b0(FA(o->w0), FB(o->w0), p);
        return;
    case 5:
        if (func_02006bfc() != 0 || func_02006c24() != 0) func_02006bec(0);
        if (func_02006aa4(FA(o->w0), FB(o->w0), p) == 0) {
            if (FL8(o->w1) >= 0) {
                func_02006ce8();
                func_02006aa4(FA(o->w0), FB(o->w0), p);
            }
        }
        func_02006b0c(0x7f, 0);
        return;
    case 6:
        if (func_02006bfc() != 0 || func_02006c24() != 0) func_02006bec(0);
        if (func_02006abc(FA(o->w0), FB(o->w0), p, FM16(o->w1), FH8(o->w1)) == 0) {
            if (FL8(o->w1) >= 0) {
                func_02006ce8();
                func_02006abc(FA(o->w0), FB(o->w0), p, FM16(o->w1), FH8(o->w1));
            }
        }
        func_02006b0c(0x7f, 0);
        return;
    case 7:
        func_02006a78(FA(o->w0), FB(o->w0), p);
        return;
    case 8:
        func_02006b30(FA(o->w0), FB(o->w0), p);
        func_02006b60(0x7f, 0);
        return;
    case 10:
        func_02006b8c(FA(o->w0), 0, p);
        return;
    case 11:
        if (func_02006b20() != 0) func_02006ae0(0);
        func_02006bd4(FA(o->w0), 0, p);
        return;
    case 12:
        func_02006c0c(FA(o->w0), 0, p);
        return;
    case 9:
    case 13:
    default:
        break;
    }
}
