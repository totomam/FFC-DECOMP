#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_ov009_021a2f2c(uint32_t a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_ov009_021a3150(uint32_t a, void *b, uint32_t c);
extern void func_ov011_021c5b98(void *p);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov011_021cbe20[];
extern uint8_t data_ov011_021cb448[];

void func_ov011_021c5b4c(uint8_t *p)
{
    uint32_t r = func_0205681c(0x1cc);
    if (r != 0) {
        r = func_ov009_021a2f2c(r, data_ov011_021cbe20, 0, 0, 0);
    }
    *(uint32_t *)(p + 0xf0) = r;
    func_ov009_021a3150(r, data_ov011_021cb448, 0xc);
    func_ov011_021c5b98(p);
    func_02056bc0(p + 0x48, *(void **)(p + 0xf0));
}
