#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t zero);
extern void func_020509c0(void *obj);
extern void func_02050adc(void *a, void *b, uint32_t one, uint32_t d, uint32_t z1, uint32_t z2);
extern void func_02050b38(void *obj);
extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov003_0217a258[];
extern uint8_t data_ov003_0217a270[];

uint8_t *func_ov003_0215c0e0(uint8_t *obj, uint32_t p1, uint32_t p2, uint32_t p3)
{
    uint32_t v;
    func_02056c9c(obj, 0);
    func_020509c0(obj + 0x80);
    *(void **)(obj + 0) = data_ov003_0217a258;
    *(void **)(obj + 0x80) = data_ov003_0217a270;
    *(uint32_t *)(obj + 0x98) = p1;
    *(uint32_t *)(obj + 0x9c) = p2;
    *(uint32_t *)(obj + 0xa4) = 0;
    *(uint8_t *)(obj + 0xa8) = 1;
    *(uint32_t *)(obj + 0xa0) = 0;
    *(uint32_t *)(obj + 0xac) = 0;
    *(uint32_t *)(obj + 0xb0) = 0;
    func_02050adc(obj + 0x80, obj + 0xa4, 1, p3, 0, 0);
    func_02050b38(obj + 0x80);
    v = func_0203b6f0();
    *(uint32_t *)(obj + 0xc0) = v;
    func_02056bc0(obj + 0x48, (void *)v);
    return obj;
}
