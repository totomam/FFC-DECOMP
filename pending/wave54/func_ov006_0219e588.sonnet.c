#include "ffc/types.h"

typedef struct { uint8_t pad0[8]; uint8_t a[0x130]; uint8_t b[0x130]; uint8_t pad[0x28 + 0x100 - 0x130 + 0x130]; } S;

extern uint8_t data_ov006_021b8b1c[];
extern uint32_t data_ov006_021ba1dc[];
extern int func_ov006_0219f078(uint16_t len);
extern int func_ov006_0219e34c(uint8_t *rec, uint8_t *dst);
extern int func_ov006_0219e4a0(uint8_t *rec, uint8_t *dst);
extern int func_ov006_0219e558(uint8_t *rec, int off);

int func_ov006_0219e588(int a, uint8_t *p, int n, uint8_t *b, int c)
{
    uint32_t flags = 0;
    int r;
    uint8_t *h;

    if (n <= 0) {
        return -2;
    }
    for (;;) {
        h = p;
        if (p[0] == data_ov006_021b8b1c[a]) {
            break;
        }
        {
            int s = func_ov006_0219f078(*(uint16_t *)(p + 2)) + 4;
            n -= s;
            p += s;
        }
        if (n <= 0) {
            return -4;
        }
    }
    {
        int lenleft = func_ov006_0219f078(*(uint16_t *)(h + 2));
        uint8_t *base;

        p += 4;
        base = b + ((a * 0x35) << 4);
        do {
            switch (p[0]) {
            case 3:
                r = func_ov006_0219e34c(p, base + 8);
                flags |= 1;
                break;
            case 4:
                r = func_ov006_0219e34c(p, base + 0x138);
                flags |= 2;
                break;
            case 5:
                r = func_ov006_0219e4a0(p, base + 0x268);
                flags |= 4;
                break;
            case 6:
                r = func_ov006_0219e4a0(p, base + 0x2d8);
                flags |= 8;
                break;
            case 10:
                r = func_ov006_0219e558(p, c + ((a + 3) << 7));
                break;
            default:
                r = -3;
                break;
            }
            if (r != 0) {
                return r;
            }
            {
                int s = func_ov006_0219f078(*(uint16_t *)(p + 2)) + 4;
                lenleft -= s;
                p += s;
            }
        } while (lenleft > 0);
    }
    data_ov006_021ba1dc[12] |= flags;
    return 0;
}
