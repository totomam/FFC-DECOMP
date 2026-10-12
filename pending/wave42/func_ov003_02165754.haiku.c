#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_021654bc(void *obj, uint32_t a80, uint16_t a86, uint16_t a88,
                                 uint32_t a90, uint32_t a94, uint32_t a98, uint32_t a9c,
                                 uint16_t a8a, uint32_t a8c, uint8_t a84);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *obj);

void func_ov003_02165754(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *node;

    *(uint16_t *)(p + 0x86) = func_ov003_021481c0(*(uint16_t *)(p + 0x86));
    *(uint16_t *)(p + 0x88) = func_ov003_021481c0(*(uint16_t *)(p + 0x88));

    if (*(uint16_t *)(p + 0x86) != 0 && *(uint16_t *)(p + 0x88) != 0) {
        node = func_0205681c(0x34);
        if (node != 0) {
            node = func_ov003_021654bc(node, *(uint32_t *)(p + 0x80),
                                       *(uint16_t *)(p + 0x86), *(uint16_t *)(p + 0x88),
                                       *(uint32_t *)(p + 0x90), *(uint32_t *)(p + 0x94),
                                       *(uint32_t *)(p + 0x98), *(uint32_t *)(p + 0x9c),
                                       *(uint16_t *)(p + 0x8a), *(uint32_t *)(p + 0x8c),
                                       *(uint8_t *)(p + 0x84));
        }
        func_02056bc0(p + 0x14, node);
    }
    node = func_02056aec(self);
    func_02056bc0(p + 0x14, node);
}
