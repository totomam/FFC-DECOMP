#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint64_t func_020882cc(void);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_0208898c(uint32_t v);
typedef struct { uint8_t pad0[0x50]; uint32_t f50; uint32_t f54; uint16_t f58; uint8_t f5a; uint8_t p; } Slot;
extern Slot data_ov000_0216de9c[];


void func_ov000_021496b8(uint8_t *ctx, uint32_t a, uint32_t b)
{
    uint32_t h = func_02088978();
    uint32_t now = (uint32_t)(func_020882cc() >> 16);
    Slot *s = data_ov000_0216de9c;
    int i;
    Slot *e;
    uint32_t best;
    uint32_t used;

    best = 0;
    for (i = 0; i < 4; i++) {
        e = &data_ov000_0216de9c[i];
        used = e->f5a;
        if (used != 0 && a != 0 && a == e->f54 && b != 0 && b == e->f58) {
            s = e;
            break;
        }
        if (best != 0xffffffff) {
            if (used == 0) {
                best = 0xffffffff;
                s = e;
            } else {
                uint32_t d = now - e->f50;
                if (d > best) {
                    best = d;
                    s = e;
                }
            }
        }
    }

    func_02084ca4(ctx + 0x74, s, 0x20);
    func_02084ca4(ctx, (uint8_t *)s + 0x20, 0x30);
    s->f50 = now;
    s->f5a = 1;
    s->f54 = a;
    s->f58 = (uint16_t)b;
    func_0208898c(h);
}
