#include "ffc/types.h"

typedef struct { uint32_t w[4]; } S16;

extern void func_020628ac(void *obj, S16 s);
extern void func_02056c4c(void *obj);
extern void *func_ov005_02195e2c(void *obj, S16 a, S16 b, int c, int d);
extern void func_02056bc0(void *obj, void *node);
extern int func_ov008_021a3278(void *self, uint32_t idx);
extern int func_ov008_021a3c78(void *self, uint32_t idx);
extern void func_ov005_02196594(void *a, void *b, int flag);
extern void func_ov005_02196f60(void *a, int b);
extern void func_ov005_02196700(void *a);

#define VFN(o, off) (*(void **)(*(char **)(o) + (off)))

void func_ov008_021a2fb0(uint8_t *self, void *p) {
    S16 b1, b2, b3;
    uint8_t i;

    if (p == 0) {
        void *obj = *(void **)(self + 0xf0);
        ((void (*)(void *))VFN(obj, 0x2c))(obj);
        return;
    }

    if (((int (*)(void *))VFN(*(void **)(self + 0xf0), 0x30))(*(void **)(self + 0xf0)) != 0) {
        ((void (*)(void *))VFN(*(void **)(self + 0xf0), 0x28))(*(void **)(self + 0xf0));
        {
            void (*f)(S16 *, void *) = (void (*)(S16 *, void *))VFN(p, 0x10);
            f(&b1, p);
        }
        func_020628ac(*(void **)(self + 0xf0), b1);
    } else {
        void *r;
        void *o;
        func_02056c4c(*(void **)(self + 0xec));
        o = *(void **)(self + 0xf0);
        {
            void (*f)(S16 *, void *) = (void (*)(S16 *, void *))VFN(o, 0x1c);
            f(&b2, o);
        }
        {
            void (*f)(S16 *, void *) = (void (*)(S16 *, void *))VFN(p, 0x10);
            f(&b3, p);
        }
        r = func_ov005_02195e2c(*(void **)(self + 0xf0), b2, b3, 10, -5);
        func_02056bc0(*(void **)(self + 0xec), r);
    }

    for (i = 0; i < 8; i++) {
        void **arr = *(void ***)(self + 0xd8);
        if (p == arr[i]) {
            uint8_t idx;
            self[0x126] = i;
            idx = (uint8_t)(self[0x126] + (*(uint32_t *)(self + 0x114) << 3));
            if (idx < *(uint32_t *)(self + 0x10c)) {
                int flag = 0;
                void **tbl;
                if (func_ov008_021a3278(self, idx) == 0) {
                    int n = func_ov008_021a3c78(self, idx);
                    if (*(uint32_t *)(self + 0x120) + n > *(uint32_t *)(self + 0x11c)) {
                        flag = 1;
                    }
                }
                tbl = *(void ***)(self + 0x108);
                func_ov005_02196594(*(void **)(self + 0xf4), tbl[idx], flag);
                {
                    int m = func_ov008_021a3c78(self, idx);
                    func_ov005_02196f60(*(void **)(self + 0xf8), m);
                }
                self[0x125] = idx;
                return;
            }
        }
    }

    func_ov005_02196700(*(void **)(self + 0xf4));
    func_ov005_02196f60(*(void **)(self + 0xf8), 0);
    self[0x125] = 0xff;
}
