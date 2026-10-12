#include "ffc/types.h"

extern uint32_t func_0203b9b4(uint32_t x);
extern void func_02057958(void);
extern void func_02056bc0(void *object, void *node);
extern void func_02005988(void *a, void *b);
extern void func_020095b8(void *a, void *b);
extern void func_02050ea4(void *a, void *b, int n);
extern void func_02050ffc(void *a, void *b, int n);
extern void func_02033014(void *a, void *b, void *c);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_0200958c(void *object);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern uint32_t func_0203bd50(Pair p, void *c, uint32_t d, int e, int f);
extern void func_02032628(void *obj, uint8_t v);
extern void func_02032620(void *obj, int v);
extern void *func_02056b10(void *owner);
extern uint32_t func_02032638(void *obj);
extern uint32_t func_02055054(uint32_t v);
extern uint8_t data_020ae18c[];
extern uint32_t data_0213e098;

#define FLD_U32(off) (*(uint32_t *)(s + (off)))
#define FLD_U8(off) (*(uint8_t *)(s + (off)))

void func_02032e28(uint8_t *s) {
    uint8_t b38[12], b2c[12], b20[12], b14[12], b8[12];
    uint32_t st = FLD_U32(0xa0);

    switch (st) {
    case 0:
        FLD_U32(0x80) = func_0203b9b4(1);
        func_02057958();
        func_02056bc0(s + 0x48, (void *)FLD_U32(0x80));
        func_02005988(b38, data_020ae18c);
        func_020095b8(b2c, s + 0x90);
        func_02050ea4(b20, b2c, 10);
        func_02050ffc(b14, b20, 10);
        func_02033014(b8, b14, b38);
        func_0200b65c(s + 0x90, b8);
        func_020059cc(b8);
        func_020059cc(b14);
        func_0200958c(b20);
        func_020059cc(b2c);
        FLD_U32(0xac) = func_0203bd50(*(Pair *)(s + 0x88), s + 0x90, FLD_U32(0x9c), 1, 1);
        func_02032628((void *)FLD_U32(0xac), FLD_U8(0xa5));
        {
            void *o = (void *)FLD_U32(0xac);
            if ((int8_t)(*(uint32_t *)((uint8_t *)o + 0xc)) == 0) {
                void **vt = *(void ***)o;
                ((void (*)(void *))vt[2])(o);
            }
        }
        if (FLD_U8(0xa4) != 0) {
            func_02032620((void *)FLD_U32(0xac), 0xcb);
        }
        func_02056bc0(s + 0x48, (void *)FLD_U32(0xac));
        {
            void *r = func_02056b10((void *)(FLD_U32(0xac) + 0x14));
            func_02056bc0(s + 0x14, r);
        }
        FLD_U32(0xa0) = FLD_U32(0xa0) + 1;
        func_020059cc(b38);
        break;
    case 1:
    {
        if (func_02032638((void *)FLD_U32(0xac)) != 0) {
            FLD_U32(0xa8) = FLD_U32(0xa8) + 1;
            {
                uint32_t n = func_02032638((void *)FLD_U32(0xac));
                if (FLD_U32(0xa8) < n) {
                    return;
                }
            }
            FLD_U32(0xc) = (FLD_U32(0xc) & ~0xffu) | 2;
            return;
        }

        {
            void *obj = (void *)FLD_U32(0x80);
            void **vt = *(void ***)obj;
            uint32_t *r = (uint32_t *)((void *(*)(void *, uint32_t))vt[9])(obj, 0);
            uint32_t a = r[1];
            uint32_t b = r[2];
            if ((a & (b ^ a) & 0x130b) != 0) {
                FLD_U32(0xc) = (FLD_U32(0xc) & ~0xffu) | 2;
            } else if ((a & 0x30a) != 0) {
                FLD_U32(0xa8) = FLD_U32(0xa8) + func_02055054(data_0213e098);
                if (FLD_U32(0xa8) >= 0x12) {
                    FLD_U32(0xc) = (FLD_U32(0xc) & ~0xffu) | 2;
                }
            } else {
                FLD_U32(0xa8) = 0;
            }
        }

        if (FLD_U32(0x84) != 0) {
            FLD_U32(0x84) = FLD_U32(0x84) - 1;
            if (FLD_U32(0x84) == 0) {
                FLD_U32(0xc) = (FLD_U32(0xc) & ~0xffu) | 2;
            }
        }
    }
        break;
    default:
        break;
    }
}
