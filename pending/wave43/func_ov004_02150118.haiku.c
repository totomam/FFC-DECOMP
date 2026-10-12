#include "ffc/types.h"

typedef struct {
    int32_t b;
    int32_t c;
    int32_t d;
} Args3;

extern void func_ov004_0214e830(void *out, void *self, int32_t b, int32_t d, int32_t d2, int32_t c);
extern void *func_ov004_02153504(void *p);
extern int32_t func_ov004_021507f0(void *self, uint32_t idx);

int32_t func_ov004_02150118(uint8_t *self, Args3 p, uint32_t *out)
{
    int32_t tmp[2];
    uint32_t i;
    int32_t x;
    int32_t y;

    func_ov004_0214e830(tmp, self, p.b, p.d, p.d, p.c);
    x = p.c + tmp[0];
    y = p.d + tmp[1];

    for (i = 0; i < *(uint32_t *)(self + 0x110); i++) {
        uint8_t *e = *(uint8_t **)(self + 0x10c) + i * 0x38;
        int32_t dx = *(int32_t *)e - x;
        int32_t dy = *(int32_t *)(e + 4) - y;
        if (e[0x35] != 0) {
            uint8_t *q = (uint8_t *)func_ov004_02153504(*(void **)(self + 0x88));
            if ((uint32_t)(dx * dx + dy * dy) <= *(uint32_t *)(q + 0x14)) {
                if (func_ov004_021507f0(self, i) != 0) {
                    *out = i;
                    return 1;
                }
            }
        }
    }
    return 0;
}
