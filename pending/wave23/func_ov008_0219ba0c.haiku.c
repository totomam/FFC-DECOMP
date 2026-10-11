#include "ffc/types.h"

extern uint32_t func_0201ed30(uint32_t g, uint32_t v, uint32_t b, void *out);
extern uint32_t func_02036cd8(const void *object);
extern void *func_020197b4(void *obj, uint32_t v);
extern uint32_t data_020b93b8;
extern void *data_020b8e44;

uint32_t func_ov008_0219ba0c(uint8_t *a, uint32_t b)
{
    uint32_t buf[6];
    func_0201ed30(data_020b93b8, *(uint32_t *)(a + 0x118), b, buf);
    {
        uint32_t v = func_02036cd8(buf);
        uint8_t *o = (uint8_t *)func_020197b4(data_020b8e44, v);
        return *(uint32_t *)(o + 0x1c);
    }
}
