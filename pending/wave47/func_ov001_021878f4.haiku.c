#include "ffc/types.h"

extern int32_t func_ov001_021875b0(uint32_t c);
extern int32_t func_ov001_02187628(void *a, uint8_t *b, int32_t n);
extern int32_t func_ov001_021875d8(uint8_t *b, int32_t n);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_ov001_021876a8(void *a, uint8_t *b, int32_t n, uint32_t *out32, uint16_t *out16);
extern uint32_t func_ov001_0218636c(void *a, uint32_t x, uint16_t y);
extern int32_t func_ov001_021863e8(void);
extern int32_t func_ov001_021876ec(void *a, uint32_t x, uint8_t *b, int32_t n, int32_t flag);
extern void func_ov001_02186c10(void *a, uint32_t x);
extern const uint8_t data_ov001_0219432c[];

int32_t func_ov001_021878f4(void *a, uint8_t *b, int32_t n) {
    uint8_t c;
    int32_t hdr;
    uint16_t h;
    uint32_t p;
    uint32_t id;
    int32_t r;

    if (n < 1) {
        return 0;
    }
    c = *b;
    hdr = func_ov001_021875b0(c);
    if (n < hdr) {
        return 0;
    }
    if (c & 0x40) {
        if (func_ov001_02187628(a, b + hdr, n - hdr) == 0) {
            return 0;
        }
    }
    if (c & 0x80) {
        if (func_ov001_021875d8(b + hdr, n - hdr) == 0) {
            return 0;
        }
    }
    if (func_02090410(b + 1, data_ov001_0219432c, 4) == 0) {
        return -1;
    }
    func_ov001_021876a8(a, b, n, &p, &h);
    id = func_ov001_0218636c(a, p, h);
    if (func_ov001_021863e8() != 0) {
        return -2;
    }
    r = func_ov001_021876ec(a, id, b, n, 1);
    func_ov001_02186c10(a, id);
    return r;
}
