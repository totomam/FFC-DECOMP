#include "ffc/types.h"

extern uint32_t func_02056aec(void);
extern uint32_t func_0203bf7c(int x);
extern uint32_t func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint8_t pad0[0x10e];
    int16_t f10e;
    uint8_t pad1[0x8];
    int32_t *f118;
} S;

void func_ov012_021cdfa4(S *p)
{
    uint32_t a, b, c;
    S *q = p;
    uint8_t *o;

    *q->f118 = q->f10e;
    a = func_02056aec();
    b = func_0203bf7c(0x1e);
    c = func_0203b708(0x1e);
    o = (uint8_t *)q + 0x14;
    func_02056bc0(o, (void *)c);
    func_02056bc0(o, (void *)b);
    func_02056bc0(o, (void *)a);
}
