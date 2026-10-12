#include "ffc/types.h"
typedef struct { int32_t a:9; int32_t b:11; uint32_t t:4; uint32_t r:8; } W0;
typedef struct { int32_t l:8; uint32_t m:16; int32_t h:8; } W1;
typedef struct { W0 x; W1 y; } Rec;
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
extern int32_t func_02006abc(int32_t a, int32_t b, int32_t p, uint16_t f, int32_t g);
extern void func_02006a78(int32_t a, int32_t b, int32_t p);
extern void func_02006b30(int32_t a, int32_t b, int32_t p);
extern void func_02006b60(int32_t a, int32_t b);
extern void func_02006b8c(int32_t a, int32_t b, int32_t p);
extern int32_t func_02006b20(void);
extern void func_02006ae0(int32_t v);
extern void func_02006bd4(int32_t a, int32_t b, int32_t p);
extern void func_02006c0c(int32_t a, int32_t b, int32_t p);
#define A o->x.a
#define B o->x.b
void func_02007ebc(int32_t id, int32_t p) {
    Rec *o = (Rec *)func_02008358((int16_t)id, p);
    if (o == 0) return;
    switch (o->x.t) {
    case 2:
        func_020069dc(A, B, p);
    case 0:
        func_020069f4(0x7f);
        func_020069b0(A, B, p);
        return;
    case 1:
        func_020069f4(0x7f);
        func_02006a04(o->y.l);
        func_02006a14(o->y.m);
        func_02006a24(o->y.h);
        func_020069b0(A, B, p);
        return;
    case 3:
        func_020069f4(0x7f);
        func_02006a44(A, B, o->y.l, p);
        return;
    case 4:
        func_020069dc(A, B, p);
        func_020069f4(0x7f);
        func_020069b0(A, B, p);
        return;
    case 5:
        if (func_02006bfc() != 0 || func_02006c24() != 0) func_02006bec(0);
        if (func_02006aa4(A, B, p) == 0) {
            if (o->y.l >= 0) {
                func_02006ce8();
                func_02006aa4(A, B, p);
            }
        }
        func_02006b0c(0x7f, 0);
        return;
    case 6:
        if (func_02006bfc() != 0 || func_02006c24() != 0) func_02006bec(0);
        if (func_02006abc(A, B, p, o->y.m, o->y.h) == 0) {
            if (o->y.l >= 0) {
                func_02006ce8();
                func_02006abc(A, B, p, o->y.m, o->y.h);
            }
        }
        func_02006b0c(0x7f, 0);
        return;
    case 7:
        func_02006a78(A, B, p);
        return;
    case 8:
        func_02006b30(A, B, p);
        func_02006b60(0x7f, 0);
        return;
    case 10:
        func_02006b8c(A, 0, p);
        return;
    case 11:
        if (func_02006b20() != 0) func_02006ae0(0);
        func_02006bd4(A, 0, p);
        return;
    case 12:
        func_02006c0c(A, 0, p);
        return;
    case 9:
    case 13:
    default:
        break;
    }
}
