#include "ffc/types.h"

extern void func_02088b3c(uint8_t *buf);
extern void func_ov001_02189aa8(uint16_t *out, uint8_t v, int n);
extern void func_ov001_021889d4(void *ctx, uint16_t *out, int n);

void func_ov001_02189994(void *ctx)
{
    uint8_t buf[6];
    uint16_t out[6];
    int i;

    func_02088b3c(buf);
    for (i = 0; i < 6; i++) {
        func_ov001_02189aa8(&out[i], buf[i], 2);
    }
    func_ov001_021889d4(ctx, out, 12);
}
