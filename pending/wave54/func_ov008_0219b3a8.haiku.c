#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } Blk;

extern void func_020628ac(void *p, Blk b);
extern void func_02056c4c(void *p);
extern uint32_t func_ov005_02195e2c(void *p, Blk a, Blk b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_0201ed30(uint32_t a, uint32_t b, uint32_t c, void *d);
extern uint32_t func_ov008_0219b694(void *self, uint32_t i);
extern uint32_t func_ov008_0219ba0c(void *self, uint32_t i);
extern uint32_t func_0201e994(uint32_t a);
extern void func_ov005_021963cc(void *p, void *buf, uint32_t flag);
extern void func_ov005_02196f60(void *p, uint32_t v);
extern void func_ov005_021964c4(void *p);
extern uint32_t data_020b93b8;

#define OBJF(s) (*(void **)((uint8_t *)(s) + 0xf0))
#define VTB(o) (*(void ***)(o))

void func_ov008_0219b3a8(void *r0, void *r1)
{
    uint8_t *s = (uint8_t *)r0;
    void *n = r1;

    if (n == 0) {
        ((void (*)(void *))VTB(OBJF(s))[0x2c / 4])(OBJF(s));
        return;
    }

    uint32_t buf[6];
    Blk t1, t2, t3;
    if (((uint32_t (*)(void *))VTB(OBJF(s))[0x30 / 4])(OBJF(s)) != 0) {
        ((void (*)(void *))VTB(OBJF(s))[0x28 / 4])(OBJF(s));
        {
            void *q = n;
            ((void (*)(Blk *, void *))VTB(q)[0x10 / 4])(&t1, q);
        }
        func_020628ac(OBJF(s), t1);
    } else {
        uint32_t r;
        void *p;
        func_02056c4c(*(void **)(s + 0xec));
        p = *(void **)(s + 0xf0);
        ((void (*)(Blk *, void *))VTB(p)[0x1c / 4])(&t2, p);
        {
            void *q = n;
            ((void (*)(Blk *, void *))VTB(q)[0x10 / 4])(&t3, q);
        }
        r = func_ov005_02195e2c(OBJF(s), t2, t3, 10, (uint32_t)-5);
        func_02056bc0(*(void **)(s + 0xec), (void *)r);
    }

    {
        uint8_t i;
        for (i = 0; i < 8; i++) {
            uint32_t *arr = *(uint32_t **)(s + 0xcc);
            if ((uint32_t)n == arr[i]) {
                uint8_t idx;
                int flag;
                s[0x112] = i;
                idx = (uint8_t)(s[0x112] + (s[0x104] << 3));
                if (idx < *(uint32_t *)(s + 0xe4)) {
                    func_0201ed30(data_020b93b8, *(uint32_t *)(s + 0x118), idx, buf);
                    if (func_ov008_0219b694(s, idx) != 0) {
                        flag = 0;
                    } else {
                        uint32_t sum = *(uint32_t *)(s + 0x10c) + func_ov008_0219ba0c(s, idx);
                        if (sum > *(uint32_t *)(s + 0x108)) {
                            flag = 1;
                        } else if (s[0x110] < func_0201e994(data_020b93b8)) {
                            flag = 0;
                        } else {
                            flag = 1;
                        }
                    }
                    func_ov005_021963cc(*(void **)(s + 0xf4), buf, flag);
                    func_ov005_02196f60(*(void **)(s + 0xf8), func_ov008_0219ba0c(s, idx));
                    s[0x111] = idx;
                    return;
                }
            }
        }
    }

    func_ov005_021964c4(*(void **)(s + 0xf4));
    func_ov005_02196f60(*(void **)(s + 0xf8), 0);
    s[0x111] = 0xff;
}
