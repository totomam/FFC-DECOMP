#include "ffc/types.h"
#define KEY ((uint16_t)(((s.o1 >> 8) & 0xff) | ((s.o1 << 8) & 0xff00)))

extern int32_t func_ov000_02165704(uint32_t h);
extern int32_t func_ov000_021655a0(uint32_t h);
extern int32_t func_ov000_021654f8(uint32_t h, void *buf, uint32_t n, uint32_t z, uint32_t *out, uint32_t *cnt);
extern int32_t func_ov001_021813cc(uint32_t *a, uint32_t x, uint32_t key);
extern int32_t func_ov001_0218145c(uint32_t *a, uint32_t x, uint32_t key, uint32_t z);
extern int32_t func_ov001_02182188(uint32_t *a);
extern int32_t func_ov001_02181200(uint32_t *a, void *buf, int32_t r, uint32_t x, uint32_t key);

typedef struct { uint32_t cnt; uint16_t o0; uint16_t o1; uint32_t x; uint8_t buf[0x5dc]; } S;

int func_ov001_021814b8(uint32_t *a)
{
    S s;
    int32_t r;
    int32_t e23 = -23;
    int32_t e35 = -35;
    int32_t m1 = -1;

    if (func_ov000_02165704(*a) != 0) do {
        s.cnt = 8;
        r = func_ov000_021654f8(*a, s.buf, 0x5dc, 0, (uint32_t *)&s.o0, &s.cnt);
        if (r == m1) {
            r = func_ov000_021655a0(*a);
            if (r == -15) {
                if (func_ov001_021813cc(a, s.x, KEY) == 0) return 0;
            } else if (r == e23) {
                if (func_ov001_0218145c(a, s.x, KEY, 0) == 0) return 0;
            } else if (r != e35) {
                func_ov001_02182188(a);
                return 0;
            }
        } else {
            if (func_ov001_02181200(a, s.buf, r, s.x, KEY) == 0) return 0;
        }
    } while (func_ov000_02165704(*a) != 0);
    return 1;
    return 1;
}
