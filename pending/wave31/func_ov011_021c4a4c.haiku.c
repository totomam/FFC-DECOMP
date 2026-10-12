#include "ffc/types.h"

extern void func_ov011_021c49cc(void *p, uint8_t v);
extern void func_02021338(int x);
extern uint32_t func_ov011_021c4aa8(void *p, uint32_t a, uint32_t b, int v);
extern void *func_0203b720(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov011_021c4af0(void *p, int v);
extern uint32_t data_ov011_021cb404[];

void func_ov011_021c4a4c(void *p, int val)
{
    uint8_t *self = (uint8_t *)p;
    uint32_t *obj;
    uint32_t *d;
    uint32_t a;
    uint32_t b;
    uint32_t r7;
    void *f;
    void *q;

    if (val > 4) {
        return;
    }
    obj = *(uint32_t **)(self + 0xb8);
    if (obj[0] == (uint32_t)val) {
        return;
    }
    obj[0] = (uint32_t)val;
    func_ov011_021c49cc(p, (uint8_t)val);
    func_02021338(0xb7);
    d = data_ov011_021cb404;
    a = *d++;
    b = *d++;
    r7 = func_ov011_021c4aa8(p, a, b, val);
    f = func_0203b720();
    q = self + 0x14;
    func_02056bc0(q, f);
    func_02056bc0(q, (void *)r7);
    func_ov011_021c4af0(p, val);
}
