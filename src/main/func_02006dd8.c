#include "ffc/types.h"

typedef struct {
    uint8_t pad0[4];
    int16_t a4;
    int16_t b6;
    int16_t s8;
    int16_t s10;
    uint8_t e12;
    uint8_t pad_d;
    int16_t s14;
    uint8_t g16;
    uint8_t h17;
    uint8_t i18;
    uint8_t j19;
} S;

extern int32_t func_0207b4f8(void *p);
extern void func_02079a7c(void *p, int32_t a);
extern void func_02079a9c(void *p, int32_t a, int32_t b);
extern void func_02079b2c(void *p, int32_t a);
extern void func_02079b04(void *p, int32_t a, int32_t b);
extern void func_02079b18(void *p, int32_t a, int32_t b);
extern void func_02007048(void *p);

int32_t func_02006dd8(S *p, int32_t r7, int32_t r6)
{
    int32_t r4 = 1;
    if (func_0207b4f8(p) == 0) {
        r4 = 0;
    }
    if (r4 != 0) {
        if (r6 == 0) {
            if (p->i18 != 0) {
                func_02079a7c(p, p->e12);
            } else {
                func_02079a7c(p, 0x7f);
            }
        } else {
            if (p->i18 == 0) {
                p->e12 = 0x7f;
            }
            func_02079a9c(p, 0, 0);
            func_02079a9c(p, p->e12, r6);
        }
        if (p->g16 != 0) {
            func_02079b2c(p, p->s8);
        }
        if (p->h17 != 0) {
            func_02079b04(p, 0xffff, p->s10);
        }
        if (p->j19 != 0) {
            func_02079b18(p, 0xffff, p->s14);
        }
    }
    if (r4 != 0) {
        p->a4 = (int16_t)r7;
        p->b6 = -1;
    }
    func_02007048(p);
    return r4;
}
