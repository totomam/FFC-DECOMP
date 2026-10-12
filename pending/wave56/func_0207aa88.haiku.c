#include "ffc/types.h"

extern uint8_t *data_0213ec90;
extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);
extern int32_t func_0207eab0(void *obj, uint32_t a, int32_t b);

int32_t func_0207aa88(uint32_t idx, uint32_t r1, int32_t r2, uint32_t r3)
{
    uint32_t cur = r1;
    int32_t total = r2;
    uint8_t *ctx = data_0213ec90;
    uint8_t *p2 = *(uint8_t **)(ctx + 0x90);
    uint32_t count = *(uint32_t *)(p2 + 8);
    uint8_t *entry;
    int32_t lim;
    uint32_t off = r3;
    int32_t sum;

    if (idx >= count) {
        return -1;
    }
    entry = p2 + 0xc + (idx << 4);
    lim = *(int32_t *)(ctx + 0x9c);
    if (lim == 0) {
        lim = total;
    }
    sum = 0;

    while (sum < total) {
        int32_t rem;
        uint32_t avail;
        int32_t k;

        ctx += 0x34;
        rem = total - sum;
        if (rem > lim) {
            rem = lim;
        }
        avail = *(uint32_t *)(entry + 4) - off;
        if ((uint32_t)rem > avail) {
            rem = (int32_t)avail;
        }
        if (rem == 0) {
            break;
        }
        if (func_0207ea98(ctx, *(uint32_t *)entry + off, 0) == 0) {
            return -1;
        }
        k = func_0207eab0(ctx, cur, rem);
        if (k < 0) {
            return k;
        }
        sum += k;
        off += k;
        cur += k;
    }
    return sum;
}
