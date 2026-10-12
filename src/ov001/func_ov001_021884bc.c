#include "ffc/types.h"

extern int func_ov000_02164adc(void);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_ov001_021885e0(int a, int b, int c);
extern void func_02086b04(uint8_t *dst, uint32_t n, const uint8_t *src, uint8_t *p);
extern int func_ov000_02158d6c(uint8_t *a, uint32_t b, uint8_t *c, uint32_t d);
extern int func_ov001_02188ba0(void *a, void *b, void *c, void *d, void *e, void *f, void *g);
extern void func_ov000_02158f58(uint32_t *p);
extern void func_ov000_02159014(uint32_t a, uint32_t b);
extern void func_020871d8(int x);
extern void func_ov001_02188470(void);
extern void func_ov001_02188460(void);
extern uint8_t data_ov001_02194334[];
extern uint8_t data_ov001_02194348[];

typedef struct {
    uint8_t pad[0x18];
    uint8_t *base;
} DataBlk;

extern DataBlk data_ov001_02195764;

void func_ov001_021884bc(void)
{
    uint8_t buf1[0x100];
    uint8_t buf2[0x190];
    uint32_t v;
    uint8_t *p;
    uint32_t sum;
    int r;
    DataBlk *d;

    p = (uint8_t *)0x64;
    for (;;) {
        switch (func_ov000_02164adc()) {
        case 3:
            d = &data_ov001_02195764;
            p = d->base;
            sum = func_02092864(p + 0x48);
            sum = sum + func_02092864(data_ov001_02194334);
            if (sum > 0xff) {
                { int n = 8; func_ov001_021885e0(0, n, n - 9); }
                return;
            }
            func_02086b04(buf1, 0x100, data_ov001_02194348, p + 0x48);
            p = d->base;
            sum = func_02092864(p + 0x89);
            r = func_ov000_02158d6c(p + 0x89, sum, buf2, 0x190);
            if (r < 0) {
                { int n = 8; func_ov001_021885e0(0, n, n - 9); }
                return;
            }
            p = d->base;
            r = func_ov001_02188ba0((void *)func_ov001_02188460, (void *)func_ov001_02188470,
                                    buf1, buf2, p, p + 0x20, (void *)func_ov001_021885e0);
            if (r == 0) {
                { int n = 8; func_ov001_021885e0(0, n, n - 9); }
                return;
            }
            *(uint32_t *)(d->base + 0x40) = 1;
            { int m = 0; func_ov001_021885e0(0, m, m - 1); }
            return;
        case 4:
            func_ov000_02158f58(&v);
            func_ov000_02159014(0xd, v);
            { int k = 3; func_ov001_021885e0(0, k, k - 4); }
            return;
        case 5:
            { int j = 6; func_ov001_021885e0(0, j, j - 7); }
            return;
        default:
            func_020871d8((int)p);
            break;
        }
    }
}
