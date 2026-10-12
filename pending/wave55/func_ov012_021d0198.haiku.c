#include "ffc/types.h"

extern void func_ov012_021d0d0c(uint8_t *p, int v);
extern uint8_t func_ov012_021d008c(uint8_t *p);
extern void func_02021338(int v);
extern void *func_0203b688(void);
extern void *func_020655b8(void *p);
extern void *func_020655dc(void *p, int a, int b);
extern void func_02056bc0(void *object, void *node);
extern void func_ov012_021ce750(uint8_t *p);

typedef union Sel {
    struct { uint32_t flag : 1; } b;
    struct { uint16_t pad; uint16_t inl[3]; uint16_t *ptr; } s;
} Sel;

#define A(p, o) ((Sel *)((uint8_t *)(p) + (o)))
#define SELP(a) ((a)->b.flag ? (a)->s.ptr : (a)->s.inl)

void func_ov012_021d0198(uint8_t *p)
{
    int8_t cnt = (int8_t)p[0x338];
    if (cnt > 0) {
        int idx = cnt - 1;
        if (SELP(A(p, 0x2EC))[idx] >= 0x30) {
            if (SELP(A(p, 0x2EC))[idx] <= 0x39) {
                func_ov012_021d0d0c(p, 1);
            }
        }
    }

    {
        uint8_t lo = p[0x338];
        uint8_t hi = p[0x339];
        if (lo < hi) {
            uint8_t i = lo;
            do {
                if (i != 0) {
                    uint16_t *t1 = SELP(A(p, 0x2EC));
                    t1[i - 1] = t1[i];
                    uint16_t *t2 = SELP(A(p, 0x2F8));
                    t2[i - 1] = t2[i];
                }
                i++;
            } while (i < p[0x339]);
        }
    }

    {
        uint8_t n = p[0x339];
        SELP(A(p, 0x2EC))[n - 1] = SELP(A(p, 0x31C))[0x1d];
        SELP(A(p, 0x2F8))[n - 1] = SELP(A(p, 0x31C))[0x1d];
    }

    *(int8_t *)(p + 0x338) -= 1;
    p[0x33C] = func_ov012_021d008c(p);
    func_02021338(0xbd);
    {
        void *r6 = func_0203b688();
        void *r7 = func_020655b8(*(void **)(*(uint8_t **)(p + 0x25C) + 0xC4));
        void *r1 = func_020655dc(*(void **)(*(uint8_t **)(p + 0x25C) + 0xC4), 4, 1);
        func_02056bc0(r6, r1);
        func_02056bc0(r6, r7);
        func_02056bc0(p + 0x14, r6);
    }
    func_ov012_021ce750(p);
}
