#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern uint32_t func_0203c030(void *object);
extern uint32_t func_0203c058(void *object);
extern uint32_t func_ov007_0219c2c8(void *object, S s);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov007_0219d7f0(void *object, S s, uint32_t c);
extern S data_ov007_021c2fc8;
extern S data_ov007_021c2fd0;
extern S data_ov007_021c2fd8;

void func_ov007_0219d780(void *object)
{
    uint8_t *p = (uint8_t *)object;
    uint8_t *q;
    uint32_t a = func_0203c030((void *)0xc);
    uint32_t b = func_ov007_0219c2c8(object, data_ov007_021c2fc8);
    uint32_t c = func_0203c058((void *)0xc);
    q = p + 0x14;
    func_02056bc0(q, (void *)c);
    func_02056bc0(q, (void *)b);
    func_02056bc0(q, (void *)a);
    uint32_t d = func_ov007_0219d7f0(object, data_ov007_021c2fd0, 1);
    func_02056bc0(p + 0x14, (void *)d);
    *(S *)(p + 0x80) = data_ov007_021c2fd8;
}
