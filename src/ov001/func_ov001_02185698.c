#include "ffc/types.h"

extern uint8_t func_ov001_02185604(void *ctx, uint8_t c);

void func_ov001_02185698(void *ctx, uint8_t *buf, int32_t n)
{
    int32_t i;
    for (i = 0; i < n; i++) {
        buf[i] = func_ov001_02185604(ctx, buf[i]);
    }
}
