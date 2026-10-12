#include "ffc/types.h"

extern void func_0206cb44(void *p);
extern void func_0206d118(void *p);
extern void func_0206cf64(void *p);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_0208dca0(uint32_t a, uint32_t b);
extern uint8_t data_020b2020[];

void func_0206d298(void *pp, void *ee)
{
    uint8_t *p = (uint8_t *)pp;
    uint8_t *e = (uint8_t *)ee;
    uint16_t t;
    uint16_t idx;
    uint32_t off;
    uint8_t *buf;

    if (*(uint16_t *)(e + 2) != 0) {
        func_0206cb44(p);
        return;
    }

    t = *(uint16_t *)(e + 8);
    if (t == 0) {
        func_0206d118(data_020b2020);
        *(uint32_t *)(p + 0x30b0) = 5;
        *(uint32_t *)(p + 0x31b8) = *(uint32_t *)(p + 0x31b4);
        *(uint8_t *)(p + 0x30b4) = 1;
        func_0206cf64(p);
        return;
    }
    if (t == 7) {
        if (*(uint8_t *)(p + 0xf92) != 0) {
            func_0206cb44(p);
            return;
        }
        idx = *(uint16_t *)(e + 0x10);
        *(uint16_t *)(p + 0xf90) = (uint16_t)(*(uint16_t *)(p + 0xf90) | (uint16_t)(1u << idx));
        buf = *(uint8_t **)(*(uint8_t **)(p + 0x3220) + 0x88);
        off = (uint32_t)idx << 5;
        if (buf[off] != 0) {
            return;
        }
        func_02084ca4(e + 0x14, buf + off + 2, 0x18);
        func_02084ca4(e + 0xa, buf + off + 0x1a, 6);
        buf[off] = 1;
        return;
    }
    if (t == 9 || t == 0x1a) {
        idx = *(uint16_t *)(e + 0x10);
        buf = *(uint8_t **)(*(uint8_t **)(p + 0x3220) + 0x88);
        buf[((uint32_t)idx << 5) + 1] = 1;
        *(uint16_t *)(p + 0xf90) = (uint16_t)(*(uint16_t *)(p + 0xf90) & (uint16_t)~(1u << idx));
        if (*(uint8_t *)(p + 0xf92) != 0 && *(uint16_t *)(e + 8) == 9) {
            *(uint8_t *)(p + 0x30b6) = 1;
            func_0208dca0(0, *(uint16_t *)(p + 0xf90));
            func_0206cb44(p);
        }
        return;
    }
}
