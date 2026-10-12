#include "ffc/types.h"

extern uint32_t func_ov000_02159000(void);
extern void func_ov000_0215b70c(void);
extern void func_ov000_0215b7a4(uint32_t x);
extern void func_ov000_0215bf3c(uint32_t x);
extern void func_ov000_0215b9ac(void);
extern void func_ov000_0215c4c8(uint32_t a, uint8_t b, uint32_t c, void *d, uint32_t e,
                                uint32_t f, uint32_t g, uint32_t h, uint32_t i,
                                uint32_t j, uint32_t k, uint32_t l);
extern uint8_t data_ov000_02170064[];

int func_ov000_0215afe8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e,
                        uint32_t f, uint32_t g, uint32_t h, uint32_t i,
                        uint32_t j, uint32_t k, uint32_t l)
{
    if (func_ov000_02159000() != 0 || *(uint32_t *)(*(uint8_t **)(data_ov000_02170064 + 4) + 0x24) != 3) {
        return 0;
    }
    {
        func_ov000_0215b70c();
        *(uint32_t *)(*(uint8_t **)(data_ov000_02170064 + 4) + 0x80) = d;
        *(uint32_t *)(*(uint8_t **)(data_ov000_02170064 + 4) + 0x84) = e;
        func_ov000_0215b7a4(4);
        func_ov000_0215bf3c(0);
        func_ov000_0215c4c8(a, (uint8_t)(b - 1), c, (void *)func_ov000_0215b9ac, 0,
                            f, g, h, i, j, k, l);
        return 1;
    }
}
