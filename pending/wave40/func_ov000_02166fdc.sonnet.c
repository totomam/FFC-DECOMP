#include "ffc/types.h"

extern void *func_ov000_02166414(const char *p);
extern void func_ov000_021652a8(int a, int b, int c, const void *d);
extern int func_ov000_0216888c(void *a, void *b, void *c, int d, int e);
extern void func_ov000_02168848(void *a);
extern void func_ov000_02166434(void);
extern const char data_ov000_0216b7fc[];
extern const char data_ov000_0216b944[];

typedef struct {
    int f0;
    int f4;
    void *f8;
    int fc;
} Ctx;

int func_ov000_02166fdc(const char *p) {
    volatile uint8_t buf[44];
    uint32_t tmp[4];
    Ctx *ctx;
    uint32_t n;
    int rv;

    ctx = (Ctx *)func_ov000_02166414(p);
    if (ctx->fc == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b7fc);
        return 3;
    }
    if (p == 0 || p[0] == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b944);
        return 10;
    }
    {
        volatile uint8_t *d = buf;
        const uint8_t *s = (const uint8_t *)p;
        n = 16;
        do {
            *d = *s;
            s++;
            d++;
            n--;
        } while (n != 0);
    }
    rv = func_ov000_0216888c(ctx->f8, tmp, (void *)func_ov000_02166434, 0, 0);
    if (rv != -1) {
        func_ov000_02168848(ctx->f8);
    }
    return 0;
}
