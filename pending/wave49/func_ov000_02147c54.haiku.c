#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern int32_t func_ov000_02147c30(uint32_t a, uint32_t b, uint32_t c, uint32_t d, void *s, int32_t skip);
extern void func_ov000_021453ac(void);
extern struct {
    uint8_t pad[0x18];
    int32_t (*fn)(void);
} data_ov000_0216bc60;

typedef struct {
    uint8_t pad0[8];
    uint8_t kind;
    uint8_t pad1[0x34 - 9];
    uint32_t pos;
    uint16_t f38;
    uint8_t pad2[0x3c - 0x3a];
    uint32_t cur;
    uint32_t f40;
} Obj;

#define NOW() ((uint32_t)(func_020882cc() >> 16))

int32_t func_ov000_02147c54(uint32_t a, uint32_t b, uint32_t c, uint32_t d, Obj *s)
{
    uint32_t total;
    uint32_t start;
    uint32_t t;
    uint32_t r6, n;
    int32_t skip;

    total = 0;
    s->f40 = 0;
    skip = 0;
    t = NOW();

    while (data_ov000_0216bc60.fn() && b != 0 && s->kind == 4 && (int32_t)(NOW() - t) < 0x9f) {
        start = s->pos;
        func_ov000_02147c30(a, b, c, d, s, skip);
        r6 = NOW();
        for (;;) {
            func_ov000_021453ac();
            if (!data_ov000_0216bc60.fn())
                break;
            if (s->kind != 4)
                break;
            if (s->pos == s->cur)
                break;
            if ((int32_t)(NOW() - r6) >= 15)
                break;
            if (skip == 0)
                continue;
            if (s->f38 == 0)
                continue;
            break;
        }

        n = s->cur - start;
        if (n > s->pos - start)
            n = 0;
        total += n;
        if (n != 0)
            t = NOW();
        s->pos = s->cur;

        if (s->kind == 4 && s->f38 == 0 && n == 0) {
            if (skip == 0) {
                r6 = NOW();
                while (data_ov000_0216bc60.fn() && (int32_t)(NOW() - r6) < 15) {
                    func_ov000_021453ac();
                    if (s->f38 != 0)
                        break;
                }
                if (s->f38 == 0)
                    skip = 1;
            }
        } else {
            skip = 0;
        }

        if (n >= b) {
            uint32_t k = n - b;
            a = c + k;
            b = d - k;
            c = 0;
            d = 0;
        } else {
            a += n;
            b -= n;
        }
    }

    return (int32_t)total;
}
