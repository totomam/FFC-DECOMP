#include "ffc/types.h"

typedef struct {
    uint32_t pad[3];
    uint32_t f;
} Cfg;

extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern uint32_t func_ov000_0214aa70(uint32_t a, uint8_t *b);
extern uint32_t func_ov000_02147c54(uint8_t *a, uint32_t b, uint32_t c, uint32_t d, Cfg *e);
extern void *(*data_ov000_0216bc74)(uint32_t);
extern void (*data_ov000_0216bca4)(void *);

uint32_t func_ov000_0214b818(uint8_t *p0, uint32_t p1, uint8_t *p2, int32_t p3, Cfg *p4)
{
    uint32_t fv = p4->f;
    int32_t rest;
    uint32_t ret = 0;
    int32_t total = p1 + p3;
    uint8_t *buf;
    int32_t n;
    uint32_t m;
    uint32_t k;

    for (;;) {
        n = 0xb4f;
        if (total <= 0xb4f) {
            n = total;
        }
        buf = (uint8_t *)data_ov000_0216bc74(n + 0x19);
        if (buf == 0) {
            break;
        }
        m = (uint32_t)n;
        if (p1 < m) {
            m = p1;
        }
        rest = n - (int32_t)m;
        func_02084ca4(p0, buf + 5, m);
        p0 += m;
        p1 -= m;
        func_02084ca4(p2, buf + 5 + m, rest);
        p2 += rest;
        buf[0] = 0x17;
        buf[1] = 3;
        buf[2] = 0;
        buf[3] = (uint8_t)(n >> 8);
        buf[4] = (uint8_t)n;
        k = func_ov000_0214aa70(fv, buf);
        if (func_ov000_02147c54(buf, k, 0, 0, p4) < k) {
            n = 0;
        }
        data_ov000_0216bca4(buf);
        total -= n;
        ret += n;
        if (total == 0) {
            break;
        }
        if (n == 0) {
            break;
        }
    }
    return ret;
}
