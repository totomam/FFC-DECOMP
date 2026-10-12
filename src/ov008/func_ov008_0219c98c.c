#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov008_0219c9e0(void *p);
extern void func_ov005_02196144(uint32_t a, uint8_t b);
extern void func_ov008_0219ca3c(void *p);
extern void func_02069724(Pair *dst, void *src);
extern void func_02069828(void *p, Pair v);

int func_ov008_0219c98c(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    Pair s;
    uint8_t c = p[0x105];

    if (c == 0) {
        p[0x105] = p[0x106];
    } else {
        p[0x105] = c - 1;
    }
    func_ov008_0219c9e0(p);
    func_ov005_02196144(*(uint32_t *)(p + 0xd8), (uint8_t)(p[0x105] + 1));
    func_ov008_0219ca3c(p);
    func_02069724(&s, p);
    func_02069828(p, s);
    return 1;
}
