#include "ffc/types.h"

typedef struct { uint32_t w[4]; } S16;

extern void func_020628ac(void *obj, S16 a);
extern void func_02056c4c(void *obj);
extern int func_ov005_02195e2c(void *obj, S16 a, S16 b, int c, int d);
extern void func_02056bc0(void *obj, int v);
extern int func_ov008_0219d9f8(void *self, uint32_t idx);
extern uint32_t func_ov008_0219e2d0(void *self, uint32_t idx);
extern void func_ov005_02196594(void *a, uint32_t b, int c);
extern void func_ov005_02196f60(void *a, uint32_t b);
extern void func_ov005_02196700(void *a);

#define E0(s) (*(void **)((s) + 0xe0))

void func_ov008_0219d784(uint8_t *self, void *p)
{
    uint8_t i;
    if (p == 0) {
        void *o = E0(self);
        ((void (*)(void *))(*(void ***)o)[11])(o);
        return;
    }
    if (((int (*)(void *))(*(void ***)E0(self))[12])(E0(self)) != 0) {
        S16 a;
        ((void (*)(void *))(*(void ***)E0(self))[10])(E0(self));
        a = ((S16 (*)(void *))(*(void ***)p)[4])(p);
        func_020628ac(E0(self), a);
    } else {
        S16 a, b;
        int v;
        func_02056c4c(*(void **)(self + 0xdc));
        a = ((S16 (*)(void *))(*(void ***)E0(self))[7])(E0(self));
        b = ((S16 (*)(void *))(*(void ***)p)[4])(p);
        v = func_ov005_02195e2c(E0(self), a, b, 10, -5);
        func_02056bc0(*(void **)(self + 0xdc), v);
    }
    for (i = 0; i < 8; i++) {
        uint32_t *arr = *(uint32_t **)(self + 0xc8);
        if ((uint32_t)p == arr[i]) {
            uint8_t idx;
            *(uint8_t *)(self + 0x10e) = i;
            idx = (uint8_t)(*(uint8_t *)(self + 0x10e) + (*(uint8_t *)(self + 0x100) << 3));
            if (idx < *(uint32_t *)(self + 0xf8)) {
                int flag = 0;
                if (func_ov008_0219d9f8(self, idx) == 0) {
                    uint32_t v = func_ov008_0219e2d0(self, idx);
                    if (*(uint32_t *)(self + 0x108) + v > *(uint32_t *)(self + 0x104)) {
                        flag = 1;
                    }
                }
                func_ov005_02196594(*(void **)(self + 0xe4), (*(uint32_t **)(self + 0xf4))[idx], flag);
                func_ov005_02196f60(*(void **)(self + 0xe8), func_ov008_0219e2d0(self, idx));
                *(uint8_t *)(self + 0x10d) = idx;
                return;
            }
        }
    }
    func_ov005_02196700(*(void **)(self + 0xe4));
    func_ov005_02196f60(*(void **)(self + 0xe8), 0);
    *(uint8_t *)(self + 0x10d) = 0xff;
}
