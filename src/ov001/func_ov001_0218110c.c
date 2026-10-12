#include "ffc/types.h"

extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern uint32_t func_ov000_0216591c(void);
extern int32_t func_ov001_02180054(void *self, uint32_t value);
extern const uint8_t data_ov001_02191a1c[];

int32_t func_ov001_0218110c(void *self, uint8_t *p, uint32_t kind)
{
    uint32_t v;
    uint8_t *b;
    if (*(void **)((uint8_t *)self + 0x34) == 0) {
        return 1;
    }
    if (kind != 8) {
        return 1;
    }
    if (func_02090410(p, data_ov001_02191a1c, 4) != 0) {
        return 1;
    }
    b = (uint8_t *)&v;
    b[0] = p[4];
    b[1] = p[5];
    b[2] = p[6];
    b[3] = p[7];
    if (func_ov001_02180054(self, func_ov000_0216591c() - v) != 0) {
        return 1;
    }
    return 0;
}
