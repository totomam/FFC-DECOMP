#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02165078(void *obj, void *a, uint32_t b, uint32_t c,
                                 uint32_t s5, uint32_t s6, uint32_t s7, uint32_t s8,
                                 uint32_t s9, uint32_t s10, uint32_t s11, uint32_t s12,
                                 uint32_t s13);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);

void func_ov003_02165380(uint8_t *p)
{
    void *node;
    uint16_t v;

    v = func_ov003_021481c0(*(uint16_t *)(p + 0x84));
    *(uint16_t *)(p + 0x84) = v;
    if (*(uint16_t *)(p + 0x84) != 0) {
        void *obj = func_0205681c(0x3c);
        node = obj;
        if (obj != 0) {
            node = func_ov003_02165078(obj, *(void **)(p + 0x80),
                                       *(uint16_t *)(p + 0x84), 0,
                                       0, 0,
                                       *(uint32_t *)(p + 0x8c),
                                       *(uint32_t *)(p + 0x90),
                                       *(uint32_t *)(p + 0x94),
                                       *(uint16_t *)(p + 0x86),
                                       *(uint32_t *)(p + 0x88),
                                       1, 0);
        }
        func_02056bc0(p + 0x14, node);
    }
    node = func_02056aec(p);
    func_02056bc0(p + 0x14, node);
}
