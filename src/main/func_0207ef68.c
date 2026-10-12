#include "ffc/types.h"

extern int func_0207ef1c(void *p, void *q, int n);

typedef struct {
    uint32_t w0;
    uint16_t h4;
    uint16_t h6;
    uint32_t w8;
} Ent;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Blk;

int func_0207ef68(uint8_t *a) {
    uint32_t buf[4];
    uint16_t *h = (uint16_t *)buf;
    Ent *e = (Ent *)(a + 0x30);
    uint8_t *obj = *(uint8_t **)(a + 8);
    uint8_t *p = *(uint8_t **)(obj + 0x20);
    int r;

    buf[0] = (uint32_t)obj;
    buf[1] = *(uint32_t *)(p + 0xc) + ((uint32_t)e->h4 << 3);
    r = func_0207ef1c(buf, buf + 2, 8);
    if (r == 0) {
        *(Blk *)(a + 0x20) = *(Blk *)e;
        if (e->h6 == 0 && e->w8 == 0) {
            *(uint16_t *)(a + 0x26) = h[6];
            *(uint32_t *)(a + 0x28) = *(uint32_t *)(p + 0xc) + buf[2];
        }
        *(uint32_t *)(a + 0x2c) = h[7] & 0xfff;
    }
    return r;
}
