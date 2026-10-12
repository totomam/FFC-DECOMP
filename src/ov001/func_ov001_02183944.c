#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
    uint32_t c;
} S2;

extern void func_ov000_021652a8(int a, int b, int c, void *d, ...);
extern uint32_t func_ov000_0216591c(void);
extern void func_ov001_02182a68(uint32_t a, uint32_t b, uint16_t c, void *d, int e);
extern char data_ov001_0219254c[];
extern char data_ov001_02192568[];
extern char data_ov001_02192574[];

void func_ov001_02183944(uint32_t *p, uint8_t *q, void *r2)
{
    uint32_t one = 1;
    uint32_t t;

    switch (q[7]) {
    case 1:
        {
            uint32_t idx = q[0xc];
            if (idx > 3) {
                return;
            }
            func_ov000_021652a8(7, 0, 8, data_ov001_0219254c, idx);
        }
        ((uint32_t *)((uint8_t *)p + ((uint32_t)q[0xc] << 2)))[8] = one;
        if (p[7] == 2 && p[9] != 0 && p[10] != 0 && p[11] != 0) {
            if (p[0] == one - 2 || p[8] != 0) {
                p[7] = 3;
                t = func_ov000_0216591c();
                p[14] = t + 0xea60;
                ((void (*)(uint32_t, uint32_t))p[3])(p[7], p[5]);
            }
        }
        break;
    case 2:
        func_ov000_021652a8(7, 0, 8, data_ov001_02192568);
        q[7] = 3;
        {
            S2 *s = (S2 *)r2;
            int x = s->b;
            uint16_t v = (uint16_t)(((x >> 8) & 0xff) | ((x << 8) & 0xff00));
            func_ov001_02182a68(p[6], s->c, v, q, 0x15);
        }
        break;
    case 0xe:
        func_ov000_021652a8(7, 0, 8, data_ov001_02192574, p[1]);
        p[7] = 8;
        break;
    }
}
