#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    void *p;
    void *q;
    void (*f1)(void);
    void (*f2)(void);
    void (*f3)(void);
} S;

extern const S data_020a5d50;
extern void func_02083f14(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, S *s);
extern void func_02083cb0(void);
extern void func_02083ce4(void);
extern void func_02083d68(void);

void func_02083ec0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint8_t buf1[20];
    uint8_t buf2[0x60];
    S s;

    s = data_020a5d50;
    s.p = buf2;
    s.q = buf1;
    s.f1 = func_02083cb0;
    s.f2 = func_02083ce4;
    s.f3 = func_02083d68;
    func_02083f14(a, b, c, d, e, &s);
}
