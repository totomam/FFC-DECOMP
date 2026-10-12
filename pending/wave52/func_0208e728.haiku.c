#include "ffc/types.h"

extern uint32_t func_0208e8e8(uint8_t *p, uint32_t m, void *q);
extern void func_020849c4(uint32_t a, uint32_t b, uint32_t c);
extern void func_020849ac(uint32_t a, uint32_t b, uint32_t c);
extern void func_02088978(void);
extern void func_0208898c(void);

void func_0208e728(uint8_t *p, uint32_t n, uint32_t flag) {
    uint16_t bit = (uint16_t)(1u << n);
    uint16_t mask = *(uint16_t *)(p + 0x80e);
    uint32_t idx;
    uint32_t off;
    uint32_t res;

    if (!(mask & bit)) {
        return;
    }
    idx = *(uint16_t *)(p + 0x808);
    off = idx << 9;
    if (!(*(uint16_t *)(p + off) & bit)) {
        if (*(uint16_t *)(p + 0x818) != 1) {
            return;
        }
        idx = (idx + 1) & 3;
        off = idx << 9;
        if (!(*(uint16_t *)(p + off) & bit)) {
            return;
        }
    }
    off = idx << 9;
    res = func_0208e8e8(p, mask, p + off + 4);
    if (flag != 0) {
        func_020849c4(flag, res, *(uint16_t *)(p + 0x810));
    } else {
        func_020849ac(0, res, *(uint16_t *)(p + 0x810));
    }
    func_02088978();
    *(uint16_t *)(p + off) &= (uint16_t)~bit;
    *(uint16_t *)(p + off + 2) |= bit;
    func_0208898c();
}
