#include "ffc/types.h"
extern int32_t func_ov000_0214ecc8(uint8_t *p, uint32_t v);
extern int32_t func_ov000_0214d75c(uint8_t *p);
int32_t func_ov000_0214d600(uint8_t *p, uint32_t v) {
    if (func_ov000_0214ecc8(p, v) != 0) return -28;
    { int r2 = 0; if (p) if ((*(int16_t *)(p + 0xac) & 1) != 0) r2 = 1; else r2 = 0;
    if (r2 == 0) return -39; }
    if (*(int16_t *)(p + 0xac) & 2) return -7;
    *(uint16_t *)(p + 0xb0) = v;
    if (*(int8_t *)(p + 0xaf) == 1) return func_ov000_0214d75c(p);
    return 0;
}
