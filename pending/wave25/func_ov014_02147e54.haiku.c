#include "ffc/types.h"

extern void *func_02056830(uint32_t size);

typedef struct {
    uint8_t pad0[0x1c];
    uint16_t *buf;
    uint8_t pad1[0x2c - 0x20];
    uint32_t size;
} S;

void func_ov014_02147e54(S *p)
{
    uint32_t i;
    uint32_t n = 0x600;
    p->size = n;
    p->buf = func_02056830(n);
    for (i = 0; i < (n >> 1); i++) {
        p->buf[i] = (uint16_t)(0x1000 + i);
    }
}
