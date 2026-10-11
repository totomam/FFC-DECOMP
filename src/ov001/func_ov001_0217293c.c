#include "ffc/types.h"

extern int32_t func_02092948(void *a, void *b);
extern int32_t func_ov000_021652a8(int32_t a, int32_t b, int32_t c, void *d, void *e, void *f, int32_t g, void *h, void *i);
extern int32_t func_ov001_02172a78(void *a, void *b);
extern uint8_t data_ov001_0218f4ec[];
extern uint8_t data_ov001_0218f544[];
extern uint8_t data_ov001_0218f4f0[];
extern uint8_t data_ov001_0218f442[];

int32_t func_ov001_0217293c(void *a, void *b)
{
    if (b == 0 || a == 0 || func_02092948(a, data_ov001_0218f4ec) == 0) {
        func_ov000_021652a8(8, 4, 1, data_ov001_0218f4f0, data_ov001_0218f544, data_ov001_0218f442, 0x74, a, b);
        return 0;
    }
    return func_ov001_02172a78(a, b);
}
