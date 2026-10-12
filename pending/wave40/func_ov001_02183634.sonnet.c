#include "ffc/types.h"

extern int func_ov000_021652a8(int a, int b, int c, void *d, uint32_t e);
extern int func_ov001_02182a68(void *a, uint32_t b, uint16_t c, void *d, int e);
extern uint8_t data_ov001_02191b58[];
extern uint8_t data_ov001_021922c4[];

typedef struct {
    uint8_t pad0[4];
    uint32_t w4;
    uint32_t w8;
    uint8_t pad1[0xc];
    void *p18;
} A;

typedef struct {
    uint8_t pad0[2];
    uint16_t h;
    uint32_t w4;
} B;

typedef struct {
    uint8_t hdr[8];
    uint32_t w;
    uint8_t b;
    uint8_t rest[0x3b];
} Buf;

static inline uint32_t bs32(uint32_t r5)
{
    return ((r5 << 24) & 0xff000000) | ((r5 << 8) & 0x00ff0000) |
           ((r5 >> 8) & 0x0000ff00) | (r5 >> 24);
}

int func_ov001_02183634(A *a, B *b)
{
    Buf buf;
    uint32_t r5;

    buf.hdr[0] = data_ov001_02191b58[0];
    buf.hdr[1] = data_ov001_02191b58[1];
    buf.hdr[2] = data_ov001_02191b58[2];
    buf.hdr[3] = data_ov001_02191b58[3];
    buf.hdr[4] = data_ov001_02191b58[4];
    buf.hdr[5] = data_ov001_02191b58[5];
    buf.hdr[6] = 4;
    buf.hdr[7] = 6;

    r5 = a->w4;
    buf.w = bs32(r5);
    buf.b = (uint8_t)a->w8;

    func_ov000_021652a8(7, 0, 8, data_ov001_021922c4, r5);

    {
        int h = b->h;
        return func_ov001_02182a68(a->p18, b->w4,
            (uint16_t)(((h << 8) & 0xff00) | ((h >> 8) & 0xff)), &buf, 0x15);
    }
}
