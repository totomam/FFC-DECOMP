#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t p0;
    uint16_t b;
    uint16_t p1;
    uint16_t c;
} S5;

extern uint8_t *func_0208ceec(void);
extern int func_0208cf38(int a, int b, int c);
extern void func_02087874(void *p, int n);
extern void func_02087890(uint32_t a, uint32_t b);
extern int func_0208ce30(int a, int b, uint32_t c, uint32_t d, uint16_t e, uint16_t f, uint16_t g, int h, int i);

int func_0208de98(int p0, int p1, uint32_t p2, uint32_t p3, S5 s)
{
    uint8_t *r4;
    int r7 = 1;
    int ret;

    r4 = *(uint8_t **)(func_0208ceec() + 4);
    ret = func_0208cf38(2, 9, 10);
    if (ret != 0) {
        return ret;
    }
    func_02087874(r4 + 0x188, 2);
    if (*(uint16_t *)(r4 + 0x188) == 0) {
        func_02087874(r4 + 0x182, 2);
        r7 = *(uint16_t *)(r4 + 0x182);
        func_02087874(r4 + 0x86, 2);
    }
    if (p2 == 0) {
        return 6;
    }
    if (r7 == 0) {
        return 7;
    }
    func_02087874(r4 + 0x7c, 2);
    r7 = 2;
    if (p2 == *(uint32_t *)(r4 + 0x7c)) {
        return 6;
    }
    if (p3 > (uint32_t)(r7 << 8)) {
        return 6;
    }
    if (p3 == 0) {
        return 6;
    }
    func_02087890(p2, p3);
    ret = func_0208ce30(0xf, 7, p2, p3, s.a, s.b, s.c, p0, p1);
    if (ret != 0) {
        return ret;
    }
    return r7;
}
