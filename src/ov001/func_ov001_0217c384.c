#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
} S;

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_ov001_021784f0(uint32_t a, uint32_t b, void *c);
extern uint8_t data_ov001_021910b4[];

uint32_t func_ov001_0217c384(uint32_t a, uint32_t b, uint32_t c, S *p)
{
    uint8_t buf[0x40];
    uint32_t f4 = p->f4;
    uint32_t f0 = p->f0;
    uint32_t f8 = p->f8;
    if (p == 0) {
        return 3;
    }
    func_02086ad4(buf, (uint32_t)data_ov001_021910b4, c, f0, f4, f8);
    return func_ov001_021784f0(a, b, buf);
}
