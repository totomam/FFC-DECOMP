#include "ffc/types.h"

extern void func_ov009_021a4084(void *self, uint32_t v);
extern void func_ov010_021c95e4(void *self, void *blk);
extern void func_020367a8(void *blk);
extern uint32_t *data_0213df18;
extern char data_ov010_021d1d74[];
extern char data_020ae664[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Quad;

typedef struct {
    void *p;
    uint16_t h[21];
    uint32_t w;
    uint8_t b[20];
    Quad q;
} Blk;

void *func_ov010_021c9630(uint8_t *r5, uint8_t *r4)
{
    Blk blk;
    uint32_t n;
    uint16_t *dst;
    uint16_t *src;
    uint8_t *s8;
    uint8_t *d8;

    func_ov009_021a4084(r5, data_0213df18[8]);

    *(void **)r5 = data_ov010_021d1d74;
    *(uint32_t *)(r5 + 0x290) = 0;
    *(uint32_t *)(r5 + 0x294) = 0;
    *(uint32_t *)(r5 + 0x298) = 0;
    *(uint32_t *)(r5 + 0x2ac) = 0;
    *(uint32_t *)(r5 + 0x2c8) = (uint32_t)r4;

    src = (uint16_t *)(r4 + 0x14);
    blk.p = data_020ae664;
    dst = blk.h;
    for (n = 0x15; n != 0; n--) {
        *dst = *src;
        src++;
        dst++;
    }

    blk.w = *(uint32_t *)(r4 + 0x40);

    s8 = r4 + 0x44;
    d8 = (uint8_t *)blk.b;
    for (n = 0x14; n != 0; n--) {
        *d8 = *s8;
        s8++;
        d8++;
    }

    blk.q = *(Quad *)(r4 + 0x58);

    func_ov010_021c95e4(r5, &blk);
    func_020367a8(&blk);

    r5[0x27b] = r4[8];
    r5[0x27b + 0x11] = r4[0xb];
    r5[0x27b + 0x12] = r4[0xc];
    r5[0x27b + 0xd] = r4[9];
    r5[0x27b + 0xe] = r4[0xa];

    return r5;
}
