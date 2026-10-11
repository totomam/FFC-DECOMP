#include "ffc/types.h"

struct N {
    struct N *l;
    struct N *r;
    uint8_t pad[4];
    uint16_t k;
};

struct N *func_020513f0(void *a, uint16_t *key, struct N *cur)
{
    struct N *best;
    uint16_t kv;
    if (cur) {
        kv = *key;
        do {
            if (cur->k >= kv) {
                best = cur;
                cur = cur->l;
            } else {
                cur = cur->r;
            }
        } while (cur);
    }
    return best;
}
