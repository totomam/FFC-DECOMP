#include "ffc/types.h"

extern void func_ov000_0215509c(uint32_t a, uint32_t b, void *c);
extern void func_ov001_02175b28(int a, uint32_t b, void *c);
extern int func_ov000_0215a6b8(void);
extern int func_ov001_02175a94(int a, uint32_t b, uint32_t c, uint32_t d, void *e, uint32_t f);
extern int func_ov000_0215a864(void);
extern int func_02092948(void *a, void *b);
extern void func_ov000_02155310(uint32_t a, void *b, uint32_t c);
extern int func_ov000_0215a81c(void *f, int n);
extern void func_ov000_0215a70c(void);
extern int func_ov000_0215a9c4(int a, uint32_t *st);
extern uint32_t *data_ov000_02170060;

int func_ov000_0215a9c4(int a, uint32_t *st)
{
    uint8_t b3[0x10];
    uint8_t b2[0x10];
    uint8_t b1[0x20];
    uint32_t *g;
    int r;

    if (st[0] != 0) {
        return a;
    }
    g = data_ov000_02170060;
    if (g[1] == 3) {
        if (((int8_t *)st)[0x8e] == 0) {
            func_ov000_0215509c(g[7] + 4, g[3], b1 + 2);
            func_ov001_02175b28(a, 0x705, b1 + 2);
            r = func_ov000_0215a6b8();
            if (r != 0) {
                return r;
            }
            g = data_ov000_02170060;
            g[1] = 4;
            func_ov001_02175a94(a, st[1], 0, 0, (void *)func_ov000_0215a9c4, 0);
            return func_ov000_0215a6b8();
        } else {
            ((void (*)(int))0x021759ec)(a);
            r = func_ov000_0215a864();
            g = data_ov000_02170060;
            g[1] = 1;
            return r;
        }
    } else if (g[1] == 4) {
        func_ov000_0215509c(g[7] + 4, g[3], b2 + 1);
        r = func_02092948((int8_t *)st + 0x8e, b2 + 1);
        if (r == 0) {
            g = data_ov000_02170060;
            func_ov000_0215509c((uint32_t)g + 0x3c, g[3], b3 + 2);
            func_ov000_02155310(g[7], &g[15], st[1]);
            ((void (*)(int))0x021759ec)(a);
            return func_ov000_0215a81c((void *)func_ov000_0215a70c, 2);
        }
    } else {
        return a;
    }
    func_ov001_02175a94(a, st[1], 0, 0, (void *)func_ov000_0215a9c4, 0);
    return func_ov000_0215a6b8();
}
