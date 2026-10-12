#include "ffc/types.h"

extern void func_0208e728(void *a, uint32_t b, uint32_t c);
extern void func_0208e7b8(void *a, uint32_t b);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t a);

void func_0208e5c4(uint8_t *a0)
{
    uint8_t *r4;
    uint32_t idx;
    uint32_t bit;
    uint32_t val;
    uint16_t mask;
    uint16_t st;
    uint32_t addr;
    int t;

    r4 = *(uint8_t **)(a0 + 0x1c);
    if (r4 == 0) {
        return;
    }
    if (*(uint16_t *)(a0 + 2) != 0) {
        goto ae;
    }
    t = *(uint16_t *)(a0 + 4);
    if (t > 0x15) {
        goto hi;
    }
    if (t >= 0x15) {
        goto l38;
    }
    if (t > 9) {
        return;
    }
    if (t < 7) {
        return;
    }
    if (t == 7) {
        goto l4c;
    }
    if (t == 9) {
        goto l56;
    }
    return;
hi:
    if (t > 0x1a) {
        return;
    }
    if (t < 0x19) {
        return;
    }
    if (t == 0x19) {
        return;
    }
    if (t == 0x1a) {
        goto l56;
    }
    return;
l38:
    func_0208e728(r4, *(uint16_t *)(a0 + 0x12), *(uint32_t *)(a0 + 0xc));
    func_0208e7b8(r4, 0);
    return;
l4c:
    func_0208e7b8(r4, 0);
    return;
l56:
    idx = *(uint16_t *)(a0 + 0x12);
    bit = 1u << idx;
    val = func_02088978();
    mask = (uint16_t)(~bit & 0xffff);
    st = *(uint16_t *)(r4 + 0x808);
    addr = st << 9;
    *(uint16_t *)(r4 + addr) = (uint16_t)(*(uint16_t *)(r4 + addr) & mask);
    if (*(uint16_t *)(r4 + 0x818) == 1) {
        addr = ((st + 1) & 3) << 9;
        *(uint16_t *)(r4 + addr) = (uint16_t)(*(uint16_t *)(r4 + addr) & mask);
    }
    func_0208898c(val);
    func_0208e7b8(r4, 0);
    if (*(uint16_t *)(r4 + 0x818) == 1) {
        func_0208e7b8(r4, 0);
    }
    return;
ae:
    *(uint16_t *)(r4 + 0x81c) = 5;
}
