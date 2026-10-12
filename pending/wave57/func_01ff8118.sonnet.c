#include "ffc/types.h"

extern uint32_t func_0204e5d8(uint32_t);
extern void func_01ff86c0(void *);
extern void func_02088f30(void);
extern uint32_t data_0213df0c;
extern uint32_t data_02144c00;

uint32_t func_01ff8118(uint32_t p, uint8_t *s)
{
    volatile uint32_t q = p; volatile uint32_t *pq = &q;
    uint32_t a = *(uint32_t *)(s + 0x45c) - 1;
    uint32_t *top = *(uint32_t **)(s + 0x2c);
    uint32_t sz = top[1] & ~3u;
    uint32_t aligned;
    uint32_t base;
    uint32_t res = 0xffffffffu;
    uint32_t r7;
    uint32_t end;
    uint32_t ret;
    uint32_t *blk;

    end = (uint32_t)top + sz;
    base = (*pq) + *(uint32_t *)(s + 0x448) + 0x10;
    if (!(*(uint32_t *)s & 2)) base -= sz;
    aligned = (base + a) & ~a;
    if ((int32_t)aligned > 0) res = func_0204e5d8(aligned);
    if (res == 0xffffffffu) goto L0160;
    *(uint32_t *)(s + 0x464) += aligned;
    if (res == end) {
        top[1] = (aligned + sz) | 1;
    } else {
        blk = (uint32_t *)res;
        r7 = 0;
        if (!(*(uint32_t *)s & 2)) {
            uint32_t off = 0;
            if (((res + 8) & 7) != 0) off = 8 - ((res + 8) & 7);
            blk = (uint32_t *)(res + off);
            r7 = ((res + aligned + off + sz + a) & ~a) - res - aligned;
            ret = func_0204e5d8(r7);
            if (ret == 0xffffffffu) {
                r7 = 0;
                ret = func_0204e5d8(0);
            }
        } else {
            ret = func_0204e5d8(0);
        }
        if (ret != 0xffffffffu) {
            *(uint32_t **)(s + 0x2c) = blk;
            blk[1] = (ret - (uint32_t)blk + r7) | 1;
            *(uint32_t *)(s + 0x464) += r7;
            if (sz != 0) {
                uint32_t n = (sz - 12) & ~7u;
                top[1] = n | 1;
                *(uint32_t *)((uint8_t *)top + n + 4) = 5;
                *(uint32_t *)((uint8_t *)top + n + 8) = 5;
                if (n >= 16) func_01ff86c0((uint8_t *)top + 8);
            }
        }
    }
    if (*(uint32_t *)(s + 0x464) > *(uint32_t *)(s + 0x468))
        *(uint32_t *)(s + 0x468) = *(uint32_t *)(s + 0x464);
    if (*(uint32_t *)(s + 0x460) + *(uint32_t *)(s + 0x464) > *(uint32_t *)(s + 0x470))
        *(uint32_t *)(s + 0x470) = *(uint32_t *)(s + 0x460) + *(uint32_t *)(s + 0x464);
    top = *(uint32_t **)(s + 0x2c);
    sz = top[1] & ~3u;
    if (sz < (*pq) + 0x10) goto L0160;
    *(uint32_t **)(s + 0x2c) = (uint32_t *)((uint8_t *)top + (*pq));
    top[1] = (*pq) | 1;
    ((uint32_t *)((uint8_t *)top + (*pq)))[1] = (sz - (*pq)) | 1;
    data_0213df0c += (*pq);
    return (uint32_t)top + 8;
L0160:
    func_02088f30();
    data_02144c00 = 12;
    return 0;
}
