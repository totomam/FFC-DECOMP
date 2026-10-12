#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_02005988();
extern uint32_t data_020ae6a0[];

void func_02039244(void *a, const uint32_t *p, uint32_t key)
{
    uint32_t i = 0;
    uint8_t *x = (uint8_t *)func_02052d90((const void *)p[1], p[2]);

    while (i < ((uint32_t *)x)[1]) {
        x = (uint8_t *)func_02052d90((const void *)p[1], p[2]);
        if (key == *(uint16_t *)(x + ((uint32_t *)(x + ((uint32_t *)x)[2]))[i])) {
            uint8_t *e;
            x = (uint8_t *)func_02052d90((const void *)p[1], p[2]);
            e = x + ((uint32_t *)(x + ((uint32_t *)x)[2]))[i];
            func_02005988(a, e + ((uint32_t *)e)[1], e);
            return;
        }
        i++;
        x = (uint8_t *)func_02052d90((const void *)p[1], p[2]);
    }
    func_02005988(a, data_020ae6a0);
}
