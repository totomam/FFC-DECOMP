#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t v);
extern void func_ov003_02164884(void *obj);
extern uint32_t func_020424e0(uint32_t v);
extern uint32_t func_ov003_02149620(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                    uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *obj);

void func_ov003_021649f4(uint8_t *p)
{
    uint32_t r;

    *(uint16_t *)(p + 0x84) = func_ov003_021481c0(*(uint16_t *)(p + 0x84));
    if (*(uint16_t *)(p + 0x84) != 0) {
        func_ov003_02164884(p);
        r = func_020424e0(*(uint32_t *)(p + 0x80));
        r = func_ov003_02149620(r, *(uint16_t *)(p + 0x84), *(uint16_t *)(p + 0x94),
                                *(uint16_t *)(p + 0x86), *(uint32_t *)(p + 0x8c),
                                *(uint16_t *)(p + 0x88), *(uint16_t *)(p + 0x8a),
                                *(uint32_t *)(p + 0x90));
        func_02056bc0(p + 0x14, (void *)r);
    }
    func_02056bc0(p + 0x14, func_02056aec(p));
}
