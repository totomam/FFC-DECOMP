#include "ffc/types.h"

extern uint32_t func_ov000_0214f148(uint32_t x);
extern void func_ov000_021652a8(uint32_t a0, uint32_t a1, uint32_t a2, void *a3,
                                uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3);
extern void func_ov001_02182a68(uint32_t a0, uint32_t a1, uint32_t a2, void *a3, uint32_t s0);
extern uint32_t func_ov000_0216591c(void);
extern uint8_t data_ov001_02191b58[];
extern uint8_t data_ov001_02191d3c[];

typedef struct {
    uint8_t hdr[8];
    uint32_t w1;
    uint32_t w2;
    uint16_t h;
    uint8_t x;
    uint8_t flag;
    uint8_t pad[0x38];
} Buf;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint8_t p8[0x10];
    uint32_t f18;
    uint8_t p1c[0x18];
    int32_t f34;
    uint32_t f38;
    uint32_t f3c;
    uint16_t f40;
    uint8_t f42;
    uint8_t f43;
} A;

static inline uint32_t ld(uint32_t *p){return *p;}
static inline uint32_t ld16(uint16_t *p){return *p;}
static inline uint32_t ld8(uint8_t *p){return *p;}
void func_ov001_02182f78(A *a)
{
    Buf b;
    uint32_t v;
    uint32_t r;

    b.hdr[0] = data_ov001_02191b58[0];
    b.hdr[1] = data_ov001_02191b58[1];
    b.hdr[2] = data_ov001_02191b58[2];
    b.hdr[3] = data_ov001_02191b58[3];
    {
        uint8_t t4 = data_ov001_02191b58[4];
        uint8_t t5 = data_ov001_02191b58[5];
        b.hdr[4] = t4;
        b.hdr[5] = t5;
    }
    b.hdr[6] = 4;
    b.hdr[7] = 7;

    { uint32_t u = ld(&a->f4); b.w1 = (uint8_t)(u >> 24) | ((u >> 8) & 0xff00) | ((u << 8) & 0xff0000) | ((u << 24) & 0xff000000); }
    b.w2 = a->f3c;
    { int32_t t = ld16(&a->f40); b.h = (uint16_t)(((t >> 8) & 0xff) | ((t << 8) & 0xff00)); }
    b.x = a->f42;
    {
        int fl;
        if (a->f42 != 0 && a->f43 != 0) {
            fl = 1;
        } else {
            fl = 0;
        }
        b.flag = (uint8_t)fl;
    }

    r = func_ov000_0214f148(ld(&a->f3c));
    func_ov000_021652a8(7, 0, 8, data_ov001_02191d3c, a->f4, r, a->f40, a->f42);

    v = a->f0;
    if (v == 0xffffffff) {
        v = a->f18;
    }
    func_ov001_02182a68(v, a->f3c, a->f40, &b, 20);

    a->f38 = func_ov000_0216591c() + 0x2bc;
    a->f34 = 7;
}
