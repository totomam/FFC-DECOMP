#include "ffc/types.h"

extern void func_02056bf4(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203bc04(void *a, int b, int c, int d);

void func_ov003_02177aec(uint8_t *self, uint32_t v) {
    void *o;
    uint32_t i, n, cur;
    if (v != *(uint32_t *)(self + 0xa4)) {
        *(uint32_t *)(self + 0xa4) = v;
        o = *(void **)(self + 0x9c);
        if (o == 0) {
            goto check;
        }
        func_02056bf4(self + 0x48);
        o = *(void **)(self + 0x9c);
        if (o == 0) {
            goto check;
        }
        if (o != 0) {
            void **vt = *(void ***)o;
            ((void (*)(void *))vt[1])(o);
        }
        *(void **)(self + 0x9c) = 0;
    }
check:
    if (*(void **)(self + 0x9c) == 0) {
        n = *(uint32_t *)(self + 0xf0);
        for (i = 0; i < n; i++) {
            cur = *(uint32_t *)(self + 0xa4);
            if (cur == *(uint32_t *)(self + (i << 3) + 0xf4)) {
                void **vt;
                uint32_t sz;
                o = func_0203bc04(*(void **)(self + (i << 3) + 0xf8), 1, 0, 0);
                *(void **)(self + 0x9c) = o;
                vt = *(void ***)o;
                ((void (*)(void *, uint32_t))vt[8])(o, 0);
                o = *(void **)(self + 0x9c);
                vt = *(void ***)o;
                ((void (*)(void *))vt[10])(o);
                if (*(uint8_t *)(self + 0xc8) != 0) {
                    sz = 0x41 << 2;
                } else {
                    sz = 4;
                }
                o = *(void **)(self + 0x9c);
                vt = *(void ***)o;
                ((void (*)(void *, uint32_t, uint32_t))vt[14])(o, sz, 0x84);
                func_02056bc0(self + 0x48, *(void **)(self + 0x9c));
                return;
            }
        }
    }
}
