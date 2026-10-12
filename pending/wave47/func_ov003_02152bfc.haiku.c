#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *data_020b93b8;
extern Pair data_ov003_02179ef4;
extern Pair data_ov003_02179efc;
extern Pair data_ov003_02179f04;

extern int func_0201bd84(void *, int);
extern void func_0203b720(void);
extern void *func_ov003_0214649c(void *);
extern void *func_ov003_02153470(void);
extern void *func_02056dd4(void *);
extern int func_ov003_02152b0c(void *);
extern void func_ov003_02152bb0(void *);
extern void *func_02056b10(void *);
extern void *func_ov003_0214a138(void *, Pair, void *);
extern void *func_02061000(void *, int, int, int);
extern void *func_ov003_0214a204(void *, Pair);
extern void func_02056bc0(void *, void *);
extern void *func_02060f6c(void *, int, int, int);

void func_ov003_02152bfc(void *p, int flag)
{
    uint8_t *self = (uint8_t *)p;
    void *r5;
    void *r6;
    void *s0;
    void *s4;
    void *s8;
    void *sc;
    void *n;

    if (func_0201bd84(data_020b93b8, 0x50) == 0) {
        func_ov003_0214649c(*(void **)(self + 0x9c));
        r5 = *(void **)func_ov003_02153470();
        r6 = *(void **)((uint8_t *)func_02056dd4(self) + 0x24);

        if (func_ov003_02152b0c(self) != 0) {
            func_ov003_02152bb0(self);
            s0 = func_02056b10(*(void **)(self + 0xc0));
            s4 = func_ov003_0214a138(self, data_ov003_02179ef4, r5);
            s8 = func_02061000(r6, 0xa, 0, 0);
            sc = func_ov003_0214a138(self, data_ov003_02179efc, r5);
            n = func_ov003_0214a204(self, data_ov003_02179f04);
            r5 = *(void **)(self + 0xbc);
            func_02056bc0(r5, n);
            func_02056bc0(r5, sc);
            func_02056bc0(r5, s8);
            func_02056bc0(r5, s4);
            func_02056bc0(r5, s0);
            if (*(uint8_t *)(self + 0xd8) == 0) {
                n = func_02060f6c(r6, 0xa, 0, 0);
                func_02056bc0(*(void **)(self + 0xbc), n);
            }
        }

        if (flag != 0) {
            func_02056b10(*(void **)(self + 0xbc));
            return;
        }
    }
    func_0203b720();
}
