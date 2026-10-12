#include "ffc/types.h"
extern void func_02069528(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_02036750(void *p, void *q);
extern uint32_t func_0201bd84(uint32_t v, uint32_t id);
typedef struct { uint8_t b; } S1;
extern void func_ov009_0219a6d8(void *p, uint32_t v, S1 w);
extern uint32_t data_ov009_021b09ec[];
extern uint32_t data_020b93b8;

typedef struct { uint32_t a, b, c; } E3;

#define ZG(off) do { uint32_t *z_ = (uint32_t *)(p + (off)); E3 *e_ = (E3 *)z_; z_[0] = r4; e_->b = r4; e_->c = r4; } while (0)

void *func_ov009_021a4084(uint8_t *p, uint32_t x)
{
    uint32_t r4 = 0;
    S1 bw;
    uint32_t idx;
    uint32_t z2;

    func_02069528(p, x, 0, 0);
    *(uint32_t *)p = (uint32_t)data_ov009_021b09ec;
    *(uint32_t *)(p + 0xbc) = r4;
    *(uint32_t *)(p + 0xc0) = r4;
    *(uint32_t *)(p + 0xc4) = r4;
    *(uint32_t *)(p + 0xc8) = r4;
    *(uint32_t *)(p + 0xcc) = r4;
    *(uint32_t *)(p + 0xd0) = r4;

    *(uint32_t *)(p + 0x180) = r4;
    ZG(0x184);
    ZG(0x190);
    ZG(0x19c);
    ZG(0x1a8);
    ZG(0x1b4);
    ZG(0x1c0);
    ZG(0x1cc);
    ZG(0x1d8);
    ZG(0x1e4);
    ZG(0x1f0);
    ZG(0x1fc);
    ZG(0x208);
    ZG(0x214);

    func_02036750(p + 0x220, p + 0x214);

    p[0x278] = r4;
    p[0x279] = r4;
    p[0x27a] = r4;
    p[0x27b] = r4;

    if (func_0201bd84(data_020b93b8, 0x27) != 0) {
        r4 = 1;
    }

    idx = 0x27c;
    p[idx] = r4;
    z2 = 0;
    p[idx + 1] = z2;
    p[idx + 2] = z2;
    p[idx + 3] = z2;
    p[idx + 4] = z2;
    p[idx + 5] = z2;
    p[idx + 0xc] = z2;
    p[idx + 0xd] = z2;
    p[idx + 0xe] = z2;
    p[idx + 0xf] = z2;
    p[idx + 0x10] = z2;
    p[idx + 0x11] = z2;

    bw.b = 0;
    func_ov009_0219a6d8(p + idx - 0x68, *(uint32_t *)(p + idx - 0x64), bw);

    return p;
}
