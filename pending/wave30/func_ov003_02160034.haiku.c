#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x21];
    uint8_t f21;
    uint8_t pad1[2];
    uint32_t f24;
    void *f28;
} S;

extern int32_t func_ov003_02160474(void *p, uint8_t v);
extern uint32_t func_02055054(uint32_t v);
extern void func_ov003_02160414(void *p, int32_t a, int32_t b);
extern void func_ov003_021600ac(S *s);
extern uint32_t data_0213e098;

void func_ov003_02160034(S *a)
{
    int32_t r4;

    r4 = func_ov003_02160474(a->f28, a->f21);
    a->f24 += func_02055054(data_0213e098);
    if (r4 == 0 && a->f24 >= 0x30) {
        func_ov003_02160414(a->f28, 1, 0);
        func_ov003_021600ac(a);
        return;
    }
    if (a->f24 >= 0x30) {
        func_ov003_021600ac(a);
    }
}
