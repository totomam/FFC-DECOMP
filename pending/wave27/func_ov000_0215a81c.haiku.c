#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern int func_ov001_02175944(uint32_t a, void *b, void *c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern int func_ov000_0215a6b8(void);
extern uint8_t *data_ov000_02170060;

void func_ov000_0215a81c(uint32_t a, uint32_t b)
{
    uint8_t *g;
    uint64_t r;

    r = func_020882cc();
    g = data_ov000_02170060;
    *(uint32_t *)(g + 0x34) = (uint32_t)r;
    *(uint32_t *)(g + 0x38) = (uint32_t)(r >> 32);
    *(uint32_t *)(g + 0x30) = 1;
    g = data_ov000_02170060;
    func_ov001_02175944(*(uint32_t *)g, g + 0x48, g + 0x52 * 4, 1, 0, a, 0);
    if (func_ov000_0215a6b8() == 0) {
        g = data_ov000_02170060;
        *(uint32_t *)(g + 4) = b;
    }
}
