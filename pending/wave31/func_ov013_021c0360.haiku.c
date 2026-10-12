#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern void func_ov013_021c040c(void *p);
extern void func_ov005_02196144(uint32_t a, uint8_t b);
extern void func_ov013_021c0464(void *p);
extern void func_02069724(S8 *out, void *p);
extern void func_02069828(void *p, S8 v);

uint32_t func_ov013_021c0360(void *p)
{
    uint32_t *w = (uint32_t *)p;
    S8 s;

    if (w[0x42] == w[0x43]) {
        w[0x42] = 0;
    } else {
        w[0x42] = w[0x42] + 1;
    }

    func_ov013_021c040c(p);
    func_ov005_02196144(w[0x35], (uint8_t)(w[0x42] + 1));
    func_ov013_021c0464(p);
    func_02069724(&s, p);
    func_02069828(p, s);
    return 1;
}
