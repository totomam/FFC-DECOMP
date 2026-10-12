#include "ffc/types.h"

extern void *func_ov000_02166414(void *a0);
extern int32_t func_ov001_021821ac(uint32_t a, uint32_t b, void *out);
extern int32_t func_ov000_021652a8(int32_t a, int32_t b, int32_t c, const void *d, ...);
extern void func_ov000_02168784(void *a, void *b);
extern int32_t func_ov000_0216888c(void *a, void *b, void *c, int32_t d, int32_t e);
extern void func_ov001_02180628(void *a, void *b);
extern void func_ov001_02180630(void *a, int32_t b, int32_t c);
extern int32_t func_ov000_02168768(void *a);
extern int32_t func_ov000_02168814(void *a, int32_t b);
extern void func_ov000_02166428(void);
extern void func_ov000_021664c4(void);
extern void func_ov000_021665c8(void);
extern void func_ov000_02166768(void);
extern void func_ov000_02166828(void);
extern uint8_t data_ov000_0216b6ec[];
extern uint8_t data_ov000_0216b718[];
extern uint8_t data_ov000_0216b75c[];

typedef struct {
    uint32_t a;
    uint16_t b;
    void *p;
} Loc;

typedef struct {
    void (*tbl[4])(void);
    uint8_t out[16];
    uint32_t pad[2];
    Loc loc;
    uint8_t buf[16];
    uint8_t tail[0x2c];
} Frame;

int32_t func_ov000_02166978(void *a0, void *a1, uint32_t a2, uint32_t a3, int32_t s0, const uint8_t *s1, int32_t s2)
{
    Frame f;
    uint8_t *p;
    uint8_t *src;
    uint8_t *dst;
    int32_t r;
    uint32_t n;

    n = 0x10;
    p = (uint8_t *)func_ov000_02166414(a0);
    r = func_ov001_021821ac(a2, a3, f.out);
    func_ov000_021652a8(0xc, 0, 0x10, data_ov000_0216b6ec, r);

    if (s2 >= 0x10) {
        n = 0x10;
        src = (uint8_t *)s1;
        dst = f.buf;
        do {
            *dst++ = *src++;
        } while (--n != 0);
        f.loc.a = a2;
        f.loc.b = a3;
        f.loc.p = a1;
        func_ov000_02168784(*(void **)(p + 4), &f.loc);
        n = 0;
        r = func_ov000_0216888c(*(void **)(p + 8), f.buf, (void *)func_ov000_02166428, n, n);
        if (r != n - 1) {
            f.tbl[2] = func_ov000_021664c4;
            f.tbl[0] = func_ov000_021665c8;
            f.tbl[3] = func_ov000_02166768;
            f.tbl[1] = func_ov000_02166828;
            func_ov001_02180628(f.loc.p, f.tbl);
            return func_ov000_021652a8(0xc, n, 0x10, data_ov000_0216b718);
        }
    }

    if (*(void **)(p + 0x20) != 0) {
        r = func_ov001_021821ac(a2, a3, f.out);
        func_ov000_021652a8(0xc, 0, 0x10, data_ov000_0216b75c, r);
        {
            int32_t (*fn)(uint32_t, uint32_t, int32_t, const uint8_t *, int32_t, void *) =
                (int32_t (*)(uint32_t, uint32_t, int32_t, const uint8_t *, int32_t, void *))*(void **)(p + 0x20);
            return fn(a2, a3, s0, s1, s2, *(void **)(p + 0x2c));
        }
    }

    func_ov001_02180630(a1, 0, 0);
    r = func_ov000_02168768(*(void **)(p + 4));
    return func_ov000_02168814(*(void **)(p + 4), r - 1);
}
