#include "ffc/types.h"

extern void func_ov007_0219c5dc(void *obj, int v);
extern void func_ov007_0219bedc(void *obj, int v);
extern uint32_t func_0203c030(uint32_t size);
extern uint32_t func_ov007_0219c2c8(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_0203c058(uint32_t size);
extern uint32_t func_0203b720(void);
extern uint32_t func_ov007_0219d444(void *obj, uint32_t a, uint32_t b, int c);
extern uint32_t func_ov007_0219c308(void *obj, int a, int b);
extern void func_02056bc0(void *obj, void *node);
extern uint32_t data_ov007_021c2f88[2];
extern uint32_t data_ov007_021c2f90[2];
extern uint32_t data_ov007_021c2f98[2];

void func_ov007_0219d5bc(void *self)
{
    uint32_t f;
    uint32_t a;
    uint32_t x0;
    uint32_t x1;
    uint32_t x2;
    uint32_t t;
    uint8_t *node;
    uint32_t *q;
    uint32_t v0;
    uint32_t v1;

    func_ov007_0219c5dc(self, 1);
    func_ov007_0219bedc(self, 2);
    f = func_0203c030(12);
    a = func_ov007_0219c2c8(self, data_ov007_021c2f88[0], data_ov007_021c2f88[1]);
    x0 = func_0203c058(12);
    x1 = func_0203b720();
    x2 = func_ov007_0219d444(self, data_ov007_021c2f90[0], data_ov007_021c2f90[1], 0);
    t = func_ov007_0219c308(self, 2, 4);
    node = (uint8_t *)self + 0x14;
    func_02056bc0(node, (void *)t);
    func_02056bc0(node, (void *)x2);
    func_02056bc0(node, (void *)x1);
    func_02056bc0(node, (void *)x0);
    func_02056bc0(node, (void *)a);
    func_02056bc0(node, (void *)f);
    q = data_ov007_021c2f98;
    v0 = q[0];
    v1 = q[1];
    *(uint32_t *)((uint8_t *)self + 0x80) = v1;
    *(uint32_t *)((uint8_t *)self + 0x84) = v0;
}
