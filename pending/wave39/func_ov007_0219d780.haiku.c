#include "ffc/types.h"

extern uint32_t func_0203c030(void *object);
extern uint32_t func_0203c058(void *object);
extern uint32_t func_ov007_0219c2c8(void *object, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov007_0219d7f0(void *object, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov007_021c2fc8[2];
extern uint32_t data_ov007_021c2fd0[2];
extern uint32_t data_ov007_021c2fd8[2];

void func_ov007_0219d780(void *object)
{
    uint8_t *p = (uint8_t *)object;
    uint8_t *q;
    uint32_t a = func_0203c030((void *)0xc);
    uint32_t b = func_ov007_0219c2c8(object, data_ov007_021c2fc8[0], data_ov007_021c2fc8[1]);
    uint32_t c = func_0203c058((void *)0xc);
    q = p + 0x14;
    func_02056bc0(q, (void *)c);
    func_02056bc0(q, (void *)b);
    func_02056bc0(q, (void *)a);
    uint32_t d = func_ov007_0219d7f0(object, data_ov007_021c2fd0[0], data_ov007_021c2fd0[1], 1);
    func_02056bc0(q, (void *)d);
    uint32_t x = data_ov007_021c2fd8[0];
    uint32_t y = data_ov007_021c2fd8[1];
    *(uint32_t *)(p + 0x80) = x;
    *(uint32_t *)(p + 0x84) = y;
}
