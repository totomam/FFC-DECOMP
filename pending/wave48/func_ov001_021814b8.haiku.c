#include "ffc/types.h"

extern int32_t func_ov000_02165704(uint32_t h);
extern int32_t func_ov000_021655a0(uint32_t h);
extern int32_t func_ov000_021654f8(uint32_t h, void *buf, uint32_t n, uint32_t z, uint32_t *out, uint32_t *cnt);
extern int32_t func_ov001_021813cc(uint32_t *a, uint32_t x, uint32_t key);
extern int32_t func_ov001_0218145c(uint32_t *a, uint32_t x, uint32_t key, uint32_t z);
extern int32_t func_ov001_02182188(uint32_t *a);
extern int32_t func_ov001_02181200(uint32_t *a, void *buf, int32_t r, uint32_t x, uint32_t key);

int func_ov001_021814b8(uint32_t *a)
{
    int32_t e23;
    int32_t e35;
    uint32_t cnt;
    uint32_t out;
    uint32_t x;
    uint8_t buf[0x5d4];
    uint16_t key;
    uint32_t h;
    int32_t r;

    if (func_ov000_02165704(*a) != 0) {
        do {
            cnt = 8;
            r = func_ov000_021654f8(*a, buf, 0x5dc, 0, &out, &cnt);
            h = (out >> 16) & 0xffff;
            key = (uint16_t)(((h >> 8) & 0xff) | ((h << 8) & 0xff00));
            if (r == -1) {
                r = func_ov000_021655a0(*a);
                if (r == -15) {
                    if (func_ov001_021813cc(a, x, key) == 0) {
                        return 0;
                    }
                } else if (r == -23) {
                    if (func_ov001_0218145c(a, x, key, 0) == 0) {
                        return 0;
                    }
                } else if (r != -35) {
                    func_ov001_02182188(a);
                    return 0;
                }
            } else {
                if (func_ov001_02181200(a, buf, r, x, key) == 0) {
                    return 0;
                }
            }
        } while (func_ov000_02165704(*a) != 0);
    }
    return 1;
}
