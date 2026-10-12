#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
    uint16_t c;
} S3;

extern int32_t func_0202e10c(uint8_t *a, uint8_t *b);
extern void func_02022f0c(void *a, int32_t b, uint16_t c, S3 d, uint8_t f);
extern uint8_t data_020adf3c[];
extern uint8_t data_020adf44[];

int32_t func_020306e0(uint8_t *p, int32_t unused, uint16_t *out)
{
    int32_t r4 = 0;
    uint8_t v;
    uint8_t *rec;
    uint8_t e;
    S3 t;

    if (p[0x449] != 0) {
        int32_t x = *(int32_t *)(p + 0x40c);
        r4 = x >> 12;
        if (r4 < 4) {
            *out = (uint16_t)r4;
        }
    }

    if (func_0202e10c(p + 0x13c, data_020adf3c) == 0) {
        v = 1;
    } else {
        if (func_0202e10c(p + 0x13c, data_020adf44) != 0) {
            goto rest;
        }
        v = 0;
    }
    rec = p + r4 * 10;
    rec[0x498] = v;

rest:
    rec = p + r4 * 10;
    e = rec[0x498];
    func_02022f0c(*(void **)(p + 0x98), r4, *(uint16_t *)(rec + 0x496), *(S3 *)(rec + 0x490), e);
    return 4;
}
