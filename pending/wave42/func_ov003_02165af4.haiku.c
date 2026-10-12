#include "ffc/types.h"

typedef struct {
    uint8_t pre[2];
    uint8_t mode;
    uint8_t b;
    uint32_t w1;
    uint32_t w2;
    uint32_t w3;
    uint32_t w4;
    uint32_t w5;
    uint32_t w6;
    uint32_t w7;
    uint32_t w8;
    uint32_t w9;
} Blk;

typedef struct {
    uint32_t x;
    uint8_t f;
    uint8_t pad[3];
} Hdr;

extern uint32_t data_020b93b8;
extern uint32_t func_ov003_021481c0(uint32_t a);
extern void func_0201d14c(uint32_t dev, uint32_t id, Blk *blk);
extern void func_0201d0ac(uint32_t dev, uint32_t id, Blk *blk);
extern uint32_t *func_ov003_021464f4(uint32_t a, uint32_t id);
extern void func_ov003_02158528(uint32_t *p, Blk s);

void func_ov003_02165af4(uint32_t a, uint32_t b, uint32_t c, uint32_t d, Hdr h, uint32_t e, uint32_t *p)
{
    Blk blk;
    uint32_t *r6;
    Hdr *hp;

    b = func_ov003_021481c0(b);
    if (b == 0) {
        return;
    }
    func_0201d14c(data_020b93b8, b, &blk);
    hp = &h;
    (void)0;
    if (*(volatile uint8_t *)&hp->f) {
        blk.mode = 2;
        blk.w1 = c;
        blk.w2 = d;
        blk.w3 = h.x;
        blk.w4 = p[0];
        blk.w5 = e;
    } else {
        blk.mode = 3;
        blk.w1 = c;
        blk.w2 = d;
        blk.w3 = h.x;
        blk.w4 = p[0];
        blk.w5 = p[1];
        blk.w6 = p[2];
        blk.w7 = p[3];
        blk.w8 = e;
    }
    func_0201d0ac(data_020b93b8, b, &blk);
    if (a == 0) {
        return;
    }
    r6 = func_ov003_021464f4(a, b);
    if (r6 == 0) {
        return;
    }
    func_ov003_02158528(r6, blk);
}
