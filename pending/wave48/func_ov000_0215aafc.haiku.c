#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint32_t *p;
} Glob;

extern Glob data_ov000_02170064;
extern void *func_ov000_0215917c(uint32_t size, uint32_t align);
extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_ov000_02158fec(void);
extern void func_ov000_0215d998(void);
extern void func_ov000_0215bb24(void);
extern void func_ov000_0215bf00(void);
extern void func_ov000_0215bf0c(void);
extern void func_ov000_0215b70c(void);
extern void func_ov000_0215b95c(void);
extern void func_ov000_0215a52c(void *a, void *b, void *c, uint32_t d, uint32_t e, void *f, void *g, uint32_t h);
extern void func_ov000_021595f8(void *a, void *b, void *c, uint32_t d, uint32_t e);
extern void func_ov000_0215c240(void *a, void *b, void *c, void *d, const void *e, const void *f, uint32_t g, uint32_t h);
extern void func_ov000_0216410c(void *p);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02084ca4(const void *src, void *dst, uint32_t n);

void func_ov000_0215aafc(uint8_t *a, uint32_t b, const uint8_t *s, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    uint32_t n;
    uint8_t *buf;

    data_ov000_02170064.p = (uint32_t *)func_ov000_0215917c(4, 0x1250);
    func_02084b2c(data_ov000_02170064.p, 0, 0x1250);
    func_ov000_02158fec();

    data_ov000_02170064.p[0] = 0;
    data_ov000_02170064.p[1] = (uint32_t)func_ov000_0215d998;
    data_ov000_02170064.p[2] = (uint32_t)func_ov000_0215bb24;
    data_ov000_02170064.p[3] = (uint32_t)func_ov000_0215bf00;
    data_ov000_02170064.p[4] = (uint32_t)func_ov000_0215bf0c;
    if (c == 0) {
        c = 4;
        c <<= 11;
    }
    data_ov000_02170064.p[5] = c;
    if (d == 0) {
        d = 0x2000;
    }
    data_ov000_02170064.p[6] = d;
    data_ov000_02170064.p[7] = 0;
    data_ov000_02170064.p[8] = (uint32_t)a;
    data_ov000_02170064.p[9] = 0;
    data_ov000_02170064.p[10] = 0;
    ((uint8_t *)data_ov000_02170064.p)[0x2d] = 0;
    data_ov000_02170064.p[25] = 0;
    data_ov000_02170064.p[26] = 0x02194c74;
    data_ov000_02170064.p[27] = 0x02194d74;
    data_ov000_02170064.p[28] = 0;
    data_ov000_02170064.p[29] = 0;
    data_ov000_02170064.p[30] = 0;
    data_ov000_02170064.p[31] = 0;
    data_ov000_02170064.p[32] = 0;
    data_ov000_02170064.p[33] = 0;
    data_ov000_02170064.p[34] = 0;
    data_ov000_02170064.p[35] = 0;

    func_ov000_0215b70c();

    func_ov000_0215a52c((uint8_t *)data_ov000_02170064.p + 0x90, a, (uint8_t *)data_ov000_02170064.p + 0x1c, b, *(uint32_t *)(a + 0x24),
                        (uint8_t *)data_ov000_02170064.p + 0x30, (void *)func_ov000_0215b95c, 0);

    func_ov000_021595f8((uint8_t *)data_ov000_02170064.p + 0x2f0, (uint8_t *)data_ov000_02170064.p + 0x1c,
                        (uint8_t *)data_ov000_02170064.p + 0x30, e, f);

    func_ov000_0215c240((uint8_t *)data_ov000_02170064.p + 0x350, (uint8_t *)data_ov000_02170064.p + 0x1c,
                        (void *)data_ov000_02170064.p, (uint8_t *)data_ov000_02170064.p + 4,
                        (const void *)0x02194c74, (const void *)0x02194d74, e, f);

    func_ov000_0216410c((uint8_t *)data_ov000_02170064.p + 0xb28);

    n = func_02092864(s);
    if (n < 0x100) {
        n = func_02092864(s);
    } else {
        n = 0xff;
    }
    buf = (uint8_t *)0x02194d74;
    func_02084ca4(s, buf, n);
    buf[n] = 0;
}
