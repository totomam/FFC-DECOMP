#include "ffc/types.h"

typedef struct {
    uint8_t p0[4];
    int16_t s4;
    int16_t s6;
    int16_t s8;
    int16_t sa;
    uint8_t bc;
    uint8_t pd;
    int16_t se;
    uint8_t b10;
    uint8_t b11;
    uint8_t b12;
    uint8_t b13;
} FfcObj;

extern int func_0207b524(void *p, int x, int y, int flag);
extern void func_02079a7c(void *p, int v);
extern void func_02079a9c(void *p, int a, int b);
extern void func_02079b2c(void *p, int v);
extern void func_02079b04(void *p, int a, int b);
extern void func_02079b18(void *p, int a, int b);
extern void func_02007048(void *p);

int func_02006e74(void *p0, int16_t x, int16_t y, int flag)
{
    FfcObj *p = (FfcObj *)p0;
    int r4 = 1;

    if (func_0207b524(p0, x, y, flag) == 0) {
        r4 = 0;
    }

    if (r4) {
        if (flag == 0) {
            if (p->b12 != 0) {
                func_02079a7c(p0, p->bc);
            } else {
                func_02079a7c(p0, 0x7f);
            }
        } else {
            if (p->b12 == 0) {
                p->bc = 0x7f;
            }
            func_02079a9c(p0, 0, 0);
            func_02079a9c(p0, p->bc, flag);
        }

        if (p->b10) {
            func_02079b2c(p0, p->s8);
        }
        if (p->b11) {
            func_02079b04(p0, 0xffff, p->sa);
        }
        if (p->b13) {
            func_02079b18(p0, 0xffff, p->se);
        }
    }

    if (r4) {
        p->s4 = x;
        p->s6 = y;
    }

    func_02007048(p0);
    return r4;
}
