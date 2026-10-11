#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S2;

extern void func_ov007_021ba704(uint8_t *p);
extern void func_02069724(S2 *dst, uint8_t *src);
extern void func_02069828(uint8_t *p, S2 s);

void func_ov007_021ba8f0(uint8_t *p)
{
    S2 s;
    int idx = 0x144;
    int v = p[idx];
    if (v == 0) {
        v = p[idx + 1];
        goto store;
    }
    v = v - 1;
store:
    p[idx] = v;
    func_ov007_021ba704(p);
    func_02069724(&s, p);
    func_02069828(p, s);
}
