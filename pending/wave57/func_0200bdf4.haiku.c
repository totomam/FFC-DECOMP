#include "ffc/types.h"

extern void func_02068658(void *p);
extern void func_0200a7b0(void *a, void *b);
extern void func_0200cdd8(void *a, uint32_t b);
extern void func_0200ce10(void *a, void *b, void *c);
extern void func_0200a5dc(void *a, void *b);
extern void func_0206872c(void *a, void *b);
extern void *func_0200a678(void *object);

typedef struct {
    uint8_t b0;
    uint8_t b1;
    uint16_t h;
    uint32_t w4;
    uint32_t *p8;
} Q;

#define F(T, p, off) (*(T *)((uint8_t *)(p) + (off)))

void func_0200bdf4(uint8_t *self, uint32_t a)
{
    uint32_t *p;
    uint32_t v;
    uint32_t r4;
    uint32_t arr28[3];
    uint32_t l10[3];
    uint32_t tt[4];

    uint32_t i;
    Q q;

    p = (F(uint32_t, self, 0xbc) < a) ? &F(uint32_t, self, 0xbc) : &a;
    v = *p;
    F(uint32_t, self, 0xb8) = v;
    {
        void **vt = *(void ***)F(void *, self, 0x98);
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(F(void *, self, 0x98), v + 1, 0);
        vt = *(void ***)F(void *, self, 0x98);
        ((void (*)(void *))vt[10])(F(void *, self, 0x98));
    }
    func_02068658(F(void *, self, 0x94));

    {
        uint32_t hi = F(uint32_t, self, 0xa0);
        uint32_t sb = F(uint32_t, self, 0x9c);
        uint32_t sc = F(uint32_t, self, 0xb8);
        uint32_t half = (hi - sb) >> 1;
        if ((sc << 3) > half) {
            r4 = (sc << 3) - half;
        for (i = 0; i < 3; i++) {
            arr28[i] = i;
        }
        for (i = 2; i < 3; i++) {
            ((uint32_t *)&q)[i] = 0;
        }
        func_0200a7b0(&q, self + 0x84);
        goto cond;
        for (;;) {
            uint16_t *src;
            void **vt;
            if (q.b0 & 1) {
                src = (uint16_t *)q.p8;
            } else {
                src = &q.h;
            }
            vt = *(void ***)F(void *, self, 0xac);
            ((void (*)(uint32_t *, void *, uint32_t))vt[3])(&tt[2], F(void *, self, 0xac), *src);
            if (tt[2] > r4) {
                break;
            }
            r4 -= tt[2];
            func_0200cdd8(arr28, *src);
            if (q.b0 & 1) {
                func_0200ce10(&tt[1], &q, q.p8);
            } else {
                func_0200ce10(&tt[1], &q, &q.h);
            }
cond:
            if (q.b0 & 1) {
                if (q.w4 == 0) {
                    break;
                }
            } else {
                if (((q.b0 >> 1) & 0x7f) == 0) {
                    break;
                }
            }
        }
        func_0200a5dc(l10, arr28);
        func_0206872c(F(void *, self, 0x94), l10);
        func_0200a678(l10);
        func_0200a678(&q);
        func_0200a678(arr28);
        }
    }
}
