#include "ffc/types.h"

extern void *func_02064aac(void *p, uint32_t v);
extern void func_0205827c(void *ctx, void *p, uint32_t a, uint32_t b);
extern void func_02065528(void *p);

typedef struct {
    uint8_t pad[0x80];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
    uint16_t f8c;
} Obj;

void func_ov002_021ad938(Obj *p)
{
    uint32_t v;
    uint32_t flags;
    uint32_t out;
    void *ctx;

    ctx = func_02064aac(p, 0);

    if (p->f80 != 0 || p->f88 != 0) {
        p->f88 += 8;
        if (p->f88 >= 0x1ff) {
            p->f88 = 0;
        }
        if (p->f88 == 0) {
            p->f84 ^= 1;
        }
        flags = p->f80;
        if (!(flags & (1u << p->f84))) {
            p->f84 ^= 1;
        }
        v = p->f88;
        if (v >= 0x100) {
            v = 0x1ff - v;
        }
        switch (p->f84) {
        case 0:
            out = (v >> 3) << 5;
            break;
        case 1:
            out = v >> 3;
            break;
        default:
            goto done;
        }
        out |= 2u << 14;
        p->f8c = (uint16_t)out;
    }
done:
    func_0205827c(ctx, &p->f8c, 1, 1);
    func_02065528(p);
}
