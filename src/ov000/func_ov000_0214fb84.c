#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint8_t *ptr;
} Outer;

extern Outer data_ov000_0216e214;
extern void func_ov000_0214fbb4(int16_t v, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_ov000_0214fb84(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint8_t *p = data_ov000_0216e214.ptr;
    int16_t v = *(int16_t *)(p + 0x12da);
    *(int16_t *)(p + 0x12da) = 0;
    func_ov000_0214fbb4(v, a, b, c, d);
}
