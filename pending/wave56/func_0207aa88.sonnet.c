#include "ffc/types.h"

extern uint8_t *data_0213ec90;
extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);
extern int32_t func_0207eab0(void *obj, uint32_t a, int32_t b);

int32_t func_0207aa88(uint32_t idx, uint32_t cur, int32_t total, uint32_t off)
{
    uint8_t *ctx = data_0213ec90;
    uint8_t *p2 = *(uint8_t **)(ctx + 0x90);
    uint8_t *entry;
    int32_t lim;
    int32_t sum;

    if (idx >= *(uint32_t *)(p2 + 8)) {
        return -1;
    }
    entry = p2 + 0xc + (idx << 4);
    lim = *(int32_t *)(ctx + 0x9c);
    if (lim == 0) {
        lim = total;
    }
    for (sum = 0; sum < total;) {
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
        off += k;
        sum += k;
        cur = cur + k;
    }
    return sum;
}
