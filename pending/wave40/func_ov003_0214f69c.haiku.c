#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_02005858(void *node, uint32_t f, void *buf, uint32_t one, uint32_t zero);
extern void func_ov003_0214f718(void *object, uint32_t idx, uint32_t val, uint32_t fl);
extern void func_02056bc0(void *object, void *node);
extern void func_0205f2f0(void *object, uint32_t value);
extern uint8_t data_ov003_02179af0[];
extern uint32_t data_0213df18;

void func_ov003_0214f69c(uint8_t *p, uint32_t idx, uint32_t val)
{
    uint32_t buf[0x11];
    void *node;
    uint32_t *slots;
    uint8_t *o;

    func_02091b10((void *)buf, (uint32_t)data_ov003_02179af0, idx);
    node = func_0205681c(0x54);
    if (node != 0) {
        node = func_02005858(node, func_0204f7ec((const void *)data_0213df18), (void *)buf, 1, 0);
    }
    slots = (uint32_t *)(p + 0x80);
    slots[idx] = (uint32_t)node;
    func_ov003_0214f718(p, idx, val, 0x42800000);
    func_02056bc0(p + 0x48, (void *)slots[idx]);
    o = (uint8_t *)slots[idx];
    func_0205f2f0((void *)*(uint32_t *)(*(uint8_t **)(o + 0x50) + 0x94), 1);
}
