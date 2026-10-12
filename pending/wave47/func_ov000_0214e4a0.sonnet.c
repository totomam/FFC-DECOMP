#include "ffc/types.h"

extern void *func_02088978(void);
extern void func_0208898c(void *p);
extern int func_ov000_0214ece8(int a);
extern int func_ov000_0214ecc8(int a);
extern void func_ov000_0214d224(int a, int b);
extern void *func_ov000_0214d1d8(void *f, int a, int n);
extern void func_ov000_0214d258(int a);
extern void func_ov000_0214e57c(void);
extern int32_t data_ov000_0216e078[];

typedef struct {
    int32_t f0;
    int32_t f4;
    int32_t f8;
} Blk;

typedef struct {
    uint8_t pad[0xa4];
    int32_t f_a4;
    int32_t f_a8;
    int16_t f_ac;
    int8_t f_ae;
    int8_t f_af;
} Obj;

int func_ov000_0214e4a0(int a)
{
    void *r4;
    Obj *o;
    int r2;
    int r1;
    int16_t t;
    void *r;

    if (a <= 0) {
        return -28;
    }
    r4 = func_02088978();
    if (func_ov000_0214ece8(a) != 0) {
        func_0208898c(r4);
        return -26;
    }
    if (func_ov000_0214ecc8(a) != 0) {
        func_0208898c(r4);
        return 0;
    }
    o = (Obj *)a;
    r2 = 0;
    if (a != 0) {
        if (o->f_ac & 1) {
            r2 = 1;
        } else {
            r2 = 0;
        }
    }
    if (r2 == 0) {
        func_0208898c(r4);
        return -39;
    }
    if (o->f_ac & 0x10) {
        func_0208898c(r4);
        return -26;
    }
    func_0208898c(r4);
    o->f_ac = (int16_t)(o->f_ac | 0x18);
    r1 = 1;
    if (o->f_af != 0 && o->f_af != 4) {
        r1 = 0;
    }
    if (r1 != 0) {
        func_ov000_0214d224(o->f_a4, 0);
        data_ov000_0216e078[0] = data_ov000_0216e078[0] - 1;
    } else {
        data_ov000_0216e078[1] = data_ov000_0216e078[1] - 1;
    }
    {
        Blk *q;
        Blk *keep;
        q = (Blk *)func_ov000_0214d1d8((void *)func_ov000_0214e57c, a, 1);
        q->f8 = 0;
        (void)q;
    }
    func_ov000_0214d258(a);
    return 0;
}
