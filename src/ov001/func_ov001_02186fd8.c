#include "ffc/types.h"

extern uint32_t func_ov001_02186f98(void *obj, uint32_t n);
extern uint32_t func_ov000_021663e8(void *dst, uint32_t src, uint32_t n, uint32_t r3);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern int32_t func_ov000_02165588(void *p);
extern uint8_t *func_ov000_0214ee74(void *p);
extern int32_t func_ov000_02165418(uint32_t a, uint32_t b, uint32_t c);
extern int32_t func_ov000_021654bc(int32_t v, void *p, uint32_t n);
extern void func_ov000_02165428(int32_t v);
extern uint32_t data_ov001_0219575c;
extern uint8_t data_ov001_02194310[];

uint32_t func_ov001_02186fd8(uint8_t *p)
{
    uint8_t hdr[8];
    uint8_t buf[0x80];
    uint32_t r3;
    int32_t s;
    int32_t res;
    uint8_t *ret;
    uint8_t *src;
    uint8_t *dst;
    int32_t st;
    int32_t t;

    r3 = func_ov001_02186f98(p + 0xc, 0x14);
    if (data_ov001_0219575c != 0) {
        func_ov000_021663e8(buf, data_ov001_0219575c, 0x80, r3);
    } else {
        func_02086ad4(buf, (uint32_t)data_ov001_02194310, p + 0xc, r3);
    }
    s = 2;
    hdr[1] = (uint8_t)s;
    *(uint16_t *)(hdr + 2) = 0xee70;
    res = func_ov000_02165588(buf);
    *(int32_t *)(hdr + 4) = res;
    if (res == s - 3) {
        ret = func_ov000_0214ee74(buf);
        if (ret == 0) {
            return s;
        }
        src = *(uint8_t **)(*(uint8_t **)(ret + 0xc));
        dst = hdr + 4;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
    }
    st = *(int32_t *)(p + 0x6b4);
    if (st == -1) {
        st = func_ov000_02165418(2, 1, 0);
        *(int32_t *)(p + 0x6b4) = st;
        if (st == -1) {
            return 1;
        }
    }
    t = 8;
    if (func_ov000_021654bc(st, hdr, t) != 0) {
        func_ov000_02165428(*(int32_t *)(p + 0x6b4));
        *(int32_t *)(p + 0x6b4) = t - 9;
        return 3;
    }
    return 0;
}
