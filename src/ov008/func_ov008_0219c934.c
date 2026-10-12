#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;

extern void func_ov008_0219c9e0(uint8_t *p);
extern void func_ov005_02196144(void *a, uint8_t b);
extern void func_ov008_0219ca3c(uint8_t *p);
extern void func_02069724(S *out, uint8_t *p);
extern void func_02069828(uint8_t *p, S v);

int func_ov008_0219c934(uint8_t *p) {
    S s;

    if (p[0x105] == p[0x106]) {
        p[0x105] = 0;
    } else {
        p[0x105] = p[0x105] + 1;
    }
    func_ov008_0219c9e0(p);
    func_ov005_02196144(*(void **)(p + 0xd8), (uint8_t)(p[0x105] + 1));
    func_ov008_0219ca3c(p);
    func_02069724(&s, p);
    func_02069828(p, s);
    return 1;
}
