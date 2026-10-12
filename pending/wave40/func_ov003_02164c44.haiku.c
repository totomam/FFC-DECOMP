#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t x);
extern void func_ov003_02164884(void *self);
extern uint32_t func_020424e0(uint32_t x);
extern uint32_t func_ov003_021496bc(uint32_t a, uint16_t b, uint16_t c, uint32_t d,
                                    uint16_t e, uint32_t f, uint16_t g, uint16_t h, uint32_t i);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *self);

#define F16(off) (*(uint16_t *)((uint8_t *)p + (off)))
#define F32(off) (*(uint32_t *)((uint8_t *)p + (off)))

void func_ov003_02164c44(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    void *node;

    F16(0x84) = func_ov003_021481c0(F16(0x84));
    if (F16(0x84) != 0) {
        func_ov003_02164884(p);
        node = (void *)func_ov003_021496bc(func_020424e0(F32(0x80)), F16(0x84), F16(0x94), F32(0x98),
                                           F16(0x86), F32(0x8c), F16(0x88), F16(0x8a), F32(0x90));
        func_02056bc0(p + 0x14, node);
    }
    node = func_02056aec(p);
    func_02056bc0(p + 0x14, node);
}
