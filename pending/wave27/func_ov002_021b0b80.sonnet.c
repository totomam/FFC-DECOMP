#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern S data_ov002_021d57a8;
extern uint32_t func_ov002_021b0bc8(void *p, S s);
extern uint32_t func_020655b8(uint32_t x);
extern uint32_t func_0203b688(void);
extern void func_02056bc0(void *object, void *node);

void func_ov002_021b0b80(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    uint32_t r7 = func_ov002_021b0bc8(p, data_ov002_021d57a8);
    uint32_t r4 = func_020655b8(*(uint32_t *)(obj + 0x128));
    uint32_t r6 = func_0203b688();
    func_02056bc0((void *)r6, (void *)r4);
    func_02056bc0((void *)r6, (void *)r7);
    func_02056bc0((void *)(obj + 0x48), (void *)r6);
    func_020655b8(*(uint32_t *)(obj + 0x128));
}
