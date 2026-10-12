#include "ffc/types.h"

extern char data_ov003_0217a394[];
extern void func_ov003_0215fea0(void *self, int x);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern void func_02056db0(void *self);

#define FLD(p, off, T) (*(T *)((uint8_t *)(p) + (off)))

void *func_ov003_0215fcc0(void *a0) {
    uint8_t *self = (uint8_t *)a0;
    uint8_t *p;
    uint8_t *q;
    uint8_t *t;
    uint8_t *nx;
    uint8_t *r3;
    uint32_t r1;
    volatile uint16_t *io = (volatile uint16_t *)0x4000208;
    uint16_t ime;
    uint16_t en = 1;
    uint8_t *r4;
    uint32_t tmp;
    uint32_t *tp;

    tp = &tmp;
    FLD(self, 0, void *) = data_ov003_0217a394;
    FLD(FLD(self, 0x88, uint8_t *), 8, uint8_t) = 1;
    *(uint16_t *)FLD(self, 0x88, uint8_t *) = FLD(self, 0x9c, uint16_t);
    FLD(FLD(self, 0x88, uint8_t *), 4, uint32_t) = FLD(self, 0xa0, uint32_t);

    func_ov003_0215fea0(self, 0);

    ime = *io;
    *io = 0;
    if (ime == 0) {
        en = 0;
    }

    if (FLD(self, 0xf0, uint8_t)) {
        q = self + 0xe4;
        t = FLD(q, 4, uint8_t *);
        while (t != 0) {
            q = t;
            t = FLD(t, 4, uint8_t *);
        }
        if (q != 0) {
            do {
                nx = FLD(q, 0, uint8_t *);
                FLD(q, 0, uint32_t) = 0;
                FLD(q, 4, uint32_t) = 0;
                FLD(q, 8, uint32_t) = 0;
                q = nx;
            } while (nx != 0);
        }
    } else {
        p = FLD(self, 0xe8, uint8_t *);
        if (p != 0) {
            r3 = FLD(p, 0, uint8_t *);
            if (r3 != 0) {
                r1 = FLD(r3, 0, uint32_t);
                FLD(p, 0, uint32_t) = 0;
                if (r1 != 0) {
                    FLD(p, 0, uint32_t) = r1;
                    FLD(r1, 4, uint32_t) = (uint32_t)p;
                }
                FLD(r3, 4, uint32_t) = 0;
                FLD(r3, 0, uint32_t) = 0;
            }
        } else {
            q = FLD(self, 0xe4, uint8_t *);
            if (q != 0) {
                FLD(q, 4, uint32_t) = 0;
                FLD(self, 0xe4, uint32_t) = 0;
            }
        }
    }

    (void)*io;
    *io = en;
    *tp = 0;

    r4 = self + 0xbc;
    if (FLD(r4, 4, uint32_t) != 0) {
        if (FLD(r4, 0xc, uint8_t) != 0) {
            func_02052d3c(FLD(r4, 4, uint32_t), FLD(r4, 8, uint32_t));
        }
        func_02052c04(FLD(r4, 4, uint32_t));
    }
    func_02053290(r4);
    func_02056db0(self);
    return self;
}
