#include "ffc/types.h"

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    void *f8;
    void *fc;
} Obj;

typedef struct Str {
    union {
        struct { uint32_t lng : 1; uint32_t n : 31; } l;
        struct { uint8_t lng : 1; uint8_t n : 7; } s;
    } h;
    uint32_t len;
    uint16_t *ptr;
} Str;

typedef void (*VFn)(void *, uint32_t);

extern void *data_020b93b8;

extern int func_02068680(void *p);
extern uint32_t func_02068b30(void *p);
extern void func_0201cf34(void *a, void *b);
extern void func_0200a630(void *a, void *b);
extern int func_0200ba90(void *a);
extern void func_0200a5dc(void *a, void *b);
extern void func_020394fc(void *a, void *b);
extern void func_0200a7b0(void *a, void *b);
extern void *func_0200a678(void *object);
extern void func_0200ba88(void *a, uint32_t b);
extern void func_02068b70(void *a, uint32_t b);
extern uint32_t func_020370bc(void *a);
extern void func_ov004_021476d8(void *a, uint32_t b);
extern void func_02068658(void *a);
extern void func_0203710c(void *a, void *b);
extern void func_ov004_02147bd4(void *a, uint32_t b);
extern void func_0200b994(void *a, uint32_t b);
extern void func_ov004_021476e0(void *a, uint32_t b);
extern void func_020371dc(void *a, uint32_t b, uint32_t c);

int func_ov004_02147da0(Obj *a, void *p, uint32_t k)
{
    uint8_t A[0x98];
    Str B;
    uint8_t C[12];
    uint8_t D[12];
    uint32_t t[5];
    uint16_t * volatile w;
    uint16_t * volatile q;
    uint32_t c;

    if (k != 0x24) {
        return 0;
    }
    if (func_02068680(p) != 0) {
        return 1;
    }
    c = func_02068b30(p);
    switch (c) {
    case 0x70:
        func_0201cf34(data_020b93b8, A);
        func_0200a630(&B, A);
        if (func_0200ba90(a->fc) != 0) {
            func_0200a5dc(C, &B);
            func_020394fc(D, C);
            func_0200a7b0(&B, D);
            func_0200a678(D);
            func_0200a678(C);
            func_0200ba88(a->fc, 0);
        }
        {
            uint16_t *cur = !B.h.l.lng ? (uint16_t *)((uint8_t *)&B + 2) + B.h.s.n : B.ptr + B.len;
            w = cur;
            
            while (w != (B.h.l.lng ? B.ptr : (uint16_t *)((uint8_t *)&B + 2))) {
                q = w - 1;
                func_02068b70(p, *q);
                w = w - 1;
            }
        }
        func_0200a678(&B);
        break;
    case 0x74:
        func_ov004_021476d8(a->f8, func_020370bc(p));
        func_02068b70(p, 0xc);
        break;
    case 0x66:
        func_02068658(p);
        break;
    case 0x77:
        func_0203710c(&t[4], p);
        func_ov004_02147bd4(a->f8, t[4]);
        break;
    case 0x6e:
        if (a->fc != 0) {
            func_0200b994(a->fc, func_020370bc(p));
        }
        break;
    case 0x71:
        func_ov004_021476e0(a->f8, func_020370bc(p));
        break;
    case 0x63:
        if (func_02068680(p) == 0) {
            uint32_t v;
            v = func_02068b30(p);
            if (v >= 0x30 && v <= 0x39) {
                v = v - 0x30;
            } else if (v >= 0x61 && v <= 0x66) {
                v = v - 0x57;
            } else if (v >= 0x41 && v <= 0x46) {
                v = v - 0x3c;
            } else {
                v = 0;
            }
            v = v + 1;
            if (v == 1) {
                v = 10;
            }
            if (a->fc != 0) {
                VFn *vt = *(VFn **)a->fc;
                vt[6](a->fc, v);
            }
        }
        break;
    case 0x67:
        func_020371dc(p, 0, 0);
        break;
    case 0x55:
        if (a->fc != 0) {
            func_0200ba88(a->fc, 1);
        }
        break;
    default:
        break;
    }
    return 1;
}
