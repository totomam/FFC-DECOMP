#include "ffc/types.h"

extern float func_0209b5bc(float a, float b);
extern int32_t func_0209ab90(float a);
extern float func_0209a4cc(int32_t a);
extern float func_0209af28(float a, float b);
extern float func_0209b108(float a, float b);
extern float func_0209b338(float a, float b);
extern int32_t func_0209ab5c(float a);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern int64_t func_0209a71c(int64_t a, int64_t b);
extern void func_02080a6c(int32_t *m, void *p);
extern int16_t data_020a1bd0[];

typedef struct {
    float f0;
    float f4;
    float f8;
    float fc;
    float f10;
    int32_t i14;
    int32_t i18;
} Obj;

#define FX(v) ((v) > 0.0f ? func_0209ab5c(func_0209b108(0.5f, func_0209af28(4096.0f, (v)))) : func_0209ab5c(func_0209b338(func_0209af28(4096.0f, (v)), 0.5f)))

void func_02025020(Obj *p)
{
    int32_t m[16];
    float ang = p->f8;
    int32_t idx;
    int32_t D, C, B, A;
    int32_t c, s;
    int32_t t_Bc, t_Bs, t_As, t_Ac;
    int32_t r4, r6;
    int16_t *tab;

    if (ang < 0.0f) {
        ang = func_0209b108(func_0209af28(360.0f, func_0209a4cc(func_0209ab90(func_0209b5bc(ang, 360.0f)) + 1)), ang);
    }
    idx = (uint16_t)func_0209ab90(func_0209b5bc(func_0209af28(65536.0f, ang), 360.0f)) >> 4;

    tab = data_020a1bd0;
    s = tab[2 * idx];
    r4 = p->i14;
    r6 = p->i18;
    c = tab[2 * idx + 1];

    A = FX(p->f0);
    B = FX(p->f4);
    C = FX(p->fc);
    D = FX(p->f10);

    t_As = (A * s) >> 12;
    t_Ac = (A * c) >> 12;
    t_Bs = (B * s) >> 12;
    t_Bc = (B * c) >> 12;

    m[0] = t_Ac;
    m[1] = func_0209a76c(-r6 * t_Bs, r4);
    m[2] = 0;
    m[3] = 0;
    m[4] = func_0209a76c(r4 * t_As, r6);
    m[5] = t_Bc;
    m[6] = 0;
    m[7] = 0;
    m[8] = 0;
    m[9] = 0;
    m[10] = 0x10000;
    m[11] = 0;
    m[12] = ((r4 * (A - (t_As + t_Ac))) << 3) - r4 * (int32_t)((uint64_t)func_0209a71c((int64_t)A, (int64_t)C) >> 8);
    m[13] = (((t_Bs - t_Bc - B + 0x2000) * r6) << 3) + r6 * (int32_t)((uint64_t)func_0209a71c((int64_t)B, (int64_t)D) >> 8);
    m[14] = 0;
    m[15] = 0x10000;

    func_02080a6c(m, (char *)p + 0x1c);
}
