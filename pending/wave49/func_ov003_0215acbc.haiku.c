#include "ffc/types.h"



extern void func_02056c4c(void *);
extern void *func_0205681c(uint32_t);
extern void *func_ov003_02155b40(void *);
extern void func_02056bc0(void *, void *);
extern uint32_t func_0209ab5c(float);
extern void func_02056c9c(void *, uint32_t);
extern void func_ov003_02157b6c(void *, int, int, int, int, int, int);
extern char data_ov003_02179fe8[];
extern char data_ov003_02179fd0[];

void func_ov003_0215acbc(void *p, uint32_t a, uint32_t b, uint32_t c, int32_t mode, uint16_t sv, int32_t arg7)
{
    char *P = (char *)p;
    char *o;
    char *o2 = 0;
    char *node;
    uint16_t nv;
    uint16_t d;
    uint16_t ang;
    uint16_t dist;
    float v;
    float f;
    float f2;
    float q;

    func_02056c4c(*(void **)(P + 0xf8));
    o = (char *)func_0205681c(0x40);
    if (o != 0) {
        uint32_t b2;
        uint32_t zero = 0;
        *(uint32_t *)(o + 0xc) &= ~0xff;
        o[0x13] = zero;
        o[0x14] = zero;
        o[0x15] = zero;
        *(uint32_t *)(o + 0x2c) = 1;
        *(uint32_t *)(o + 0x30) = zero;
        b2 = b * 2;
        *(void **)o = data_ov003_02179fe8;
        *(void **)(o + 0x34) = p;
        *(uint32_t *)(o + 0x1c) = 0x100;
        *(uint32_t *)(o + 0x24) = b2;
        if (o[0x15]) {
            if (b2 != 0) {
                *(uint32_t *)(o + 0x1c) = b << 5;
            } else {
                *(uint32_t *)(o + 0x1c) = 1;
            }
        }
        *(uint32_t *)(o + 0x30) = c;
        node = (char *)func_ov003_02155b40(*(void **)(o + 0x34));
        nv = *(uint16_t *)(node + 0x10);
        *(uint32_t *)(o + 0x38) = nv;
        d = (uint16_t)(a - nv);
        if (d < 0x8000) {
            *(uint32_t *)(o + 0x3c) = nv + d;
        } else {
            *(uint32_t *)(o + 0x3c) = nv - (0x10000 - d);
        }
    }
    func_02056bc0(*(void **)(P + 0xf8), o);

    if (mode == 2) goto end;

    v = (float)*(int32_t *)(P + 0x350) * 4096.0f;
    if (v < 0.0f) {
        float h = (float)(((int32_t)(v * 360.0f)) + 1);
        v = (360.0f - h) + v;
    }
    ang = (uint16_t)(int32_t)((65536.0f - v) * 360.0f);

    if (mode == 0) {
        node = (char *)func_ov003_02155b40(p);
        nv = *(uint16_t *)(node + 0x10);
        dist = (uint16_t)(a - nv);
        if (dist >= 0x8000) {
            dist = (uint16_t)(0x10000 - dist);
        }
    } else {
        dist = ang;
    }
    if (dist < ang) goto L01b0;

    {
        int32_t t = arg7 ? arg7 : *(int32_t *)(P + 0x354);
        f = (float)t * 4096.0f;
        if (!(f > 0.0f)) goto end;
        o2 = (char *)func_0205681c(0x90);
        if (o2 == 0) goto L01a2;
        q = 4096.0f - f;
        if (f > 0.0f) {
            f2 = 0.5f + q;
        } else {
            f2 = q - 0.5f;
        }
        func_02056c9c(o2, 0);
        *(void **)o2 = data_ov003_02179fd0;
        *(void **)(o2 + 0x80) = p;
        *(uint16_t *)(o2 + 0x84) = sv;
        *(uint16_t *)(o2 + 0x86) = (uint16_t)b;
        *(uint16_t *)(o2 + 0x88) = 0;
        *(uint16_t *)(o2 + 0x8a) = 0;
        *(uint32_t *)(o2 + 0x8c) = func_0209ab5c(f2);
    }
L01a2:
    func_02056bc0(*(void **)(P + 0xf8), o2);
    goto end;

L01b0:
    if (*(uint16_t *)(P + 0xbe) == sv) {
        func_ov003_02157b6c(P, 1, 1, 0x1000, 0, 0, 0);
    }

end:
    *(uint16_t *)(P + 0xb2) = 0;
}
