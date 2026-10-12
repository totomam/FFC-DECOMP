#include "ffc/types.h"

extern uint32_t func_0208e8e8(void *p, uint16_t m, void *q);
extern void func_020849c4(uint32_t a, uint32_t b, uint32_t c);
extern void func_020849ac(uint32_t a, uint32_t b, uint32_t c);
extern void func_02088978(void);
extern void func_0208898c(void);

typedef struct { uint16_t a[2]; uint16_t pad[0xfc]; } Blk;
typedef struct {
    Blk b[4];
    uint16_t x;
} S;

static inline uint16_t mk(int n) { return (uint16_t)(1 << n); }

void func_0208e728(uint8_t *p, int n, int flag) {
    uint16_t bit = mk(n);
    uint16_t mask = *(uint16_t *)(p + 0x80e);
    uint16_t idx;
    uint8_t *blk;

    if (!(mask & bit)) return;
    idx = *(uint16_t *)(p + 0x808);
    if (!(*(uint16_t *)(p + (idx << 9)) & bit)) {
        if (*(uint16_t *)(p + 0x818) != 1) return;
        idx = (idx + 1) & 3;
        if (!(*(uint16_t *)(p + (idx << 9)) & bit)) return;
    }
    blk = p + (idx << 9);
    {
        uint32_t res = func_0208e8e8(p, mask, blk + 4);
        if (flag) func_020849c4(flag, res, *(uint16_t *)(p + 0x810));
        else func_020849ac(0, res, *(uint16_t *)(p + 0x810));
    }
    func_02088978();
    *(uint16_t *)blk &= ~bit;
    *(uint16_t *)(blk + 2) |= bit;
    func_0208898c();
}
