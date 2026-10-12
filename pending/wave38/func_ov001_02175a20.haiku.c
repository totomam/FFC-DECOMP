#include "ffc/types.h"

typedef int (*cb_t)(void *, void *, uint32_t, uint32_t);

extern uint8_t data_ov001_021900ec[];
extern int func_ov001_0217ef6c(void *a, void *b, uint32_t c, uint32_t d);
extern int func_ov001_0217cecc(void *p, uint32_t a, uint32_t b, uint32_t c,
                               uint32_t d, uint32_t e, uint32_t f, uint32_t g,
                               uint32_t h, cb_t cb, uint32_t i);

int func_ov001_02175a20(void **p, uint32_t a1, uint32_t a2, uint32_t a3,
                        uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                        cb_t cb, uint32_t h)
{
    uint32_t *obj;

    if (p == 0 || (obj = (uint32_t *)*p) == 0) {
        return 2;
    }
    if (cb == 0) {
        func_ov001_0217ef6c(p, data_ov001_021900ec, a2, a3);
        return 2;
    }
    if (obj[0x108 / 4] != 0) {
        uint32_t buf[4] = {0, 0, 0, 0};
        buf[2] = 0x601;
        cb(p, buf, h, a3);
        return 0;
    }
    return func_ov001_0217cecc(p, a1, a2, a3, s0, s1, s2, 0, s3, cb, h);
}
