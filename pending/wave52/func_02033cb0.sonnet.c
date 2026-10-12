#include "ffc/types.h"

extern void func_020179d0(void *out, uint32_t v);
extern void *func_02052d90(const void *mar, uint32_t index);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int16_t func_0203c410(const int16_t *values, uint32_t index);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern void func_0203c44c(int16_t *values, uint32_t index, int16_t v);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t spare[4];
    uint32_t pad;
    void *f1;
    uint32_t f2;
    uint8_t flag;
} Frame;

void func_02033cb0(uint32_t x, uint32_t a, uint32_t b, int16_t *c)
{
    Frame fr;
    uint32_t *p;
    uint8_t *m;
    uint8_t *e;
    uint32_t val;
    int32_t s;
    int i;

    if (a == 0) {
        return;
    }
    func_020179d0(&fr.pad, data_020b8e44);
    m = (uint8_t *)func_02052d90(fr.f1, fr.f2);
    e = m + *(uint32_t *)(m + *(uint32_t *)(m + 0xc) + (b - 1) * 4);
    val = *(uint32_t *)(e + *(uint32_t *)(e + 4) + (a - 1) * 4);
    s = (int32_t)func_020817c8((int32_t)val, 0x3E8000) >> 12;
    for (i = 0; i < 4; i++) {
        int32_t prod = s * func_0203c410(c, i);
        func_0203c44c(c, i, (int16_t)func_0209a76c(prod, 1000));
    }
    p = &fr.pad;
    if (fr.f1 != 0) {
        if (((uint8_t *)p)[0xc] != 0) {
            func_02052d3c((void *)p[1], (void *)p[2]);
        }
        func_02052c04((void *)p[1]);
    }
    func_02053290(p);
}
