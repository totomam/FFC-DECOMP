#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern uint32_t func_0208d284(void);
extern void func_020849ac(uint32_t, void *, uint32_t);
extern uint32_t func_0208de98(void *, void *, void *, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_0208e534(void);

void func_0208e7b8(uint8_t *p, uint32_t b)
{
    uint32_t t = func_02088978();
    uint32_t r10, k, m, r, x;
    uint16_t idx, nidx, off;

    k = 0x808;
    if (*(uint16_t *)(p + (*(uint16_t *)(p + k) << 9)) == 0) {
        r10 = func_0208d284();
        idx = *(uint16_t *)(p + k);
        nidx = (uint16_t)((idx + 1) & 3);
        k += 0x10;
        if (*(uint16_t *)(p + k) == 1) {
            off = (uint16_t)((nidx + 1) & 3);
        } else {
            off = nidx;
        }
        func_020849ac(0, p + (off << 9), 0x200);
        m = 0x80e;
        x = *(uint16_t *)(p + m);
        r = r10 | 1;
        *(uint16_t *)(p + (off << 9)) = (uint16_t)(x & r);
        *(uint16_t *)(p + m - 6) = nidx;
        *(uint16_t *)(p + (idx << 9)) = *(uint16_t *)(p + m);
        if (b == 1) {
            *(uint16_t *)(p + (idx << 9)) &= 0xfffe;
        }
        func_0208898c(t);
        x = (uint16_t)(r10 & *(uint16_t *)(p + m));
        r = func_0208de98((void *)func_0208e534, p, p + (idx << 9),
                          *(uint16_t *)(p + m + 6), x,
                          *(uint16_t *)(p + m + 8), 1);
        if (r == 7) {
            *(uint16_t *)(p + 0x800 + idx * 2) = 0xffff;
            *(uint16_t *)(p + m - 4) = (uint16_t)((*(uint16_t *)(p + m - 4) + 1) & 3);
        } else if (r != 0 && r != 2) {
            *(uint16_t *)(p + m + 14) = 5;
        }
    } else {
        func_0208898c(t);
    }
}
