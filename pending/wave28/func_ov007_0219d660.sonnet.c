#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

extern void func_ov007_0219c94c(void *a);
extern void func_ov007_0219d108(void *a, uint32_t b, uint32_t c);
extern void *func_0203c318(void);
extern void *func_ov007_0219d6b4(void *r0, Pair p, uint32_t r3);
extern void *func_0203b720(void);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c2fa0;
extern Pair data_ov007_021c2fa8;

void func_ov007_0219d660(uint8_t *a)
{
    void *v;
    uint8_t *q;
    void *n;

    func_ov007_0219c94c(a);
    func_ov007_0219d108(a, 1, 1);
    v = func_0203c318();

        v = func_ov007_0219d6b4(v, data_ov007_021c2fa0, 0);
    n = func_0203b720();
    q = a + 0x14;
    func_02056bc0(q, n);
    func_02056bc0(q, v);
    *(Pair *)(a + 0x80) = data_ov007_021c2fa8;
}
