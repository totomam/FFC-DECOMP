#include "ffc/types.h"

extern void *(*data_ov000_0216bc74)(uint32_t size);
extern void (*data_ov000_0216bca4)(void *p);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_02084ca4(void *a, void *b, uint32_t n);
extern uint32_t func_ov000_0214c5f0(uint16_t *bits, uint32_t n);
extern void func_ov000_0214c894(void *buf, void *dst, uint32_t n);
extern void func_ov000_0214c95c(uint32_t a, void *b, void *c, void *d, uint32_t e, void *f);
extern void func_ov000_0214c7e0(void *buf, void *dst, void *src, uint32_t n);

void func_ov000_0214cb0c(uint16_t *p0, void *p1, uint16_t *p2, uint32_t p3, void *p4)
{
    void *buf;
    uint16_t *ptr2;
    uint32_t n2;
    uint32_t limit;
    uint32_t t;
    uint32_t r4;

    buf = data_ov000_0216bc74(p3 * 8);
    if (buf == 0) {
        return;
    }
    ptr2 = (uint16_t *)buf + p3;
    func_02084b2c(p0 + 1, 0, (p3 - 1) * 2);
    *p0 = 1;
    t = func_ov000_0214c5f0(p2, p3);
    r4 = (p3 - t) << 4;
    limit = p3 << 4;
    while (r4 < limit) {
        if (p2[p3 - ((int32_t)r4 >> 4) - 1] & (0x8000u >> (r4 & 15))) {
            func_02084ca4(p1, p0, p3 * 2);
            r4++;
            break;
        }
        r4++;
    }
    if (r4 < limit) {
        do {
            n2 = p3 * 2;
            func_ov000_0214c894(buf, p0, p3);
            func_02084ca4(buf, p0, n2);
            if (p4 != 0) {
                func_ov000_0214c95c(0, p0, p4, p0, p3, ptr2);
            }
            if (p2[p3 - ((int32_t)r4 >> 4) - 1] & (0x8000u >> (r4 & 15))) {
                func_ov000_0214c7e0(buf, p0, p1, p3);
                func_02084ca4(buf, p0, n2);
                if (p4 != 0) {
                    func_ov000_0214c95c(0, p0, p4, p0, p3, ptr2);
                }
            }
            r4++;
        } while (r4 < limit);
    }
    data_ov000_0216bca4(buf);
}
